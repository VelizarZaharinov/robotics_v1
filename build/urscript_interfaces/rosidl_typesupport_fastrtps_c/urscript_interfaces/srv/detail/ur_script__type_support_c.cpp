// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from urscript_interfaces:srv/UrScript.idl
// generated code does not contain a copyright notice
#include "urscript_interfaces/srv/detail/ur_script__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "urscript_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "urscript_interfaces/srv/detail/ur_script__struct.h"
#include "urscript_interfaces/srv/detail/ur_script__functions.h"
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

#include "rosidl_runtime_c/string.h"  // data
#include "rosidl_runtime_c/string_functions.h"  // data

// forward declare type support functions


using _UrScript_Request__ros_msg_type = urscript_interfaces__srv__UrScript_Request;

static bool _UrScript_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _UrScript_Request__ros_msg_type * ros_message = static_cast<const _UrScript_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: data
  {
    const rosidl_runtime_c__String * str = &ros_message->data;
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

static bool _UrScript_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _UrScript_Request__ros_msg_type * ros_message = static_cast<_UrScript_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: data
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->data.data) {
      rosidl_runtime_c__String__init(&ros_message->data);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->data,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'data'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_urscript_interfaces
size_t get_serialized_size_urscript_interfaces__srv__UrScript_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _UrScript_Request__ros_msg_type * ros_message = static_cast<const _UrScript_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name data
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->data.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _UrScript_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_urscript_interfaces__srv__UrScript_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_urscript_interfaces
size_t max_serialized_size_urscript_interfaces__srv__UrScript_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: data
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

static size_t _UrScript_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_urscript_interfaces__srv__UrScript_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_UrScript_Request = {
  "urscript_interfaces::srv",
  "UrScript_Request",
  _UrScript_Request__cdr_serialize,
  _UrScript_Request__cdr_deserialize,
  _UrScript_Request__get_serialized_size,
  _UrScript_Request__max_serialized_size
};

static rosidl_message_type_support_t _UrScript_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_UrScript_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, urscript_interfaces, srv, UrScript_Request)() {
  return &_UrScript_Request__type_support;
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
// #include "urscript_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "urscript_interfaces/srv/detail/ur_script__struct.h"
// already included above
// #include "urscript_interfaces/srv/detail/ur_script__functions.h"
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

// already included above
// #include "rosidl_runtime_c/string.h"  // error_reason
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // error_reason

// forward declare type support functions


using _UrScript_Response__ros_msg_type = urscript_interfaces__srv__UrScript_Response;

static bool _UrScript_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _UrScript_Response__ros_msg_type * ros_message = static_cast<const _UrScript_Response__ros_msg_type *>(untyped_ros_message);
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

static bool _UrScript_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _UrScript_Response__ros_msg_type * ros_message = static_cast<_UrScript_Response__ros_msg_type *>(untyped_ros_message);
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_urscript_interfaces
size_t get_serialized_size_urscript_interfaces__srv__UrScript_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _UrScript_Response__ros_msg_type * ros_message = static_cast<const _UrScript_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _UrScript_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_urscript_interfaces__srv__UrScript_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_urscript_interfaces
size_t max_serialized_size_urscript_interfaces__srv__UrScript_Response(
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

static size_t _UrScript_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_urscript_interfaces__srv__UrScript_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_UrScript_Response = {
  "urscript_interfaces::srv",
  "UrScript_Response",
  _UrScript_Response__cdr_serialize,
  _UrScript_Response__cdr_deserialize,
  _UrScript_Response__get_serialized_size,
  _UrScript_Response__max_serialized_size
};

static rosidl_message_type_support_t _UrScript_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_UrScript_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, urscript_interfaces, srv, UrScript_Response)() {
  return &_UrScript_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "urscript_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "urscript_interfaces/srv/ur_script.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t UrScript__callbacks = {
  "urscript_interfaces::srv",
  "UrScript",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, urscript_interfaces, srv, UrScript_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, urscript_interfaces, srv, UrScript_Response)(),
};

static rosidl_service_type_support_t UrScript__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &UrScript__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, urscript_interfaces, srv, UrScript)() {
  return &UrScript__handle;
}

#if defined(__cplusplus)
}
#endif
