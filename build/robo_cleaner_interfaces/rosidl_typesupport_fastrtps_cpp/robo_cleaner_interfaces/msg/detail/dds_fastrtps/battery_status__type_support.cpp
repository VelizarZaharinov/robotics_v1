// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from robo_cleaner_interfaces:msg/BatteryStatus.idl
// generated code does not contain a copyright notice
#include "robo_cleaner_interfaces/msg/detail/battery_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "robo_cleaner_interfaces/msg/detail/battery_status__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_cleaner_interfaces
cdr_serialize(
  const robo_cleaner_interfaces::msg::BatteryStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: max_moves_on_full_energy
  cdr << ros_message.max_moves_on_full_energy;
  // Member: moves_left
  cdr << ros_message.moves_left;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_cleaner_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robo_cleaner_interfaces::msg::BatteryStatus & ros_message)
{
  // Member: max_moves_on_full_energy
  cdr >> ros_message.max_moves_on_full_energy;

  // Member: moves_left
  cdr >> ros_message.moves_left;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_cleaner_interfaces
get_serialized_size(
  const robo_cleaner_interfaces::msg::BatteryStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: max_moves_on_full_energy
  {
    size_t item_size = sizeof(ros_message.max_moves_on_full_energy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: moves_left
  {
    size_t item_size = sizeof(ros_message.moves_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_cleaner_interfaces
max_serialized_size_BatteryStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: max_moves_on_full_energy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: moves_left
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _BatteryStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const robo_cleaner_interfaces::msg::BatteryStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BatteryStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robo_cleaner_interfaces::msg::BatteryStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BatteryStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robo_cleaner_interfaces::msg::BatteryStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BatteryStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_BatteryStatus(full_bounded, 0);
}

static message_type_support_callbacks_t _BatteryStatus__callbacks = {
  "robo_cleaner_interfaces::msg",
  "BatteryStatus",
  _BatteryStatus__cdr_serialize,
  _BatteryStatus__cdr_deserialize,
  _BatteryStatus__get_serialized_size,
  _BatteryStatus__max_serialized_size
};

static rosidl_message_type_support_t _BatteryStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BatteryStatus__callbacks,
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
get_message_type_support_handle<robo_cleaner_interfaces::msg::BatteryStatus>()
{
  return &robo_cleaner_interfaces::msg::typesupport_fastrtps_cpp::_BatteryStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robo_cleaner_interfaces, msg, BatteryStatus)() {
  return &robo_cleaner_interfaces::msg::typesupport_fastrtps_cpp::_BatteryStatus__handle;
}

#ifdef __cplusplus
}
#endif
