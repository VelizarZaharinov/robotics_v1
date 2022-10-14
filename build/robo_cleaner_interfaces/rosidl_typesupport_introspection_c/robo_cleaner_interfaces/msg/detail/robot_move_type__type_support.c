// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robo_cleaner_interfaces:msg/RobotMoveType.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robo_cleaner_interfaces/msg/detail/robot_move_type__rosidl_typesupport_introspection_c.h"
#include "robo_cleaner_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robo_cleaner_interfaces/msg/detail/robot_move_type__functions.h"
#include "robo_cleaner_interfaces/msg/detail/robot_move_type__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void RobotMoveType__rosidl_typesupport_introspection_c__RobotMoveType_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robo_cleaner_interfaces__msg__RobotMoveType__init(message_memory);
}

void RobotMoveType__rosidl_typesupport_introspection_c__RobotMoveType_fini_function(void * message_memory)
{
  robo_cleaner_interfaces__msg__RobotMoveType__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotMoveType__rosidl_typesupport_introspection_c__RobotMoveType_message_member_array[1] = {
  {
    "move_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_cleaner_interfaces__msg__RobotMoveType, move_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotMoveType__rosidl_typesupport_introspection_c__RobotMoveType_message_members = {
  "robo_cleaner_interfaces__msg",  // message namespace
  "RobotMoveType",  // message name
  1,  // number of fields
  sizeof(robo_cleaner_interfaces__msg__RobotMoveType),
  RobotMoveType__rosidl_typesupport_introspection_c__RobotMoveType_message_member_array,  // message members
  RobotMoveType__rosidl_typesupport_introspection_c__RobotMoveType_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotMoveType__rosidl_typesupport_introspection_c__RobotMoveType_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotMoveType__rosidl_typesupport_introspection_c__RobotMoveType_message_type_support_handle = {
  0,
  &RobotMoveType__rosidl_typesupport_introspection_c__RobotMoveType_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robo_cleaner_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, msg, RobotMoveType)() {
  if (!RobotMoveType__rosidl_typesupport_introspection_c__RobotMoveType_message_type_support_handle.typesupport_identifier) {
    RobotMoveType__rosidl_typesupport_introspection_c__RobotMoveType_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotMoveType__rosidl_typesupport_introspection_c__RobotMoveType_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
