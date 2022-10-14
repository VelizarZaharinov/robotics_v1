// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robo_miner_interfaces:msg/RobotMoveType.idl
// generated code does not contain a copyright notice
#include "robo_miner_interfaces/msg/detail/robot_move_type__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robo_miner_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robo_miner_interfaces/msg/detail/robot_move_type__struct.h"
#include "robo_miner_interfaces/msg/detail/robot_move_type__functions.h"
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


// forward declare type support functions


using _RobotMoveType__ros_msg_type = robo_miner_interfaces__msg__RobotMoveType;

static bool _RobotMoveType__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RobotMoveType__ros_msg_type * ros_message = static_cast<const _RobotMoveType__ros_msg_type *>(untyped_ros_message);
  // Field name: move_type
  {
    cdr << ros_message->move_type;
  }

  return true;
}

static bool _RobotMoveType__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RobotMoveType__ros_msg_type * ros_message = static_cast<_RobotMoveType__ros_msg_type *>(untyped_ros_message);
  // Field name: move_type
  {
    cdr >> ros_message->move_type;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_miner_interfaces
size_t get_serialized_size_robo_miner_interfaces__msg__RobotMoveType(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotMoveType__ros_msg_type * ros_message = static_cast<const _RobotMoveType__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name move_type
  {
    size_t item_size = sizeof(ros_message->move_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RobotMoveType__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robo_miner_interfaces__msg__RobotMoveType(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_miner_interfaces
size_t max_serialized_size_robo_miner_interfaces__msg__RobotMoveType(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: move_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _RobotMoveType__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_robo_miner_interfaces__msg__RobotMoveType(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RobotMoveType = {
  "robo_miner_interfaces::msg",
  "RobotMoveType",
  _RobotMoveType__cdr_serialize,
  _RobotMoveType__cdr_deserialize,
  _RobotMoveType__get_serialized_size,
  _RobotMoveType__max_serialized_size
};

static rosidl_message_type_support_t _RobotMoveType__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotMoveType,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_miner_interfaces, msg, RobotMoveType)() {
  return &_RobotMoveType__type_support;
}

#if defined(__cplusplus)
}
#endif
