// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robo_cleaner_interfaces:msg/InitialRobotState.idl
// generated code does not contain a copyright notice

#ifndef ROBO_CLEANER_INTERFACES__MSG__DETAIL__INITIAL_ROBOT_STATE__STRUCT_H_
#define ROBO_CLEANER_INTERFACES__MSG__DETAIL__INITIAL_ROBOT_STATE__STRUCT_H_

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
  robo_cleaner_interfaces__msg__InitialRobotState__DIRECTION_UP = 0l
};

/// Constant 'DIRECTION_RIGHT'.
enum
{
  robo_cleaner_interfaces__msg__InitialRobotState__DIRECTION_RIGHT = 1l
};

/// Constant 'DIRECTION_DOWN'.
enum
{
  robo_cleaner_interfaces__msg__InitialRobotState__DIRECTION_DOWN = 2l
};

/// Constant 'DIRECTION_LEFT'.
enum
{
  robo_cleaner_interfaces__msg__InitialRobotState__DIRECTION_LEFT = 3l
};

// Include directives for member types
// Member 'battery_status'
#include "robo_cleaner_interfaces/msg/detail/battery_status__struct.h"

// Struct defined in msg/InitialRobotState in the package robo_cleaner_interfaces.
typedef struct robo_cleaner_interfaces__msg__InitialRobotState
{
  robo_cleaner_interfaces__msg__BatteryStatus battery_status;
  uint8_t robot_tile;
  int32_t robot_dir;
} robo_cleaner_interfaces__msg__InitialRobotState;

// Struct for a sequence of robo_cleaner_interfaces__msg__InitialRobotState.
typedef struct robo_cleaner_interfaces__msg__InitialRobotState__Sequence
{
  robo_cleaner_interfaces__msg__InitialRobotState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_cleaner_interfaces__msg__InitialRobotState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBO_CLEANER_INTERFACES__MSG__DETAIL__INITIAL_ROBOT_STATE__STRUCT_H_
