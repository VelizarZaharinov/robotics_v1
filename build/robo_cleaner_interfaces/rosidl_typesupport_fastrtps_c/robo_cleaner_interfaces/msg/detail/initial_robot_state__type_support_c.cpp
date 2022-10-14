// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robo_cleaner_interfaces:msg/InitialRobotState.idl
// generated code does not contain a copyright notice
#include "robo_cleaner_interfaces/msg/detail/initial_robot_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robo_cleaner_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robo_cleaner_interfaces/msg/detail/initial_robot_state__struct.h"
#include "robo_cleaner_interfaces/msg/detail/initial_robot_state__functions.h"
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

#include "robo_cleaner_interfaces/msg/detail/battery_status__functions.h"  // battery_status

// forward declare type support functions
size_t get_serialized_size_robo_cleaner_interfaces__msg__BatteryStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_robo_cleaner_interfaces__msg__BatteryStatus(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_cleaner_interfaces, msg, BatteryStatus)();


using _InitialRobotState__ros_msg_type = robo_cleaner_interfaces__msg__InitialRobotState;

static bool _InitialRobotState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _InitialRobotState__ros_msg_type * ros_message = static_cast<const _InitialRobotState__ros_msg_type *>(untyped_ros_message);
  // Field name: battery_status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, robo_cleaner_interfaces, msg, BatteryStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->battery_status, cdr))
    {
      return false;
    }
  }

  // Field name: robot_tile
  {
    cdr << ros_message->robot_tile;
  }

  // Field name: robot_dir
  {
    cdr << ros_message->robot_dir;
  }

  return true;
}

static bool _InitialRobotState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _InitialRobotState__ros_msg_type * ros_message = static_cast<_InitialRobotState__ros_msg_type *>(untyped_ros_message);
  // Field name: battery_status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, robo_cleaner_interfaces, msg, BatteryStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->battery_status))
    {
      return false;
    }
  }

  // Field name: robot_tile
  {
    cdr >> ros_message->robot_tile;
  }

  // Field name: robot_dir
  {
    cdr >> ros_message->robot_dir;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_cleaner_interfaces
size_t get_serialized_size_robo_cleaner_interfaces__msg__InitialRobotState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _InitialRobotState__ros_msg_type * ros_message = static_cast<const _InitialRobotState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name battery_status

  current_alignment += get_serialized_size_robo_cleaner_interfaces__msg__BatteryStatus(
    &(ros_message->battery_status), current_alignment);
  // field.name robot_tile
  {
    size_t item_size = sizeof(ros_message->robot_tile);
    current_alignment += item_size +
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

static uint32_t _InitialRobotState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robo_cleaner_interfaces__msg__InitialRobotState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_cleaner_interfaces
size_t max_serialized_size_robo_cleaner_interfaces__msg__InitialRobotState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: battery_status
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_robo_cleaner_interfaces__msg__BatteryStatus(
        full_bounded, current_alignment);
    }
  }
  // member: robot_tile
  {
    size_t array_size = 1;

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

static size_t _InitialRobotState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_robo_cleaner_interfaces__msg__InitialRobotState(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_InitialRobotState = {
  "robo_cleaner_interfaces::msg",
  "InitialRobotState",
  _InitialRobotState__cdr_serialize,
  _InitialRobotState__cdr_deserialize,
  _InitialRobotState__get_serialized_size,
  _InitialRobotState__max_serialized_size
};

static rosidl_message_type_support_t _InitialRobotState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_InitialRobotState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_cleaner_interfaces, msg, InitialRobotState)() {
  return &_InitialRobotState__type_support;
}

#if defined(__cplusplus)
}
#endif
