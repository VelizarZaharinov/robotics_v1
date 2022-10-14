// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robo_miner_interfaces:msg/RobotMoveType.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robo_miner_interfaces/msg/detail/robot_move_type__struct.hpp"
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

void RobotMoveType_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robo_miner_interfaces::msg::RobotMoveType(_init);
}

void RobotMoveType_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robo_miner_interfaces::msg::RobotMoveType *>(message_memory);
  typed_message->~RobotMoveType();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RobotMoveType_message_member_array[1] = {
  {
    "move_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_miner_interfaces::msg::RobotMoveType, move_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RobotMoveType_message_members = {
  "robo_miner_interfaces::msg",  // message namespace
  "RobotMoveType",  // message name
  1,  // number of fields
  sizeof(robo_miner_interfaces::msg::RobotMoveType),
  RobotMoveType_message_member_array,  // message members
  RobotMoveType_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotMoveType_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RobotMoveType_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RobotMoveType_message_members,
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
get_message_type_support_handle<robo_miner_interfaces::msg::RobotMoveType>()
{
  return &::robo_miner_interfaces::msg::rosidl_typesupport_introspection_cpp::RobotMoveType_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robo_miner_interfaces, msg, RobotMoveType)() {
  return &::robo_miner_interfaces::msg::rosidl_typesupport_introspection_cpp::RobotMoveType_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
