// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robo_miner_interfaces:srv/LongestSequenceValidate.idl
// generated code does not contain a copyright notice
#include "robo_miner_interfaces/srv/detail/longest_sequence_validate__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robo_miner_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robo_miner_interfaces/srv/detail/longest_sequence_validate__struct.h"
#include "robo_miner_interfaces/srv/detail/longest_sequence_validate__functions.h"
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

#include "robo_miner_interfaces/msg/detail/field_point__functions.h"  // sequence_points

// forward declare type support functions
size_t get_serialized_size_robo_miner_interfaces__msg__FieldPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_robo_miner_interfaces__msg__FieldPoint(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_miner_interfaces, msg, FieldPoint)();


using _LongestSequenceValidate_Request__ros_msg_type = robo_miner_interfaces__srv__LongestSequenceValidate_Request;

static bool _LongestSequenceValidate_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LongestSequenceValidate_Request__ros_msg_type * ros_message = static_cast<const _LongestSequenceValidate_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: sequence_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, robo_miner_interfaces, msg, FieldPoint
      )()->data);
    size_t size = ros_message->sequence_points.size;
    auto array_ptr = ros_message->sequence_points.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _LongestSequenceValidate_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LongestSequenceValidate_Request__ros_msg_type * ros_message = static_cast<_LongestSequenceValidate_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: sequence_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, robo_miner_interfaces, msg, FieldPoint
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->sequence_points.data) {
      robo_miner_interfaces__msg__FieldPoint__Sequence__fini(&ros_message->sequence_points);
    }
    if (!robo_miner_interfaces__msg__FieldPoint__Sequence__init(&ros_message->sequence_points, size)) {
      return "failed to create array for field 'sequence_points'";
    }
    auto array_ptr = ros_message->sequence_points.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_miner_interfaces
size_t get_serialized_size_robo_miner_interfaces__srv__LongestSequenceValidate_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LongestSequenceValidate_Request__ros_msg_type * ros_message = static_cast<const _LongestSequenceValidate_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sequence_points
  {
    size_t array_size = ros_message->sequence_points.size;
    auto array_ptr = ros_message->sequence_points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_robo_miner_interfaces__msg__FieldPoint(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LongestSequenceValidate_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robo_miner_interfaces__srv__LongestSequenceValidate_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_miner_interfaces
size_t max_serialized_size_robo_miner_interfaces__srv__LongestSequenceValidate_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: sequence_points
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_robo_miner_interfaces__msg__FieldPoint(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _LongestSequenceValidate_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_robo_miner_interfaces__srv__LongestSequenceValidate_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LongestSequenceValidate_Request = {
  "robo_miner_interfaces::srv",
  "LongestSequenceValidate_Request",
  _LongestSequenceValidate_Request__cdr_serialize,
  _LongestSequenceValidate_Request__cdr_deserialize,
  _LongestSequenceValidate_Request__get_serialized_size,
  _LongestSequenceValidate_Request__max_serialized_size
};

static rosidl_message_type_support_t _LongestSequenceValidate_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LongestSequenceValidate_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_miner_interfaces, srv, LongestSequenceValidate_Request)() {
  return &_LongestSequenceValidate_Request__type_support;
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
// #include "robo_miner_interfaces/srv/detail/longest_sequence_validate__struct.h"
// already included above
// #include "robo_miner_interfaces/srv/detail/longest_sequence_validate__functions.h"
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


using _LongestSequenceValidate_Response__ros_msg_type = robo_miner_interfaces__srv__LongestSequenceValidate_Response;

static bool _LongestSequenceValidate_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LongestSequenceValidate_Response__ros_msg_type * ros_message = static_cast<const _LongestSequenceValidate_Response__ros_msg_type *>(untyped_ros_message);
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

static bool _LongestSequenceValidate_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LongestSequenceValidate_Response__ros_msg_type * ros_message = static_cast<_LongestSequenceValidate_Response__ros_msg_type *>(untyped_ros_message);
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
size_t get_serialized_size_robo_miner_interfaces__srv__LongestSequenceValidate_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LongestSequenceValidate_Response__ros_msg_type * ros_message = static_cast<const _LongestSequenceValidate_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _LongestSequenceValidate_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robo_miner_interfaces__srv__LongestSequenceValidate_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_miner_interfaces
size_t max_serialized_size_robo_miner_interfaces__srv__LongestSequenceValidate_Response(
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

static size_t _LongestSequenceValidate_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_robo_miner_interfaces__srv__LongestSequenceValidate_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LongestSequenceValidate_Response = {
  "robo_miner_interfaces::srv",
  "LongestSequenceValidate_Response",
  _LongestSequenceValidate_Response__cdr_serialize,
  _LongestSequenceValidate_Response__cdr_deserialize,
  _LongestSequenceValidate_Response__get_serialized_size,
  _LongestSequenceValidate_Response__max_serialized_size
};

static rosidl_message_type_support_t _LongestSequenceValidate_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LongestSequenceValidate_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_miner_interfaces, srv, LongestSequenceValidate_Response)() {
  return &_LongestSequenceValidate_Response__type_support;
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
#include "robo_miner_interfaces/srv/longest_sequence_validate.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t LongestSequenceValidate__callbacks = {
  "robo_miner_interfaces::srv",
  "LongestSequenceValidate",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_miner_interfaces, srv, LongestSequenceValidate_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_miner_interfaces, srv, LongestSequenceValidate_Response)(),
};

static rosidl_service_type_support_t LongestSequenceValidate__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &LongestSequenceValidate__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_miner_interfaces, srv, LongestSequenceValidate)() {
  return &LongestSequenceValidate__handle;
}

#if defined(__cplusplus)
}
#endif
