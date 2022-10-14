// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robo_miner_interfaces:msg/FieldPoint.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robo_miner_interfaces/msg/detail/field_point__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robo_miner_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void FieldPoint_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robo_miner_interfaces::msg::FieldPoint(_init);
}

void FieldPoint_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robo_miner_interfaces::msg::FieldPoint *>(message_memory);
  typed_message->~FieldPoint();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FieldPoint_message_member_array[2] = {
  {
    "row",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_miner_interfaces::msg::FieldPoint, row),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "col",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_miner_interfaces::msg::FieldPoint, col),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FieldPoint_message_members = {
  "robo_miner_interfaces::msg",  // message namespace
  "FieldPoint",  // message name
  2,  // number of fields
  sizeof(robo_miner_interfaces::msg::FieldPoint),
  FieldPoint_message_member_array,  // message members
  FieldPoint_init_function,  // function to initialize message memory (memory has to be allocated)
  FieldPoint_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FieldPoint_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FieldPoint_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robo_miner_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robo_miner_interfaces::msg::FieldPoint>()
{
  return &::robo_miner_interfaces::msg::rosidl_typesupport_introspection_cpp::FieldPoint_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robo_miner_interfaces, msg, FieldPoint)() {
  return &::robo_miner_interfaces::msg::rosidl_typesupport_introspection_cpp::FieldPoint_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
