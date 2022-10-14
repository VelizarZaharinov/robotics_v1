// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robo_collector_interfaces:msg/RobotMoveType.idl
// generated code does not contain a copyright notice

#ifndef ROBO_COLLECTOR_INTERFACES__MSG__DETAIL__ROBOT_MOVE_TYPE__STRUCT_H_
#define ROBO_COLLECTOR_INTERFACES__MSG__DETAIL__ROBOT_MOVE_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FORWARD'.
enum
{
  robo_collector_interfaces__msg__RobotMoveType__FORWARD = 0
};

/// Constant 'ROTATE_LEFT'.
enum
{
  robo_collector_interfaces__msg__RobotMoveType__ROTATE_LEFT = 1
};

/// Constant 'ROTATE_RIGHT'.
enum
{
  robo_collector_interfaces__msg__RobotMoveType__ROTATE_RIGHT = 2
};

// Struct defined in msg/RobotMoveType in the package robo_collector_interfaces.
typedef struct robo_collector_interfaces__msg__RobotMoveType
{
  int8_t move_type;
} robo_collector_interfaces__msg__RobotMoveType;

// Struct for a sequence of robo_collector_interfaces__msg__RobotMoveType.
typedef struct robo_collector_interfaces__msg__RobotMoveType__Sequence
{
  robo_collector_interfaces__msg__RobotMoveType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_collector_interfaces__msg__RobotMoveType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBO_COLLECTOR_INTERFACES__MSG__DETAIL__ROBOT_MOVE_TYPE__STRUCT_H_
