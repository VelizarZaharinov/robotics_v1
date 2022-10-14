// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robo_miner_interfaces:srv/QueryInitialRobotPosition.idl
// generated code does not contain a copyright notice

#ifndef ROBO_MINER_INTERFACES__SRV__DETAIL__QUERY_INITIAL_ROBOT_POSITION__STRUCT_H_
#define ROBO_MINER_INTERFACES__SRV__DETAIL__QUERY_INITIAL_ROBOT_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/QueryInitialRobotPosition in the package robo_miner_interfaces.
typedef struct robo_miner_interfaces__srv__QueryInitialRobotPosition_Request
{
  uint8_t structure_needs_at_least_one_member;
} robo_miner_interfaces__srv__QueryInitialRobotPosition_Request;

// Struct for a sequence of robo_miner_interfaces__srv__QueryInitialRobotPosition_Request.
typedef struct robo_miner_interfaces__srv__QueryInitialRobotPosition_Request__Sequence
{
  robo_miner_interfaces__srv__QueryInitialRobotPosition_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_miner_interfaces__srv__QueryInitialRobotPosition_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'robot_position_response'
#include "robo_miner_interfaces/msg/detail/robot_position_response__struct.h"

// Struct defined in srv/QueryInitialRobotPosition in the package robo_miner_interfaces.
typedef struct robo_miner_interfaces__srv__QueryInitialRobotPosition_Response
{
  robo_miner_interfaces__msg__RobotPositionResponse robot_position_response;
  uint8_t robot_initial_tile;
} robo_miner_interfaces__srv__QueryInitialRobotPosition_Response;

// Struct for a sequence of robo_miner_interfaces__srv__QueryInitialRobotPosition_Response.
typedef struct robo_miner_interfaces__srv__QueryInitialRobotPosition_Response__Sequence
{
  robo_miner_interfaces__srv__QueryInitialRobotPosition_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_miner_interfaces__srv__QueryInitialRobotPosition_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBO_MINER_INTERFACES__SRV__DETAIL__QUERY_INITIAL_ROBOT_POSITION__STRUCT_H_
