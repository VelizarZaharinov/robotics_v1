// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robo_miner_interfaces:srv/QueryInitialRobotPosition.idl
// generated code does not contain a copyright notice
#include "robo_miner_interfaces/srv/detail/query_initial_robot_position__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robo_miner_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robo_miner_interfaces/srv/detail/query_initial_robot_position__struct.h"
#include "robo_miner_interfaces/srv/detail/query_initial_robot_position__functions.h"
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


using _QueryInitialRobotPosition_Request__ros_msg_type = robo_miner_interfaces__srv__QueryInitialRobotPosition_Request;

static bool _QueryInitialRobotPosition_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _QueryInitialRobotPosition_Request__ros_msg_type * ros_message = static_cast<const _QueryInitialRobotPosition_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _QueryInitialRobotPosition_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _QueryInitialRobotPosition_Request__ros_msg_type * ros_message = static_cast<_QueryInitialRobotPosition_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_miner_interfaces
size_t get_serialized_size_robo_miner_interfaces__srv__QueryInitialRobotPosition_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _QueryInitialRobotPosition_Request__ros_msg_type * ros_message = static_cast<const _QueryInitialRobotPosition_Request__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _QueryInitialRobotPosition_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robo_miner_interfaces__srv__QueryInitialRobotPosition_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_miner_interfaces
size_t max_serialized_size_robo_miner_interfaces__srv__QueryInitialRobotPosition_Request(
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

static size_t _QueryInitialRobotPosition_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_robo_miner_interfaces__srv__QueryInitialRobotPosition_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_QueryInitialRobotPosition_Request = {
  "robo_miner_interfaces::srv",
  "QueryInitialRobotPosition_Request",
  _QueryInitialRobotPosition_Request__cdr_serialize,
  _QueryInitialRobotPosition_Request__cdr_deserialize,
  _QueryInitialRobotPosition_Request__get_serialized_size,
  _QueryInitialRobotPosition_Request__max_serialized_size
};

static rosidl_message_type_support_t _QueryInitialRobotPosition_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_QueryInitialRobotPosition_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_miner_interfaces, srv, QueryInitialRobotPosition_Request)() {
  return &_QueryInitialRobotPosition_Request__type_support;
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
// #include "robo_miner_interfaces/srv/detail/query_initial_robot_position__struct.h"
// already included above
// #include "robo_miner_interfaces/srv/detail/query_initial_robot_position__functions.h"
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


using _QueryInitialRobotPosition_Response__ros_msg_type = robo_miner_interfaces__srv__QueryInitialRobotPosition_Response;

static bool _QueryInitialRobotPosition_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _QueryInitialRobotPosition_Response__ros_msg_type * ros_message = static_cast<const _QueryInitialRobotPosition_Response__ros_msg_type *>(untyped_ros_message);
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

  // Field name: robot_initial_tile
  {
    cdr << ros_message->robot_initial_tile;
  }

  return true;
}

static bool _QueryInitialRobotPosition_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _QueryInitialRobotPosition_Response__ros_msg_type * ros_message = static_cast<_QueryInitialRobotPosition_Response__ros_msg_type *>(untyped_ros_message);
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

  // Field name: robot_initial_tile
  {
    cdr >> ros_message->robot_initial_tile;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_miner_interfaces
size_t get_serialized_size_robo_miner_interfaces__srv__QueryInitialRobotPosition_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _QueryInitialRobotPosition_Response__ros_msg_type * ros_message = static_cast<const _QueryInitialRobotPosition_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name robot_position_response

  current_alignment += get_serialized_size_robo_miner_interfaces__msg__RobotPositionResponse(
    &(ros_message->robot_position_response), current_alignment);
  // field.name robot_initial_tile
  {
    size_t item_size = sizeof(ros_message->robot_initial_tile);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _QueryInitialRobotPosition_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robo_miner_interfaces__srv__QueryInitialRobotPosition_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_miner_interfaces
size_t max_serialized_size_robo_miner_interfaces__srv__QueryInitialRobotPosition_Response(
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
  // member: robot_initial_tile
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _QueryInitialRobotPosition_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_robo_miner_interfaces__srv__QueryInitialRobotPosition_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_QueryInitialRobotPosition_Response = {
  "robo_miner_interfaces::srv",
  "QueryInitialRobotPosition_Response",
  _QueryInitialRobotPosition_Response__cdr_serialize,
  _QueryInitialRobotPosition_Response__cdr_deserialize,
  _QueryInitialRobotPosition_Response__get_serialized_size,
  _QueryInitialRobotPosition_Response__max_serialized_size
};

static rosidl_message_type_support_t _QueryInitialRobotPosition_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_QueryInitialRobotPosition_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_miner_interfaces, srv, QueryInitialRobotPosition_Response)() {
  return &_QueryInitialRobotPosition_Response__type_support;
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
#include "robo_miner_interfaces/srv/query_initial_robot_position.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t QueryInitialRobotPosition__callbacks = {
  "robo_miner_interfaces::srv",
  "QueryInitialRobotPosition",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_miner_interfaces, srv, QueryInitialRobotPosition_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_miner_interfaces, srv, QueryInitialRobotPosition_Response)(),
};

static rosidl_service_type_support_t QueryInitialRobotPosition__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &QueryInitialRobotPosition__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_miner_interfaces, srv, QueryInitialRobotPosition)() {
  return &QueryInitialRobotPosition__handle;
}

#if defined(__cplusplus)
}
#endif
