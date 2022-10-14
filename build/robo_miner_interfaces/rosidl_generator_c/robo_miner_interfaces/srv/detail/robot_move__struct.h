// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robo_miner_interfaces:srv/RobotMove.idl
// generated code does not contain a copyright notice

#ifndef ROBO_MINER_INTERFACES__SRV__DETAIL__ROBOT_MOVE__STRUCT_H_
#define ROBO_MINER_INTERFACES__SRV__DETAIL__ROBOT_MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'robot_move_type'
#include "robo_miner_interfaces/msg/detail/robot_move_type__struct.h"

// Struct defined in srv/RobotMove in the package robo_miner_interfaces.
typedef struct robo_miner_interfaces__srv__RobotMove_Request
{
  robo_miner_interfaces__msg__RobotMoveType robot_move_type;
} robo_miner_interfaces__srv__RobotMove_Request;

// Struct for a sequence of robo_miner_interfaces__srv__RobotMove_Request.
typedef struct robo_miner_interfaces__srv__RobotMove_Request__Sequence
{
  robo_miner_interfaces__srv__RobotMove_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_miner_interfaces__srv__RobotMove_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'robot_position_response'
#include "robo_miner_interfaces/msg/detail/robot_position_response__struct.h"

// Struct defined in srv/RobotMove in the package robo_miner_interfaces.
typedef struct robo_miner_interfaces__srv__RobotMove_Response
{
  robo_miner_interfaces__msg__RobotPositionResponse robot_position_response;
} robo_miner_interfaces__srv__RobotMove_Response;

// Struct for a sequence of robo_miner_interfaces__srv__RobotMove_Response.
typedef struct robo_miner_interfaces__srv__RobotMove_Response__Sequence
{
  robo_miner_interfaces__srv__RobotMove_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_miner_interfaces__srv__RobotMove_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBO_MINER_INTERFACES__SRV__DETAIL__ROBOT_MOVE__STRUCT_H_
