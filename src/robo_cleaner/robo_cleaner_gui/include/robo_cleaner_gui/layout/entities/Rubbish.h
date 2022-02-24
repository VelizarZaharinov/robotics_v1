#ifndef ROBO_CLEANER_GUI_RUBBISH_H_
#define ROBO_CLEANER_GUI_RUBBISH_H_

//C system headers

//C++ system headers
#include <cstdint>

//Other libraries headers
#include "robo_common/defines/RoboCommonFunctionalDefines.h"
#include "robo_common/layout/field/FieldPos.h"
#include "manager_utils/drawing/Image.h"

//Own components headers

//Forward declarations

struct RubbishConfig {
  uint64_t rsrcId = 0;
  FieldPos fieldPos;
  Point tileOffset;
  int32_t frameId = 0;
};

class Rubbish {
public:
  int32_t init(const RubbishConfig& cfg,
               const GetFieldDescriptionCb& getFieldDescriptionCb);
  void draw() const;

private:
  Image _img;
};

#endif /* ROBO_CLEANER_GUI_RUBBISH_H_ */
