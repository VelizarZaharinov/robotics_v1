// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from robo_miner_interfaces:srv/RobotMove.idl
// generated code does not contain a copyright notice
#include "robo_miner_interfaces/srv/detail/robot_move__rosidl_typesupport_fastrtps_cpp.hpp"
#include "robo_miner_interfaces/srv/detail/robot_move__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace robo_miner_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const robo_miner_interfaces::msg::RobotMoveType &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  robo_miner_interfaces::msg::RobotMoveType &);
size_t get_serialized_size(
  const robo_miner_interfaces::msg::RobotMoveType &,
  size_t current_alignment);
size_t
max_serialized_size_RobotMoveType(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace robo_miner_interfaces


namespace robo_miner_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_miner_interfaces
cdr_serialize(
  const robo_miner_interfaces::srv::RobotMove_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: robot_move_type
  robo_miner_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.robot_move_type,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_miner_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robo_miner_interfaces::srv::RobotMove_Request & ros_message)
{
  // Member: robot_move_type
  robo_miner_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.robot_move_type);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_miner_interfaces
get_serialized_size(
  const robo_miner_interfaces::srv::RobotMove_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: robot_move_type

  current_alignment +=
    robo_miner_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.robot_move_type, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_miner_interfaces
max_serialized_size_RobotMove_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: robot_move_type
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        robo_miner_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_RobotMoveType(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _RobotMove_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const robo_miner_interfaces::srv::RobotMove_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RobotMove_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robo_miner_interfaces::srv::RobotMove_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RobotMove_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robo_miner_interfaces::srv::RobotMove_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RobotMove_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RobotMove_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _RobotMove_Request__callbacks = {
  "robo_miner_interfaces::srv",
  "RobotMove_Request",
  _RobotMove_Request__cdr_serialize,
  _RobotMove_Request__cdr_deserialize,
  _RobotMove_Request__get_serialized_size,
  _RobotMove_Request__max_serialized_size
};

static rosidl_message_type_support_t _RobotMove_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RobotMove_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace robo_miner_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_robo_miner_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<robo_miner_interfaces::srv::RobotMove_Request>()
{
  return &robo_miner_interfaces::srv::typesupport_fastrtps_cpp::_RobotMove_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robo_miner_interfaces, srv, RobotMove_Request)() {
  return &robo_miner_interfaces::srv::typesupport_fastrtps_cpp::_RobotMove_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace robo_miner_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const robo_miner_interfaces::msg::RobotPositionResponse &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  robo_miner_interfaces::msg::RobotPositionResponse &);
size_t get_serialized_size(
  const robo_miner_interfaces::msg::RobotPositionResponse &,
  size_t current_alignment);
size_t
max_serialized_size_RobotPositionResponse(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace robo_miner_interfaces


namespace robo_miner_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_miner_interfaces
cdr_serialize(
  const robo_miner_interfaces::srv::RobotMove_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: robot_position_response
  robo_miner_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.robot_position_response,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_miner_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robo_miner_interfaces::srv::RobotMove_Response & ros_message)
{
  // Member: robot_position_response
  robo_miner_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.robot_position_response);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_miner_interfaces
get_serialized_size(
  const robo_miner_interfaces::srv::RobotMove_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: robot_position_response

  current_alignment +=
    robo_miner_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.robot_position_response, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_miner_interfaces
max_serialized_size_RobotMove_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: robot_position_response
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        robo_miner_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_RobotPositionResponse(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _RobotMove_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const robo_miner_interfaces::srv::RobotMove_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RobotMove_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robo_miner_interfaces::srv::RobotMove_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RobotMove_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robo_miner_interfaces::srv::RobotMove_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RobotMove_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RobotMove_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _RobotMove_Response__callbacks = {
  "robo_miner_interfaces::srv",
  "RobotMove_Response",
  _RobotMove_Response__cdr_serialize,
  _RobotMove_Response__cdr_deserialize,
  _RobotMove_Response__get_serialized_size,
  _RobotMove_Response__max_serialized_size
};

static rosidl_message_type_support_t _RobotMove_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RobotMove_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace robo_miner_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_robo_miner_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<robo_miner_interfaces::srv::RobotMove_Response>()
{
  return &robo_miner_interfaces::srv::typesupport_fastrtps_cpp::_RobotMove_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robo_miner_interfaces, srv, RobotMove_Response)() {
  return &robo_miner_interfaces::srv::typesupport_fastrtps_cpp::_RobotMove_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace robo_miner_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _RobotMove__callbacks = {
  "robo_miner_interfaces::srv",
  "RobotMove",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robo_miner_interfaces, srv, RobotMove_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robo_miner_interfaces, srv, RobotMove_Response)(),
};

static rosidl_service_type_support_t _RobotMove__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RobotMove__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace robo_miner_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_robo_miner_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<robo_miner_interfaces::srv::RobotMove>()
{
  return &robo_miner_interfaces::srv::typesupport_fastrtps_cpp::_RobotMove__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robo_miner_interfaces, srv, RobotMove)() {
  return &robo_miner_interfaces::srv::typesupport_fastrtps_cpp::_RobotMove__handle;
}

#ifdef __cplusplus
}
#endif
