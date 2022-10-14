// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robo_miner_interfaces:msg/RobotPositionResponse.idl
// generated code does not contain a copyright notice
#include "robo_miner_interfaces/msg/detail/robot_position_response__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robo_miner_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robo_miner_interfaces/msg/detail/robot_position_response__struct.h"
#include "robo_miner_interfaces/msg/detail/robot_position_response__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // error_reason
#include "rosidl_runtime_c/string_functions.h"  // error_reason

// forward declare type support functions


using _RobotPositionResponse__ros_msg_type = robo_miner_interfaces__msg__RobotPositionResponse;

static bool _RobotPositionResponse__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RobotPositionResponse__ros_msg_type * ros_message = static_cast<const _RobotPositionResponse__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: error_reason
  {
    const rosidl_runtime_c__String * str = &ros_message->error_reason;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: surrounding_tiles
  {
    size_t size = 3;
    auto array_ptr = ros_message->surrounding_tiles;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: robot_dir
  {
    cdr << ros_message->robot_dir;
  }

  return true;
}

static bool _RobotPositionResponse__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RobotPositionResponse__ros_msg_type * ros_message = static_cast<_RobotPositionResponse__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: error_reason
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->error_reason.data) {
      rosidl_runtime_c__String__init(&ros_message->error_reason);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->error_reason,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'error_reason'\n");
      return false;
    }
  }

  // Field name: surrounding_tiles
  {
    size_t size = 3;
    auto array_ptr = ros_message->surrounding_tiles;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: robot_dir
  {
    cdr >> ros_message->robot_dir;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_miner_interfaces
size_t get_serialized_size_robo_miner_interfaces__msg__RobotPositionResponse(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotPositionResponse__ros_msg_type * ros_message = static_cast<const _RobotPositionResponse__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->error_reason.size + 1);
  // field.name surrounding_tiles
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->surrounding_tiles;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot_dir
  {
    size_t item_size = sizeof(ros_message->robot_dir);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RobotPositionResponse__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robo_miner_interfaces__msg__RobotPositionResponse(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_miner_interfaces
size_t max_serialized_size_robo_miner_interfaces__msg__RobotPositionResponse(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: error_reason
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: surrounding_tiles
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: robot_dir
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _RobotPositionResponse__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_robo_miner_interfaces__msg__RobotPositionResponse(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RobotPositionResponse = {
  "robo_miner_interfaces::msg",
  "RobotPositionResponse",
  _RobotPositionResponse__cdr_serialize,
  _RobotPositionResponse__cdr_deserialize,
  _RobotPositionResponse__get_serialized_size,
  _RobotPositionResponse__max_serialized_size
};

static rosidl_message_type_support_t _RobotPositionResponse__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotPositionResponse,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_miner_interfaces, msg, RobotPositionResponse)() {
  return &_RobotPositionResponse__type_support;
}

#if defined(__cplusplus)
}
#endif
