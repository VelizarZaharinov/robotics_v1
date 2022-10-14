// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robo_miner_interfaces:msg/RobotPositionResponse.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robo_miner_interfaces/msg/detail/robot_position_response__struct.hpp"
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

void RobotPositionResponse_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robo_miner_interfaces::msg::RobotPositionResponse(_init);
}

void RobotPositionResponse_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robo_miner_interfaces::msg::RobotPositionResponse *>(message_memory);
  typed_message->~RobotPositionResponse();
}

size_t size_function__RobotPositionResponse__surrounding_tiles(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__RobotPositionResponse__surrounding_tiles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotPositionResponse__surrounding_tiles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RobotPositionResponse_message_member_array[4] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_miner_interfaces::msg::RobotPositionResponse, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "error_reason",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_miner_interfaces::msg::RobotPositionResponse, error_reason),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "surrounding_tiles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(robo_miner_interfaces::msg::RobotPositionResponse, surrounding_tiles),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotPositionResponse__surrounding_tiles,  // size() function pointer
    get_const_function__RobotPositionResponse__surrounding_tiles,  // get_const(index) function pointer
    get_function__RobotPositionResponse__surrounding_tiles,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "robot_dir",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_miner_interfaces::msg::RobotPositionResponse, robot_dir),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RobotPositionResponse_message_members = {
  "robo_miner_interfaces::msg",  // message namespace
  "RobotPositionResponse",  // message name
  4,  // number of fields
  sizeof(robo_miner_interfaces::msg::RobotPositionResponse),
  RobotPositionResponse_message_member_array,  // message members
  RobotPositionResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotPositionResponse_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RobotPositionResponse_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RobotPositionResponse_message_members,
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
get_message_type_support_handle<robo_miner_interfaces::msg::RobotPositionResponse>()
{
  return &::robo_miner_interfaces::msg::rosidl_typesupport_introspection_cpp::RobotPositionResponse_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robo_miner_interfaces, msg, RobotPositionResponse)() {
  return &::robo_miner_interfaces::msg::rosidl_typesupport_introspection_cpp::RobotPositionResponse_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
