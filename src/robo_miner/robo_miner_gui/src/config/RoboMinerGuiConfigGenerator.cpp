//Corresponding header
#include "robo_miner_gui/config/RoboMinerGuiConfigGenerator.h"

//C system headers

//C++ system headers

//Other libraries headers
#include <rclcpp/utilities.hpp>
#include <ament_index_cpp/get_package_share_directory.hpp>
#include "robo_common/defines/RoboCommonDefines.h"
#include "resource_utils/common/ResourceFileHeader.h"
#include "utils/ErrorCode.h"
#include "utils/Log.h"

//Own components headers
#include "robo_miner_gui/config/RoboMinerGuiConfig.h"
#include "robo_miner_gui/defines/RoboMinerGuiDefines.h"
#include "generated/RoboMinerGuiResources.h"

namespace {
//TODO parse the params from config
constexpr auto PROJECT_FOLDER_NAME = "robo_miner_gui";

//screen
constexpr auto WINDOW_X = 72;
constexpr auto WINDOW_Y = 27;
constexpr auto WINDOW_WIDTH = 1848;
constexpr auto WINDOW_HEIGHT = 1053;

//misc
constexpr auto TILE_WIDTH_HEIGHT = 160;

//TODO compute from the field config
constexpr auto TOTAL_FIELD_TILES = 42;
constexpr auto LONGEST_CRYSTALS_SEQ_CTN = 17;

enum TimerId {
  ROBOT_MOVE_ANIM_TIMER_ID,
  ROBOT_WALL_COLLISION_ANIM_TIMER_ID,
  ROBOT_COLLISION_ANIM_TIMER_ID,
  ROBOT_DAMAGE_ANIM_TIMER_ID,
  HEALTH_PANEL_REDUCE_INDICATOR_TIMER_ID,
  TILE_PANEL_INCR_TIMER_ID,
  TILE_PANEL_DECR_TIMER_ID,
  CRYSTAL_PANEL_INCR_TIMER_ID,
  CRYSTAL_PANEL_DECR_TIMER_ID,
};

RobotBaseConfig generateRobotBaseConfig() {
  RobotBaseConfig cfg;

  cfg.playerRsrcId = RoboMinerGuiResources::PLAYER_ROBOT;
  cfg.damageMarkerRsrcId = RoboMinerGuiResources::DAMAGE_MARKER;
  cfg.moveAnimStartTimerId = ROBOT_MOVE_ANIM_TIMER_ID;
  cfg.wallCollisionAnimStartTimerId = ROBOT_WALL_COLLISION_ANIM_TIMER_ID;
  cfg.robotCollisionAnimStartTimerId = ROBOT_COLLISION_ANIM_TIMER_ID;
  cfg.robotDamageAnimStartTimerId = ROBOT_DAMAGE_ANIM_TIMER_ID;

  return cfg;
}

PanelHandlerConfig generatePanelHandlerConfig() {
  PanelHandlerConfig cfg;

  auto &healthPanelCfg = cfg.healthPanelCfg;
  healthPanelCfg.rsrcId = RoboMinerGuiResources::HEALTH_PANEL;
  healthPanelCfg.indicatorRsrcId = RoboMinerGuiResources::HEALTH_INDICATOR;
  healthPanelCfg.indicatorFontId = RoboMinerGuiResources::VINQUE_RG_30;
  healthPanelCfg.indicatorReduceTimerId =
      HEALTH_PANEL_REDUCE_INDICATOR_TIMER_ID;

  auto &tilePanelCfg = cfg.tilePanelCfg;
  tilePanelCfg.targetNumber = TOTAL_FIELD_TILES;
  tilePanelCfg.rsrcId = RoboMinerGuiResources::TILE_PANEL;
  tilePanelCfg.fontId = RoboMinerGuiResources::VINQUE_RG_75;
  tilePanelCfg.incrTimerId = TILE_PANEL_INCR_TIMER_ID;
  tilePanelCfg.decrTimerId = TILE_PANEL_DECR_TIMER_ID;

  auto &crystalPanelCfg = cfg.crystalPanelCfg;
  crystalPanelCfg.targetNumber = LONGEST_CRYSTALS_SEQ_CTN;
  crystalPanelCfg.rsrcId = RoboMinerGuiResources::CRYSTAL_PANEL;
  crystalPanelCfg.fontId = RoboMinerGuiResources::VINQUE_RG_75;
  crystalPanelCfg.incrTimerId = CRYSTAL_PANEL_INCR_TIMER_ID;
  crystalPanelCfg.decrTimerId = CRYSTAL_PANEL_DECR_TIMER_ID;

  return cfg;
}

FieldConfig generateFieldConfig() {
  FieldConfig cfg;

  cfg.description.data = {
      {'r', 'r', '.', '.', '.', 'b', 'r'},
      {'g', 'r', '.', 'c', 'c', 'r', 'r'},
      {'g', 'r', 'r', 'r', 'r', 'r', 'g'},
      {'g', 'r', 'c', 'c', 'c', 'g', 'g'},
      {'.', 'r', 'c', 'b', 'b', '.', 'g'},
      {'.', '.', '.', 'p', 'p', '.', '.'},
  };

  cfg.description.rows = static_cast<int32_t>(cfg.description.data.size());
  cfg.description.cols = static_cast<int32_t>(cfg.description.data[0].size());
  cfg.description.tileWidth = TILE_WIDTH_HEIGHT;
  cfg.description.tileHeight = TILE_WIDTH_HEIGHT;
  cfg.tileRsrcId = RoboMinerGuiResources::MAP_TILE;
  cfg.debugFontRsrcId = RoboMinerGuiResources::VINQUE_RG_30;
  cfg.description.emptyDataMarker = RoboCommonDefines::EMPTY_TILE_MARKER;
  cfg.description.hardObstacleMarker = RoboCommonDefines::HARD_OBSTACLE_MARKER;

  return cfg;
}

EngineConfig generateEngineConfig() {
  const auto projectInstallPrefix =
      ament_index_cpp::get_package_share_directory(PROJECT_FOLDER_NAME);
  auto cfg = getDefaultEngineConfig(projectInstallPrefix);

  auto &windowCfg = cfg.managerHandlerCfg.drawMgrCfg.monitorWindowConfig;
  windowCfg.name = PROJECT_FOLDER_NAME;
  windowCfg.iconPath.append(projectInstallPrefix).append("/").append(
      ResourceFileHeader::getResourcesFolderName()).append(
      "/p/entities/player_robot.png");
  windowCfg.pos = Point(WINDOW_X, WINDOW_Y);
  windowCfg.width = WINDOW_WIDTH;
  windowCfg.height = WINDOW_HEIGHT;
  windowCfg.displayMode = WindowDisplayMode::WINDOWED;
  windowCfg.borderMode = WindowBorderMode::BORDERLESS;

  cfg.debugConsoleRsrcId = RoboMinerGuiResources::VINQUE_RG_30;

  return cfg;
}

RoboMinerGuiConfig generateGameConfig() {
  RoboMinerGuiConfig cfg;
  auto& layoutCfg = cfg.layoutCfg;
  layoutCfg.panelHandlerCfg = generatePanelHandlerConfig();
  layoutCfg.crystalRsrcId = RoboMinerGuiResources::CRYSTALS;

  auto& commonLayoutCfg = layoutCfg.commonLayoutCfg;
  commonLayoutCfg.fieldCfg = generateFieldConfig();
  commonLayoutCfg.robotBaseCfg = generateRobotBaseConfig();
  commonLayoutCfg.mapRsrcId = RoboMinerGuiResources::MAP;
  commonLayoutCfg.playerFieldMarker = RoboCommonDefines::PLAYER_MARKER;

  return cfg;
}

} //end anonymous namespace

std::vector<DependencyDescription>
RoboMinerGuiConfigGenerator::generateDependencies(
    int32_t argc, char **args) {
  std::vector<DependencyDescription> dependecies =
      getDefaultEngineDependencies(argc, args);

  const LoadDependencyCb ros2Loader = [argc, args](){
    rclcpp::init(argc, args);
    return SUCCESS;
  };
  const UnloadDependencyCb ros2Unloader = [](){
    //shutdown the global context only if it hasn't
    //for example: ROS2 signal handlers do that automatically
    if (rclcpp::ok()) {
      const bool success = rclcpp::shutdown();
      if (!success) {
        LOGERR("Error, global context was already shutdowned");
      }
    }
  };

  dependecies.push_back({"ROS2", ros2Loader, ros2Unloader});

  return dependecies;
}

ApplicationConfig RoboMinerGuiConfigGenerator::generateConfig() {
  ApplicationConfig cfg;
  cfg.engineCfg = generateEngineConfig();
  cfg.gameCfg = generateGameConfig();
  return cfg;
}

