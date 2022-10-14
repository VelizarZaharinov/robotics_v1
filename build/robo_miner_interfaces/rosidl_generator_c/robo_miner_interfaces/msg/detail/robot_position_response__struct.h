// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robo_miner_interfaces:msg/RobotPositionResponse.idl
// generated code does not contain a copyright notice

#ifndef ROBO_MINER_INTERFACES__MSG__DETAIL__ROBOT_POSITION_RESPONSE__STRUCT_H_
#define ROBO_MINER_INTERFACES__MSG__DETAIL__ROBOT_POSITION_RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DIRECTION_UP'.
enum
{
  robo_miner_interfaces__msg__RobotPositionResponse__DIRECTION_UP = 0l
};

/// Constant 'DIRECTION_RIGHT'.
enum
{
  robo_miner_interfaces__msg__RobotPositionResponse__DIRECTION_RIGHT = 1l
};

/// Constant 'DIRECTION_DOWN'.
enum
{
  robo_miner_interfaces__msg__RobotPositionResponse__DIRECTION_DOWN = 2l
};

/// Constant 'DIRECTION_LEFT'.
enum
{
  robo_miner_interfaces__msg__RobotPositionResponse__DIRECTION_LEFT = 3l
};

// Include directives for member types
// Member 'error_reason'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/RobotPositionResponse in the package robo_miner_interfaces.
typedef struct robo_miner_interfaces__msg__RobotPositionResponse
{
  bool success;
  rosidl_runtime_c__String error_reason;
  uint8_t surrounding_tiles[3];
  int32_t robot_dir;
} robo_miner_interfaces__msg__RobotPositionResponse;

// Struct for a sequence of robo_miner_interfaces__msg__RobotPositionResponse.
typedef struct robo_miner_interfaces__msg__RobotPositionResponse__Sequence
{
  robo_miner_interfaces__msg__RobotPositionResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_miner_interfaces__msg__RobotPositionResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBO_MINER_INTERFACES__MSG__DETAIL__ROBOT_POSITION_RESPONSE__STRUCT_H_
