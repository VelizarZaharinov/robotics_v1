// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from robo_collector_interfaces:msg/RobotMoveType.idl
// generated code does not contain a copyright notice
#include "robo_collector_interfaces/msg/detail/robot_move_type__rosidl_typesupport_fastrtps_cpp.hpp"
#include "robo_collector_interfaces/msg/detail/robot_move_type__struct.hpp"

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

namespace robo_collector_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_collector_interfaces
cdr_serialize(
  const robo_collector_interfaces::msg::RobotMoveType & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: move_type
  cdr << ros_message.move_type;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_collector_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robo_collector_interfaces::msg::RobotMoveType & ros_message)
{
  // Member: move_type
  cdr >> ros_message.move_type;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_collector_interfaces
get_serialized_size(
  const robo_collector_interfaces::msg::RobotMoveType & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: move_type
  {
    size_t item_size = sizeof(ros_message.move_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_collector_interfaces
max_serialized_size_RobotMoveType(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: move_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _RobotMoveType__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const robo_collector_interfaces::msg::RobotMoveType *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RobotMoveType__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robo_collector_interfaces::msg::RobotMoveType *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RobotMoveType__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robo_collector_interfaces::msg::RobotMoveType *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RobotMoveType__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RobotMoveType(full_bounded, 0);
}

static message_type_support_callbacks_t _RobotMoveType__callbacks = {
  "robo_collector_interfaces::msg",
  "RobotMoveType",
  _RobotMoveType__cdr_serialize,
  _RobotMoveType__cdr_deserialize,
  _RobotMoveType__get_serialized_size,
  _RobotMoveType__max_serialized_size
};

static rosidl_message_type_support_t _RobotMoveType__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RobotMoveType__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace robo_collector_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_robo_collector_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<robo_collector_interfaces::msg::RobotMoveType>()
{
  return &robo_collector_interfaces::msg::typesupport_fastrtps_cpp::_RobotMoveType__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robo_collector_interfaces, msg, RobotMoveType)() {
  return &robo_collector_interfaces::msg::typesupport_fastrtps_cpp::_RobotMoveType__handle;
}

#ifdef __cplusplus
}
#endif
