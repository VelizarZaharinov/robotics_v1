// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robo_cleaner_interfaces:srv/QueryInitialRobotState.idl
// generated code does not contain a copyright notice

#ifndef ROBO_CLEANER_INTERFACES__SRV__DETAIL__QUERY_INITIAL_ROBOT_STATE__STRUCT_H_
#define ROBO_CLEANER_INTERFACES__SRV__DETAIL__QUERY_INITIAL_ROBOT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/QueryInitialRobotState in the package robo_cleaner_interfaces.
typedef struct robo_cleaner_interfaces__srv__QueryInitialRobotState_Request
{
  uint8_t structure_needs_at_least_one_member;
} robo_cleaner_interfaces__srv__QueryInitialRobotState_Request;

// Struct for a sequence of robo_cleaner_interfaces__srv__QueryInitialRobotState_Request.
typedef struct robo_cleaner_interfaces__srv__QueryInitialRobotState_Request__Sequence
{
  robo_cleaner_interfaces__srv__QueryInitialRobotState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_cleaner_interfaces__srv__QueryInitialRobotState_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_reason'
#include "rosidl_runtime_c/string.h"
// Member 'initial_robot_state'
#include "robo_cleaner_interfaces/msg/detail/initial_robot_state__struct.h"

// Struct defined in srv/QueryInitialRobotState in the package robo_cleaner_interfaces.
typedef struct robo_cleaner_interfaces__srv__QueryInitialRobotState_Response
{
  bool success;
  rosidl_runtime_c__String error_reason;
  robo_cleaner_interfaces__msg__InitialRobotState initial_robot_state;
} robo_cleaner_interfaces__srv__QueryInitialRobotState_Response;

// Struct for a sequence of robo_cleaner_interfaces__srv__QueryInitialRobotState_Response.
typedef struct robo_cleaner_interfaces__srv__QueryInitialRobotState_Response__Sequence
{
  robo_cleaner_interfaces__srv__QueryInitialRobotState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_cleaner_interfaces__srv__QueryInitialRobotState_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBO_CLEANER_INTERFACES__SRV__DETAIL__QUERY_INITIAL_ROBOT_STATE__STRUCT_H_
