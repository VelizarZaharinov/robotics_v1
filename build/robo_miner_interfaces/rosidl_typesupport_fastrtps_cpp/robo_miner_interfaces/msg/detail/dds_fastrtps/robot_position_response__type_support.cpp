// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from robo_miner_interfaces:msg/RobotPositionResponse.idl
// generated code does not contain a copyright notice
#include "robo_miner_interfaces/msg/detail/robot_position_response__rosidl_typesupport_fastrtps_cpp.hpp"
#include "robo_miner_interfaces/msg/detail/robot_position_response__struct.hpp"

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

namespace robo_miner_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_miner_interfaces
cdr_serialize(
  const robo_miner_interfaces::msg::RobotPositionResponse & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: success
  cdr << (ros_message.success ? true : false);
  // Member: error_reason
  cdr << ros_message.error_reason;
  // Member: surrounding_tiles
  {
    cdr << ros_message.surrounding_tiles;
  }
  // Member: robot_dir
  cdr << ros_message.robot_dir;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_miner_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robo_miner_interfaces::msg::RobotPositionResponse & ros_message)
{
  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  // Member: error_reason
  cdr >> ros_message.error_reason;

  // Member: surrounding_tiles
  {
    cdr >> ros_message.surrounding_tiles;
  }

  // Member: robot_dir
  cdr >> ros_message.robot_dir;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_miner_interfaces
get_serialized_size(
  const robo_miner_interfaces::msg::RobotPositionResponse & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error_reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.error_reason.size() + 1);
  // Member: surrounding_tiles
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.surrounding_tiles[0]);
    current_alignment += array_size * item_size +
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
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_miner_interfaces
max_serialized_size_RobotPositionResponse(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: error_reason
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: surrounding_tiles
  {
    size_t array_size = 3;

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

static bool _RobotPositionResponse__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const robo_miner_interfaces::msg::RobotPositionResponse *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RobotPositionResponse__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robo_miner_interfaces::msg::RobotPositionResponse *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RobotPositionResponse__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robo_miner_interfaces::msg::RobotPositionResponse *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RobotPositionResponse__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RobotPositionResponse(full_bounded, 0);
}

static message_type_support_callbacks_t _RobotPositionResponse__callbacks = {
  "robo_miner_interfaces::msg",
  "RobotPositionResponse",
  _RobotPositionResponse__cdr_serialize,
  _RobotPositionResponse__cdr_deserialize,
  _RobotPositionResponse__get_serialized_size,
  _RobotPositionResponse__max_serialized_size
};

static rosidl_message_type_support_t _RobotPositionResponse__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RobotPositionResponse__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace robo_miner_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_robo_miner_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<robo_miner_interfaces::msg::RobotPositionResponse>()
{
  return &robo_miner_interfaces::msg::typesupport_fastrtps_cpp::_RobotPositionResponse__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robo_miner_interfaces, msg, RobotPositionResponse)() {
  return &robo_miner_interfaces::msg::typesupport_fastrtps_cpp::_RobotPositionResponse__handle;
}

#ifdef __cplusplus
}
#endif
