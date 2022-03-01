//Corresponding header
#include "robo_miner_gui/helpers/SolutionValidator.h"

//C system headers

//C++ system headers
#include <algorithm>

//Other libraries headers
#include "utils/ErrorCode.h"
#include "utils/Log.h"

//Own components headers
#include "robo_miner_gui/helpers/config/SolutionValidatorConfig.h"

int32_t SolutionValidator::init(
    const SolutionValidatorConfig &cfg,
    const SolutionValidatorOutInterface &outInterface) {
  if (SUCCESS != initOutInterface(outInterface)) {
    LOGERR("Error, initOutInterface() failed");
    return FAILURE;
  }

  _longestSequence = cfg.longestSequence;
  const size_t uniquesCount = std::unique(_longestSequence.begin(),
                                  _longestSequence.end())
                              - _longestSequence.begin();
  if (uniquesCount != cfg.longestSequence.size()) {
    LOGERR("Error, provided longestSequence solution contains duplicates");
    return FAILURE;
  }

  std::sort(_longestSequence.begin(), _longestSequence.end());
  _validationOptions.longestSequenceValidationPoints.resize(uniquesCount,
      false);

  return SUCCESS;
}

ValidationResult SolutionValidator::validateFieldMap(
    const std::vector<uint8_t> &rawData, uint32_t rows, uint32_t cols,
    std::string &outError) {
  ValidationResult result;
  if (_validationOptions.fieldMapValidated) {
    outError = "FieldMap was already validated";
    result.success = false;
    return result;
  }

  if (0 == rows) {
    outError = "Invalid arguments. 'rows' args can't be 0";
    result.success = false;
    return result;
  }

  if (0 == cols) {
    outError = "Invalid arguments. 'cols' args can't be 0";
    result.success = false;
    return result;
  }

  FieldData data(rows);
  for (uint32_t row = 0; row < rows; ++row) {
    const auto startElemId = row * cols;
    const auto endElemId = startElemId + cols;
    std::copy(rawData.begin() + startElemId, rawData.begin() + endElemId,
        std::back_inserter(data[row]));
  }

  const auto &fieldData = _outInterface.getFieldDescriptionCb().data;
  if (fieldData != data) {
    auto &tries = _validationOptions.fieldMapValidationsTriesLeft;
    ;
    --tries;
    outError = "Incorrect FieldMap provided. Tries left: ";
    outError.append(std::to_string(tries));
    result.success = false;

    if (0 == tries) {
      result.majorError = true;
    }
    return result;
  }

  _validationOptions.fieldMapValidated = true;
  return result;
}

ValidationResult SolutionValidator::validateLongestSequence(
    CrystalSequence &sequence, std::string &outError) {
  ValidationResult result;
  if (!_validationOptions.fieldMapValidated) {
    outError = "Service is locked. FieldMap needs to be validated first";
    result.success = false;
    return result;
  }

  if (_validationOptions.longestSequenceValidated) {
    outError = "Longest sequence was already validated";
    result.success = false;
    return result;
  }

  std::sort(sequence.begin(), sequence.end());

  CrystalSequence diff;
  std::set_difference(_longestSequence.begin(), _longestSequence.end(),
      sequence.begin(), sequence.end(), std::inserter(diff, diff.begin()));
  if (!diff.empty()) {
    auto &tries = _validationOptions.longestSequenceValidationsTriesLeft;
    ;
    --tries;
    outError = "Incorrect longest sequence provided. Tries left: ";
    outError.append(std::to_string(tries));
    result.success = false;

    if (0 == tries) {
      result.majorError = true;
    }
    return result;
  }

  _validationOptions.longestSequenceValidated = true;
  return result;
}

ValidationResult SolutionValidator::finishRobotMove(const FieldPos &fieldPos) {
  ValidationResult result;
  if (!_validationOptions.miningActivated) {
    result.success = false;
    return result;
  }

  const auto success = validateMiningPos(fieldPos);
  if (!success) {
    result.success = false;
    result.majorError = true;
    return result;
  }

  const auto &validationPoints =
      _validationOptions.longestSequenceValidationPoints;
  const auto it = std::find(validationPoints.begin(), validationPoints.end(),
      false);

  if (it != validationPoints.end()) {
    //found a point, which is still not marked as 'mined'
    result.success = false;
    return result;
  }

  return result;
}

ValidationResult SolutionValidator::validateActivateMining(
    std::string &outError) {
  ValidationResult result;
  if (!_validationOptions.longestSequenceValidated) {
    outError =
        "Service is locked. Longest sequence needs to be validated first";
    result.success = false;
    return result;
  }

  if (_validationOptions.miningActivated) {
    outError = "Mining was already activated";
    result.success = false;
    return result;
  }

  const auto robotFieldPos = _outInterface.getRobotStateCb().fieldPos;
  const bool success = validateMiningPos(robotFieldPos);
  if (!success) {
    outError = "Initial mining position row, col [";
    outError.append(std::to_string(robotFieldPos.row)).append(",").append(
        std::to_string(robotFieldPos.col)).
        append("] is outside of the longest sequence boundaries");
    result.success = false;
    result.majorError = true;
    return result;
  }

  _validationOptions.miningActivated = true;
  return result;
}

bool SolutionValidator::isMiningActive() const {
  return _validationOptions.miningActivated;
}

int32_t SolutionValidator::initOutInterface(
    const SolutionValidatorOutInterface &outInterface) {
  _outInterface = outInterface;
  if (nullptr == _outInterface.getFieldDescriptionCb) {
    LOGERR("Error, nullptr provided for GetFieldDescriptionCb");
    return FAILURE;
  }

  if (nullptr == _outInterface.getRobotStateCb) {
    LOGERR("Error, nullptr provided for GetRobotStateCb");
    return FAILURE;
  }

  return SUCCESS;
}

bool SolutionValidator::validateMiningPos(const FieldPos &fieldPos) {
  const auto it = std::find(_longestSequence.begin(), _longestSequence.end(),
      fieldPos);
  if (it == _longestSequence.end()) {
    LOGR(
        "Minining FieldPos row, col [%d,%d] outside of longest sequence " "boundaries",
        fieldPos.row, fieldPos.col);
    return false;
  }

  //mark the tile from the sequence as visited
  //each index in the longestSequenceValidationPoints
  //correspond to the _longestSequence
  const auto fieldIdx = it - _longestSequence.begin();
  _validationOptions.longestSequenceValidationPoints[fieldIdx] = true;

  return true;
}
