//Corresponding header
#include "robo_collector_gui/panels/PanelHandler.h"

//C system headers

//C++ system headers

//Other libraries headers
#include "utils/ErrorCode.h"
#include "utils/Log.h"

//Own components headers

int32_t PanelHandler::init(const PanelHandlerConfig &cfg) {
  constexpr auto panelX = 1250;
  _healthPanel.create(cfg.healthPanelRsrcId);
  _healthPanel.setPosition(panelX, 390);

  _healthIndicator.create(cfg.healthIndicatorRsrcId);
  _healthIndicator.setPosition(panelX + 79, 403);
  _healthIndicator.setCropRect(_healthIndicator.getCropRect());

  _horDelimiter.create(cfg.horDelimiterRsrcId);
  _horDelimiter.setPosition(1245, 500);

  _vertDelimiter.create(cfg.vertDelimiterRsrcId);
  _vertDelimiter.setPosition(1200, 550);

  if (SUCCESS != _timePanel.init(cfg.timePanelCfg)) {
    LOGERR("Error, _timePanel.init() failed");
    return FAILURE;
  }

  const auto lightGoldColor = Color(0xD4AF37FF);
  NumberCounterConfig coinCounterCfg;
  coinCounterCfg.backgroundRsrcId = cfg.coinPanelRsrcId;
  coinCounterCfg.backgroundRsrcPos = Point(panelX, 215);
  coinCounterCfg.fontId = cfg.coinPanelFontId;
  coinCounterCfg.fontColor = lightGoldColor;
  coinCounterCfg.incrTimerId = cfg.coinPanelIncrTimerId;
  coinCounterCfg.decrTimerId = cfg.coinPanelDecrTimerId;
  coinCounterCfg.startValue = 0;
  coinCounterCfg.boundaryRect = Rectangle(1300, 230, 346, 120);

  if (SUCCESS != _coinPanel.init(coinCounterCfg)) {
    LOGERR("Error, _coinPanel.init() failed");
    return FAILURE;
  }

  _totalCoinsText.create(cfg.coinPanelFontId, "/ 30", lightGoldColor,
      Point(1540, 245));

  return SUCCESS;
}

void PanelHandler::draw() const {
  _timePanel.draw();
  _healthPanel.draw();
  _healthIndicator.draw();
  _coinPanel.draw();
  _totalCoinsText.draw();
//  _horDelimiter.draw();
//  _vertDelimiter.draw();
}

void PanelHandler::decreaseHealthIndicator(int32_t damage) {
  auto cropRectangle = _healthIndicator.getCropRect();
  cropRectangle.w -= damage;
  _healthIndicator.setCropRect(cropRectangle);
}

void PanelHandler::increaseCollectedCoins(int32_t coins) {
  _coinPanel.increaseWith(coins);
}

