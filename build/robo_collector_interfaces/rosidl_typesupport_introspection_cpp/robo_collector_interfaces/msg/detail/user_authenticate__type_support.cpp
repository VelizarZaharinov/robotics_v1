// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robo_collector_interfaces:msg/UserAuthenticate.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robo_collector_interfaces/msg/detail/user_authenticate__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robo_collector_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void UserAuthenticate_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robo_collector_interfaces::msg::UserAuthenticate(_init);
}

void UserAuthenticate_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robo_collector_interfaces::msg::UserAuthenticate *>(message_memory);
  typed_message->~UserAuthenticate();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember UserAuthenticate_message_member_array[3] = {
  {
    "user",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_collector_interfaces::msg::UserAuthenticate, user),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "repository",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_collector_interfaces::msg::UserAuthenticate, repository),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "commit_sha",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_collector_interfaces::msg::UserAuthenticate, commit_sha),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers UserAuthenticate_message_members = {
  "robo_collector_interfaces::msg",  // message namespace
  "UserAuthenticate",  // message name
  3,  // number of fields
  sizeof(robo_collector_interfaces::msg::UserAuthenticate),
  UserAuthenticate_message_member_array,  // message members
  UserAuthenticate_init_function,  // function to initialize message memory (memory has to be allocated)
  UserAuthenticate_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t UserAuthenticate_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &UserAuthenticate_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robo_collector_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robo_collector_interfaces::msg::UserAuthenticate>()
{
  return &::robo_collector_interfaces::msg::rosidl_typesupport_introspection_cpp::UserAuthenticate_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robo_collector_interfaces, msg, UserAuthenticate)() {
  return &::robo_collector_interfaces::msg::rosidl_typesupport_introspection_cpp::UserAuthenticate_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
