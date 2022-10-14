// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robo_miner_interfaces:srv/FieldMapValidate.idl
// generated code does not contain a copyright notice
#include "robo_miner_interfaces/srv/detail/field_map_validate__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robo_miner_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robo_miner_interfaces/srv/detail/field_map_validate__struct.h"
#include "robo_miner_interfaces/srv/detail/field_map_validate__functions.h"
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

#include "robo_miner_interfaces/msg/detail/u_int8_multi_array__functions.h"  // field_map

// forward declare type support functions
size_t get_serialized_size_robo_miner_interfaces__msg__UInt8MultiArray(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_robo_miner_interfaces__msg__UInt8MultiArray(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_miner_interfaces, msg, UInt8MultiArray)();


using _FieldMapValidate_Request__ros_msg_type = robo_miner_interfaces__srv__FieldMapValidate_Request;

static bool _FieldMapValidate_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FieldMapValidate_Request__ros_msg_type * ros_message = static_cast<const _FieldMapValidate_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: field_map
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, robo_miner_interfaces, msg, UInt8MultiArray
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->field_map, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _FieldMapValidate_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FieldMapValidate_Request__ros_msg_type * ros_message = static_cast<_FieldMapValidate_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: field_map
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, robo_miner_interfaces, msg, UInt8MultiArray
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->field_map))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_miner_interfaces
size_t get_serialized_size_robo_miner_interfaces__srv__FieldMapValidate_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FieldMapValidate_Request__ros_msg_type * ros_message = static_cast<const _FieldMapValidate_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name field_map

  current_alignment += get_serialized_size_robo_miner_interfaces__msg__UInt8MultiArray(
    &(ros_message->field_map), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _FieldMapValidate_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robo_miner_interfaces__srv__FieldMapValidate_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_miner_interfaces
size_t max_serialized_size_robo_miner_interfaces__srv__FieldMapValidate_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: field_map
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_robo_miner_interfaces__msg__UInt8MultiArray(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _FieldMapValidate_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_robo_miner_interfaces__srv__FieldMapValidate_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_FieldMapValidate_Request = {
  "robo_miner_interfaces::srv",
  "FieldMapValidate_Request",
  _FieldMapValidate_Request__cdr_serialize,
  _FieldMapValidate_Request__cdr_deserialize,
  _FieldMapValidate_Request__get_serialized_size,
  _FieldMapValidate_Request__max_serialized_size
};

static rosidl_message_type_support_t _FieldMapValidate_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FieldMapValidate_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_miner_interfaces, srv, FieldMapValidate_Request)() {
  return &_FieldMapValidate_Request__type_support;
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
// #include "robo_miner_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "robo_miner_interfaces/srv/detail/field_map_validate__struct.h"
// already included above
// #include "robo_miner_interfaces/srv/detail/field_map_validate__functions.h"
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

#include "rosidl_runtime_c/string.h"  // error_reason
#include "rosidl_runtime_c/string_functions.h"  // error_reason

// forward declare type support functions


using _FieldMapValidate_Response__ros_msg_type = robo_miner_interfaces__srv__FieldMapValidate_Response;

static bool _FieldMapValidate_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FieldMapValidate_Response__ros_msg_type * ros_message = static_cast<const _FieldMapValidate_Response__ros_msg_type *>(untyped_ros_message);
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

  return true;
}

static bool _FieldMapValidate_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FieldMapValidate_Response__ros_msg_type * ros_message = static_cast<_FieldMapValidate_Response__ros_msg_type *>(untyped_ros_message);
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

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_miner_interfaces
size_t get_serialized_size_robo_miner_interfaces__srv__FieldMapValidate_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FieldMapValidate_Response__ros_msg_type * ros_message = static_cast<const _FieldMapValidate_Response__ros_msg_type *>(untyped_ros_message);
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

  return current_alignment - initial_alignment;
}

static uint32_t _FieldMapValidate_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robo_miner_interfaces__srv__FieldMapValidate_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_miner_interfaces
size_t max_serialized_size_robo_miner_interfaces__srv__FieldMapValidate_Response(
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

  return current_alignment - initial_alignment;
}

static size_t _FieldMapValidate_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_robo_miner_interfaces__srv__FieldMapValidate_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_FieldMapValidate_Response = {
  "robo_miner_interfaces::srv",
  "FieldMapValidate_Response",
  _FieldMapValidate_Response__cdr_serialize,
  _FieldMapValidate_Response__cdr_deserialize,
  _FieldMapValidate_Response__get_serialized_size,
  _FieldMapValidate_Response__max_serialized_size
};

static rosidl_message_type_support_t _FieldMapValidate_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FieldMapValidate_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_miner_interfaces, srv, FieldMapValidate_Response)() {
  return &_FieldMapValidate_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "robo_miner_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robo_miner_interfaces/srv/field_map_validate.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t FieldMapValidate__callbacks = {
  "robo_miner_interfaces::srv",
  "FieldMapValidate",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_miner_interfaces, srv, FieldMapValidate_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_miner_interfaces, srv, FieldMapValidate_Response)(),
};

static rosidl_service_type_support_t FieldMapValidate__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &FieldMapValidate__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_miner_interfaces, srv, FieldMapValidate)() {
  return &FieldMapValidate__handle;
}

#if defined(__cplusplus)
}
#endif
