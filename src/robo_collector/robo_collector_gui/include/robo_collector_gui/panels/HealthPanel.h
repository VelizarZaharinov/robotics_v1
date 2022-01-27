#ifndef ROBO_COLLECTOR_GUI_HEALTHPANEL_H_
#define ROBO_COLLECTOR_GUI_HEALTHPANEL_H_

//C system headers

//C++ system headers
#include <cstdint>

//Other libraries headers
#include "manager_utils/drawing/Image.h"

//Own components headers
#include "robo_collector_gui/panels/config/HealthPanelConfig.h"

//Forward declarations

class HealthPanel {
public:
  int32_t init(const HealthPanelConfig& cfg);
  void draw() const;

  /* 1 damage == 1px */
  void decreaseHealthIndicator(int32_t damage);

private:
  Image _panel;
  Image _indicator;

  int32_t _indicatorReduceTimerId = 0;
};

#endif /* ROBO_COLLECTOR_GUI_HEALTHPANEL_H_ */