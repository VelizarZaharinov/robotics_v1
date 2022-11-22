// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from urscript_interfaces:srv/GetEefAngleAxis.idl
// generated code does not contain a copyright notice
#include "urscript_interfaces/srv/detail/get_eef_angle_axis__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "urscript_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "urscript_interfaces/srv/detail/get_eef_angle_axis__struct.h"
#include "urscript_interfaces/srv/detail/get_eef_angle_axis__functions.h"
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


using _GetEefAngleAxis_Request__ros_msg_type = urscript_interfaces__srv__GetEefAngleAxis_Request;

static bool _GetEefAngleAxis_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetEefAngleAxis_Request__ros_msg_type * ros_message = static_cast<const _GetEefAngleAxis_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _GetEefAngleAxis_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetEefAngleAxis_Request__ros_msg_type * ros_message = static_cast<_GetEefAngleAxis_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_urscript_interfaces
size_t get_serialized_size_urscript_interfaces__srv__GetEefAngleAxis_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetEefAngleAxis_Request__ros_msg_type * ros_message = static_cast<const _GetEefAngleAxis_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetEefAngleAxis_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_urscript_interfaces__srv__GetEefAngleAxis_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_urscript_interfaces
size_t max_serialized_size_urscript_interfaces__srv__GetEefAngleAxis_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _GetEefAngleAxis_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_urscript_interfaces__srv__GetEefAngleAxis_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetEefAngleAxis_Request = {
  "urscript_interfaces::srv",
  "GetEefAngleAxis_Request",
  _GetEefAngleAxis_Request__cdr_serialize,
  _GetEefAngleAxis_Request__cdr_deserialize,
  _GetEefAngleAxis_Request__get_serialized_size,
  _GetEefAngleAxis_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetEefAngleAxis_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetEefAngleAxis_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, urscript_interfaces, srv, GetEefAngleAxis_Request)() {
  return &_GetEefAngleAxis_Request__type_support;
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
// #include "urscript_interfaces/srv/detail/get_eef_angle_axis__struct.h"
// already included above
// #include "urscript_interfaces/srv/detail/get_eef_angle_axis__functions.h"
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

#include "geometry_msgs/msg/detail/vector3__functions.h"  // angle_axis
#include "rosidl_runtime_c/string.h"  // error_reason
#include "rosidl_runtime_c/string_functions.h"  // error_reason

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_urscript_interfaces
size_t get_serialized_size_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_urscript_interfaces
size_t max_serialized_size_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_urscript_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3)();


using _GetEefAngleAxis_Response__ros_msg_type = urscript_interfaces__srv__GetEefAngleAxis_Response;

static bool _GetEefAngleAxis_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetEefAngleAxis_Response__ros_msg_type * ros_message = static_cast<const _GetEefAngleAxis_Response__ros_msg_type *>(untyped_ros_message);
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

  // Field name: angle_axis
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->angle_axis, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GetEefAngleAxis_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetEefAngleAxis_Response__ros_msg_type * ros_message = static_cast<_GetEefAngleAxis_Response__ros_msg_type *>(untyped_ros_message);
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

  // Field name: angle_axis
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->angle_axis))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_urscript_interfaces
size_t get_serialized_size_urscript_interfaces__srv__GetEefAngleAxis_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetEefAngleAxis_Response__ros_msg_type * ros_message = static_cast<const _GetEefAngleAxis_Response__ros_msg_type *>(untyped_ros_message);
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
  // field.name angle_axis

  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->angle_axis), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GetEefAngleAxis_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_urscript_interfaces__srv__GetEefAngleAxis_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_urscript_interfaces
size_t max_serialized_size_urscript_interfaces__srv__GetEefAngleAxis_Response(
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
  // member: angle_axis
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Vector3(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetEefAngleAxis_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_urscript_interfaces__srv__GetEefAngleAxis_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetEefAngleAxis_Response = {
  "urscript_interfaces::srv",
  "GetEefAngleAxis_Response",
  _GetEefAngleAxis_Response__cdr_serialize,
  _GetEefAngleAxis_Response__cdr_deserialize,
  _GetEefAngleAxis_Response__get_serialized_size,
  _GetEefAngleAxis_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetEefAngleAxis_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetEefAngleAxis_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, urscript_interfaces, srv, GetEefAngleAxis_Response)() {
  return &_GetEefAngleAxis_Response__type_support;
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
#include "urscript_interfaces/srv/get_eef_angle_axis.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetEefAngleAxis__callbacks = {
  "urscript_interfaces::srv",
  "GetEefAngleAxis",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, urscript_interfaces, srv, GetEefAngleAxis_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, urscript_interfaces, srv, GetEefAngleAxis_Response)(),
};

static rosidl_service_type_support_t GetEefAngleAxis__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetEefAngleAxis__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, urscript_interfaces, srv, GetEefAngleAxis)() {
  return &GetEefAngleAxis__handle;
}

#if defined(__cplusplus)
}
#endif
