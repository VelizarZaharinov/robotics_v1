// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from robo_cleaner_interfaces:msg/InitialRobotState.idl
// generated code does not contain a copyright notice
#include "robo_cleaner_interfaces/msg/detail/initial_robot_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "robo_cleaner_interfaces/msg/detail/initial_robot_state__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace robo_cleaner_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const robo_cleaner_interfaces::msg::BatteryStatus &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  robo_cleaner_interfaces::msg::BatteryStatus &);
size_t get_serialized_size(
  const robo_cleaner_interfaces::msg::BatteryStatus &,
  size_t current_alignment);
size_t
max_serialized_size_BatteryStatus(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace robo_cleaner_interfaces


namespace robo_cleaner_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_cleaner_interfaces
cdr_serialize(
  const robo_cleaner_interfaces::msg::InitialRobotState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: battery_status
  robo_cleaner_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.battery_status,
    cdr);
  // Member: robot_tile
  cdr << ros_message.robot_tile;
  // Member: robot_dir
  cdr << ros_message.robot_dir;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_cleaner_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robo_cleaner_interfaces::msg::InitialRobotState & ros_message)
{
  // Member: battery_status
  robo_cleaner_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.battery_status);

  // Member: robot_tile
  cdr >> ros_message.robot_tile;

  // Member: robot_dir
  cdr >> ros_message.robot_dir;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_cleaner_interfaces
get_serialized_size(
  const robo_cleaner_interfaces::msg::InitialRobotState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: battery_status

  current_alignment +=
    robo_cleaner_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.battery_status, current_alignment);
  // Member: robot_tile
  {
    size_t item_size = sizeof(ros_message.robot_tile);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: robot_dir
  {
    size_t item_size = sizeof(ros_message.robot_dir);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_cleaner_interfaces
max_serialized_size_InitialRobotState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: battery_status
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        robo_cleaner_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_BatteryStatus(
        full_bounded, current_alignment);
    }
  }

  // Member: robot_tile
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: robot_dir
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _InitialRobotState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const robo_cleaner_interfaces::msg::InitialRobotState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _InitialRobotState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robo_cleaner_interfaces::msg::InitialRobotState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _InitialRobotState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robo_cleaner_interfaces::msg::InitialRobotState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _InitialRobotState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_InitialRobotState(full_bounded, 0);
}

static message_type_support_callbacks_t _InitialRobotState__callbacks = {
  "robo_cleaner_interfaces::msg",
  "InitialRobotState",
  _InitialRobotState__cdr_serialize,
  _InitialRobotState__cdr_deserialize,
  _InitialRobotState__get_serialized_size,
  _InitialRobotState__max_serialized_size
};

static rosidl_message_type_support_t _InitialRobotState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_InitialRobotState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace robo_cleaner_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_robo_cleaner_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<robo_cleaner_interfaces::msg::InitialRobotState>()
{
  return &robo_cleaner_interfaces::msg::typesupport_fastrtps_cpp::_InitialRobotState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robo_cleaner_interfaces, msg, InitialRobotState)() {
  return &robo_cleaner_interfaces::msg::typesupport_fastrtps_cpp::_InitialRobotState__handle;
}

#ifdef __cplusplus
}
#endif
