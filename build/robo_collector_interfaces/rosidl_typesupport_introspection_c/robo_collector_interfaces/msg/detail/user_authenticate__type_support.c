// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robo_collector_interfaces:msg/UserAuthenticate.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robo_collector_interfaces/msg/detail/user_authenticate__rosidl_typesupport_introspection_c.h"
#include "robo_collector_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robo_collector_interfaces/msg/detail/user_authenticate__functions.h"
#include "robo_collector_interfaces/msg/detail/user_authenticate__struct.h"


// Include directives for member types
// Member `user`
// Member `repository`
// Member `commit_sha`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void UserAuthenticate__rosidl_typesupport_introspection_c__UserAuthenticate_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robo_collector_interfaces__msg__UserAuthenticate__init(message_memory);
}

void UserAuthenticate__rosidl_typesupport_introspection_c__UserAuthenticate_fini_function(void * message_memory)
{
  robo_collector_interfaces__msg__UserAuthenticate__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember UserAuthenticate__rosidl_typesupport_introspection_c__UserAuthenticate_message_member_array[3] = {
  {
    "user",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_collector_interfaces__msg__UserAuthenticate, user),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "repository",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_collector_interfaces__msg__UserAuthenticate, repository),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "commit_sha",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_collector_interfaces__msg__UserAuthenticate, commit_sha),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers UserAuthenticate__rosidl_typesupport_introspection_c__UserAuthenticate_message_members = {
  "robo_collector_interfaces__msg",  // message namespace
  "UserAuthenticate",  // message name
  3,  // number of fields
  sizeof(robo_collector_interfaces__msg__UserAuthenticate),
  UserAuthenticate__rosidl_typesupport_introspection_c__UserAuthenticate_message_member_array,  // message members
  UserAuthenticate__rosidl_typesupport_introspection_c__UserAuthenticate_init_function,  // function to initialize message memory (memory has to be allocated)
  UserAuthenticate__rosidl_typesupport_introspection_c__UserAuthenticate_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t UserAuthenticate__rosidl_typesupport_introspection_c__UserAuthenticate_message_type_support_handle = {
  0,
  &UserAuthenticate__rosidl_typesupport_introspection_c__UserAuthenticate_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robo_collector_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_collector_interfaces, msg, UserAuthenticate)() {
  if (!UserAuthenticate__rosidl_typesupport_introspection_c__UserAuthenticate_message_type_support_handle.typesupport_identifier) {
    UserAuthenticate__rosidl_typesupport_introspection_c__UserAuthenticate_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &UserAuthenticate__rosidl_typesupport_introspection_c__UserAuthenticate_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
