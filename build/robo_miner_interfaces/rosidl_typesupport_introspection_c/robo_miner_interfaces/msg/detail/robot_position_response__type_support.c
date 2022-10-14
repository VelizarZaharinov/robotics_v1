// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robo_miner_interfaces:msg/RobotPositionResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robo_miner_interfaces/msg/detail/robot_position_response__rosidl_typesupport_introspection_c.h"
#include "robo_miner_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robo_miner_interfaces/msg/detail/robot_position_response__functions.h"
#include "robo_miner_interfaces/msg/detail/robot_position_response__struct.h"


// Include directives for member types
// Member `error_reason`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RobotPositionResponse__rosidl_typesupport_introspection_c__RobotPositionResponse_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robo_miner_interfaces__msg__RobotPositionResponse__init(message_memory);
}

void RobotPositionResponse__rosidl_typesupport_introspection_c__RobotPositionResponse_fini_function(void * message_memory)
{
  robo_miner_interfaces__msg__RobotPositionResponse__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotPositionResponse__rosidl_typesupport_introspection_c__RobotPositionResponse_message_member_array[4] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_miner_interfaces__msg__RobotPositionResponse, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_reason",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_miner_interfaces__msg__RobotPositionResponse, error_reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "surrounding_tiles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(robo_miner_interfaces__msg__RobotPositionResponse, surrounding_tiles),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_dir",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_miner_interfaces__msg__RobotPositionResponse, robot_dir),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotPositionResponse__rosidl_typesupport_introspection_c__RobotPositionResponse_message_members = {
  "robo_miner_interfaces__msg",  // message namespace
  "RobotPositionResponse",  // message name
  4,  // number of fields
  sizeof(robo_miner_interfaces__msg__RobotPositionResponse),
  RobotPositionResponse__rosidl_typesupport_introspection_c__RobotPositionResponse_message_member_array,  // message members
  RobotPositionResponse__rosidl_typesupport_introspection_c__RobotPositionResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotPositionResponse__rosidl_typesupport_introspection_c__RobotPositionResponse_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotPositionResponse__rosidl_typesupport_introspection_c__RobotPositionResponse_message_type_support_handle = {
  0,
  &RobotPositionResponse__rosidl_typesupport_introspection_c__RobotPositionResponse_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robo_miner_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_miner_interfaces, msg, RobotPositionResponse)() {
  if (!RobotPositionResponse__rosidl_typesupport_introspection_c__RobotPositionResponse_message_type_support_handle.typesupport_identifier) {
    RobotPositionResponse__rosidl_typesupport_introspection_c__RobotPositionResponse_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotPositionResponse__rosidl_typesupport_introspection_c__RobotPositionResponse_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
