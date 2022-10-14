// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robo_miner_interfaces:srv/RobotMove.idl
// generated code does not contain a copyright notice
#include "robo_miner_interfaces/srv/detail/robot_move__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robo_miner_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robo_miner_interfaces/srv/detail/robot_move__struct.h"
#include "robo_miner_interfaces/srv/detail/robot_move__functions.h"
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

#include "robo_miner_interfaces/msg/detail/robot_move_type__functions.h"  // robot_move_type

// forward declare type support functions
size_t get_serialized_size_robo_miner_interfaces__msg__RobotMoveType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_robo_miner_interfaces__msg__RobotMoveType(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_miner_interfaces, msg, RobotMoveType)();


using _RobotMove_Request__ros_msg_type = robo_miner_interfaces__srv__RobotMove_Request;

static bool _RobotMove_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RobotMove_Request__ros_msg_type * ros_message = static_cast<const _RobotMove_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: robot_move_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, robo_miner_interfaces, msg, RobotMoveType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->robot_move_type, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _RobotMove_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RobotMove_Request__ros_msg_type * ros_message = static_cast<_RobotMove_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: robot_move_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, robo_miner_interfaces, msg, RobotMoveType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->robot_move_type))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_miner_interfaces
size_t get_serialized_size_robo_miner_interfaces__srv__RobotMove_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotMove_Request__ros_msg_type * ros_message = static_cast<const _RobotMove_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name robot_move_type

  current_alignment += get_serialized_size_robo_miner_interfaces__msg__RobotMoveType(
    &(ros_message->robot_move_type), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _RobotMove_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robo_miner_interfaces__srv__RobotMove_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_miner_interfaces
size_t max_serialized_size_robo_miner_interfaces__srv__RobotMove_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: robot_move_type
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_robo_miner_interfaces__msg__RobotMoveType(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _RobotMove_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_robo_miner_interfaces__srv__RobotMove_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RobotMove_Request = {
  "robo_miner_interfaces::srv",
  "RobotMove_Request",
  _RobotMove_Request__cdr_serialize,
  _RobotMove_Request__cdr_deserialize,
  _RobotMove_Request__get_serialized_size,
  _RobotMove_Request__max_serialized_size
};

static rosidl_message_type_support_t _RobotMove_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotMove_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_miner_interfaces, srv, RobotMove_Request)() {
  return &_RobotMove_Request__type_support;
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
// #include "robo_miner_interfaces/srv/detail/robot_move__struct.h"
// already included above
// #include "robo_miner_interfaces/srv/detail/robot_move__functions.h"
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

#include "robo_miner_interfaces/msg/detail/robot_position_response__functions.h"  // robot_position_response

// forward declare type support functions
size_t get_serialized_size_robo_miner_interfaces__msg__RobotPositionResponse(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_robo_miner_interfaces__msg__RobotPositionResponse(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_miner_interfaces, msg, RobotPositionResponse)();


using _RobotMove_Response__ros_msg_type = robo_miner_interfaces__srv__RobotMove_Response;

static bool _RobotMove_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RobotMove_Response__ros_msg_type * ros_message = static_cast<const _RobotMove_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: robot_position_response
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, robo_miner_interfaces, msg, RobotPositionResponse
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->robot_position_response, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _RobotMove_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RobotMove_Response__ros_msg_type * ros_message = static_cast<_RobotMove_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: robot_position_response
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, robo_miner_interfaces, msg, RobotPositionResponse
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->robot_position_response))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_miner_interfaces
size_t get_serialized_size_robo_miner_interfaces__srv__RobotMove_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotMove_Response__ros_msg_type * ros_message = static_cast<const _RobotMove_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name robot_position_response

  current_alignment += get_serialized_size_robo_miner_interfaces__msg__RobotPositionResponse(
    &(ros_message->robot_position_response), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _RobotMove_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robo_miner_interfaces__srv__RobotMove_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_miner_interfaces
size_t max_serialized_size_robo_miner_interfaces__srv__RobotMove_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: robot_position_response
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_robo_miner_interfaces__msg__RobotPositionResponse(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _RobotMove_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_robo_miner_interfaces__srv__RobotMove_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RobotMove_Response = {
  "robo_miner_interfaces::srv",
  "RobotMove_Response",
  _RobotMove_Response__cdr_serialize,
  _RobotMove_Response__cdr_deserialize,
  _RobotMove_Response__get_serialized_size,
  _RobotMove_Response__max_serialized_size
};

static rosidl_message_type_support_t _RobotMove_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotMove_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_miner_interfaces, srv, RobotMove_Response)() {
  return &_RobotMove_Response__type_support;
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
#include "robo_miner_interfaces/srv/robot_move.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t RobotMove__callbacks = {
  "robo_miner_interfaces::srv",
  "RobotMove",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_miner_interfaces, srv, RobotMove_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_miner_interfaces, srv, RobotMove_Response)(),
};

static rosidl_service_type_support_t RobotMove__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &RobotMove__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_miner_interfaces, srv, RobotMove)() {
  return &RobotMove__handle;
}

#if defined(__cplusplus)
}
#endif
