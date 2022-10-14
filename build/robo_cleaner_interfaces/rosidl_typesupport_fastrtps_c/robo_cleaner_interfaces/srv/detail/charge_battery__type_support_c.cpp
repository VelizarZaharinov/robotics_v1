// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robo_cleaner_interfaces:srv/ChargeBattery.idl
// generated code does not contain a copyright notice
#include "robo_cleaner_interfaces/srv/detail/charge_battery__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robo_cleaner_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robo_cleaner_interfaces/srv/detail/charge_battery__struct.h"
#include "robo_cleaner_interfaces/srv/detail/charge_battery__functions.h"
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


using _ChargeBattery_Request__ros_msg_type = robo_cleaner_interfaces__srv__ChargeBattery_Request;

static bool _ChargeBattery_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ChargeBattery_Request__ros_msg_type * ros_message = static_cast<const _ChargeBattery_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: charge_turns
  {
    cdr << ros_message->charge_turns;
  }

  return true;
}

static bool _ChargeBattery_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ChargeBattery_Request__ros_msg_type * ros_message = static_cast<_ChargeBattery_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: charge_turns
  {
    cdr >> ros_message->charge_turns;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_cleaner_interfaces
size_t get_serialized_size_robo_cleaner_interfaces__srv__ChargeBattery_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ChargeBattery_Request__ros_msg_type * ros_message = static_cast<const _ChargeBattery_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name charge_turns
  {
    size_t item_size = sizeof(ros_message->charge_turns);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ChargeBattery_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robo_cleaner_interfaces__srv__ChargeBattery_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_cleaner_interfaces
size_t max_serialized_size_robo_cleaner_interfaces__srv__ChargeBattery_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: charge_turns
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ChargeBattery_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_robo_cleaner_interfaces__srv__ChargeBattery_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ChargeBattery_Request = {
  "robo_cleaner_interfaces::srv",
  "ChargeBattery_Request",
  _ChargeBattery_Request__cdr_serialize,
  _ChargeBattery_Request__cdr_deserialize,
  _ChargeBattery_Request__get_serialized_size,
  _ChargeBattery_Request__max_serialized_size
};

static rosidl_message_type_support_t _ChargeBattery_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ChargeBattery_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_cleaner_interfaces, srv, ChargeBattery_Request)() {
  return &_ChargeBattery_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "robo_cleaner_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "robo_cleaner_interfaces/srv/detail/charge_battery__struct.h"
// already included above
// #include "robo_cleaner_interfaces/srv/detail/charge_battery__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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
#include "rosidl_runtime_c/string.h"  // error_reason
#include "rosidl_runtime_c/string_functions.h"  // error_reason

// forward declare type support functions
size_t get_serialized_size_robo_cleaner_interfaces__msg__BatteryStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_robo_cleaner_interfaces__msg__BatteryStatus(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_cleaner_interfaces, msg, BatteryStatus)();


using _ChargeBattery_Response__ros_msg_type = robo_cleaner_interfaces__srv__ChargeBattery_Response;

static bool _ChargeBattery_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ChargeBattery_Response__ros_msg_type * ros_message = static_cast<const _ChargeBattery_Response__ros_msg_type *>(untyped_ros_message);
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

  // Field name: turns_spend_charging
  {
    cdr << ros_message->turns_spend_charging;
  }

  return true;
}

static bool _ChargeBattery_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ChargeBattery_Response__ros_msg_type * ros_message = static_cast<_ChargeBattery_Response__ros_msg_type *>(untyped_ros_message);
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

  // Field name: turns_spend_charging
  {
    cdr >> ros_message->turns_spend_charging;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_cleaner_interfaces
size_t get_serialized_size_robo_cleaner_interfaces__srv__ChargeBattery_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ChargeBattery_Response__ros_msg_type * ros_message = static_cast<const _ChargeBattery_Response__ros_msg_type *>(untyped_ros_message);
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
  // field.name battery_status

  current_alignment += get_serialized_size_robo_cleaner_interfaces__msg__BatteryStatus(
    &(ros_message->battery_status), current_alignment);
  // field.name turns_spend_charging
  {
    size_t item_size = sizeof(ros_message->turns_spend_charging);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ChargeBattery_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robo_cleaner_interfaces__srv__ChargeBattery_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_cleaner_interfaces
size_t max_serialized_size_robo_cleaner_interfaces__srv__ChargeBattery_Response(
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
  // member: battery_status
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_robo_cleaner_interfaces__msg__BatteryStatus(
        full_bounded, current_alignment);
    }
  }
  // member: turns_spend_charging
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ChargeBattery_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_robo_cleaner_interfaces__srv__ChargeBattery_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ChargeBattery_Response = {
  "robo_cleaner_interfaces::srv",
  "ChargeBattery_Response",
  _ChargeBattery_Response__cdr_serialize,
  _ChargeBattery_Response__cdr_deserialize,
  _ChargeBattery_Response__get_serialized_size,
  _ChargeBattery_Response__max_serialized_size
};

static rosidl_message_type_support_t _ChargeBattery_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ChargeBattery_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_cleaner_interfaces, srv, ChargeBattery_Response)() {
  return &_ChargeBattery_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "robo_cleaner_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robo_cleaner_interfaces/srv/charge_battery.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ChargeBattery__callbacks = {
  "robo_cleaner_interfaces::srv",
  "ChargeBattery",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_cleaner_interfaces, srv, ChargeBattery_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_cleaner_interfaces, srv, ChargeBattery_Response)(),
};

static rosidl_service_type_support_t ChargeBattery__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ChargeBattery__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_cleaner_interfaces, srv, ChargeBattery)() {
  return &ChargeBattery__handle;
}

#if defined(__cplusplus)
}
#endif
