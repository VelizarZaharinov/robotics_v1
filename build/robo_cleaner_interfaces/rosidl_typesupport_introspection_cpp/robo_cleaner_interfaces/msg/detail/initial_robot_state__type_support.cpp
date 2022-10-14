// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robo_cleaner_interfaces:msg/InitialRobotState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robo_cleaner_interfaces/msg/detail/initial_robot_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robo_cleaner_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void InitialRobotState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robo_cleaner_interfaces::msg::InitialRobotState(_init);
}

void InitialRobotState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robo_cleaner_interfaces::msg::InitialRobotState *>(message_memory);
  typed_message->~InitialRobotState();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember InitialRobotState_message_member_array[3] = {
  {
    "battery_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robo_cleaner_interfaces::msg::BatteryStatus>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_cleaner_interfaces::msg::InitialRobotState, battery_status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "robot_tile",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_cleaner_interfaces::msg::InitialRobotState, robot_tile),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
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
    offsetof(robo_cleaner_interfaces::msg::InitialRobotState, robot_dir),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers InitialRobotState_message_members = {
  "robo_cleaner_interfaces::msg",  // message namespace
  "InitialRobotState",  // message name
  3,  // number of fields
  sizeof(robo_cleaner_interfaces::msg::InitialRobotState),
  InitialRobotState_message_member_array,  // message members
  InitialRobotState_init_function,  // function to initialize message memory (memory has to be allocated)
  InitialRobotState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t InitialRobotState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &InitialRobotState_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robo_cleaner_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robo_cleaner_interfaces::msg::InitialRobotState>()
{
  return &::robo_cleaner_interfaces::msg::rosidl_typesupport_introspection_cpp::InitialRobotState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robo_cleaner_interfaces, msg, InitialRobotState)() {
  return &::robo_cleaner_interfaces::msg::rosidl_typesupport_introspection_cpp::InitialRobotState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
