// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robo_miner_interfaces:msg/FieldPoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robo_miner_interfaces/msg/detail/field_point__rosidl_typesupport_introspection_c.h"
#include "robo_miner_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robo_miner_interfaces/msg/detail/field_point__functions.h"
#include "robo_miner_interfaces/msg/detail/field_point__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void FieldPoint__rosidl_typesupport_introspection_c__FieldPoint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robo_miner_interfaces__msg__FieldPoint__init(message_memory);
}

void FieldPoint__rosidl_typesupport_introspection_c__FieldPoint_fini_function(void * message_memory)
{
  robo_miner_interfaces__msg__FieldPoint__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FieldPoint__rosidl_typesupport_introspection_c__FieldPoint_message_member_array[2] = {
  {
    "row",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_miner_interfaces__msg__FieldPoint, row),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "col",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_miner_interfaces__msg__FieldPoint, col),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FieldPoint__rosidl_typesupport_introspection_c__FieldPoint_message_members = {
  "robo_miner_interfaces__msg",  // message namespace
  "FieldPoint",  // message name
  2,  // number of fields
  sizeof(robo_miner_interfaces__msg__FieldPoint),
  FieldPoint__rosidl_typesupport_introspection_c__FieldPoint_message_member_array,  // message members
  FieldPoint__rosidl_typesupport_introspection_c__FieldPoint_init_function,  // function to initialize message memory (memory has to be allocated)
  FieldPoint__rosidl_typesupport_introspection_c__FieldPoint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FieldPoint__rosidl_typesupport_introspection_c__FieldPoint_message_type_support_handle = {
  0,
  &FieldPoint__rosidl_typesupport_introspection_c__FieldPoint_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robo_miner_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_miner_interfaces, msg, FieldPoint)() {
  if (!FieldPoint__rosidl_typesupport_introspection_c__FieldPoint_message_type_support_handle.typesupport_identifier) {
    FieldPoint__rosidl_typesupport_introspection_c__FieldPoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FieldPoint__rosidl_typesupport_introspection_c__FieldPoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
