// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from robo_miner_interfaces:srv/LongestSequenceValidate.idl
// generated code does not contain a copyright notice
#include "robo_miner_interfaces/srv/detail/longest_sequence_validate__rosidl_typesupport_fastrtps_cpp.hpp"
#include "robo_miner_interfaces/srv/detail/longest_sequence_validate__struct.hpp"

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
  const robo_miner_interfaces::msg::FieldPoint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  robo_miner_interfaces::msg::FieldPoint &);
size_t get_serialized_size(
  const robo_miner_interfaces::msg::FieldPoint &,
  size_t current_alignment);
size_t
max_serialized_size_FieldPoint(
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
  const robo_miner_interfaces::srv::LongestSequenceValidate_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: sequence_points
  {
    size_t size = ros_message.sequence_points.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      robo_miner_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.sequence_points[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_miner_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robo_miner_interfaces::srv::LongestSequenceValidate_Request & ros_message)
{
  // Member: sequence_points
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.sequence_points.resize(size);
    for (size_t i = 0; i < size; i++) {
      robo_miner_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.sequence_points[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_miner_interfaces
get_serialized_size(
  const robo_miner_interfaces::srv::LongestSequenceValidate_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: sequence_points
  {
    size_t array_size = ros_message.sequence_points.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        robo_miner_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.sequence_points[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_miner_interfaces
max_serialized_size_LongestSequenceValidate_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: sequence_points
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        robo_miner_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_FieldPoint(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _LongestSequenceValidate_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const robo_miner_interfaces::srv::LongestSequenceValidate_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LongestSequenceValidate_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robo_miner_interfaces::srv::LongestSequenceValidate_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LongestSequenceValidate_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robo_miner_interfaces::srv::LongestSequenceValidate_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LongestSequenceValidate_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_LongestSequenceValidate_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _LongestSequenceValidate_Request__callbacks = {
  "robo_miner_interfaces::srv",
  "LongestSequenceValidate_Request",
  _LongestSequenceValidate_Request__cdr_serialize,
  _LongestSequenceValidate_Request__cdr_deserialize,
  _LongestSequenceValidate_Request__get_serialized_size,
  _LongestSequenceValidate_Request__max_serialized_size
};

static rosidl_message_type_support_t _LongestSequenceValidate_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LongestSequenceValidate_Request__callbacks,
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
get_message_type_support_handle<robo_miner_interfaces::srv::LongestSequenceValidate_Request>()
{
  return &robo_miner_interfaces::srv::typesupport_fastrtps_cpp::_LongestSequenceValidate_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robo_miner_interfaces, srv, LongestSequenceValidate_Request)() {
  return &robo_miner_interfaces::srv::typesupport_fastrtps_cpp::_LongestSequenceValidate_Request__handle;
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

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_miner_interfaces
cdr_serialize(
  const robo_miner_interfaces::srv::LongestSequenceValidate_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: success
  cdr << (ros_message.success ? true : false);
  // Member: error_reason
  cdr << ros_message.error_reason;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_miner_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robo_miner_interfaces::srv::LongestSequenceValidate_Response & ros_message)
{
  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  // Member: error_reason
  cdr >> ros_message.error_reason;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_miner_interfaces
get_serialized_size(
  const robo_miner_interfaces::srv::LongestSequenceValidate_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error_reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.error_reason.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_miner_interfaces
max_serialized_size_LongestSequenceValidate_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: error_reason
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

static bool _LongestSequenceValidate_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const robo_miner_interfaces::srv::LongestSequenceValidate_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LongestSequenceValidate_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robo_miner_interfaces::srv::LongestSequenceValidate_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LongestSequenceValidate_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robo_miner_interfaces::srv::LongestSequenceValidate_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LongestSequenceValidate_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_LongestSequenceValidate_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _LongestSequenceValidate_Response__callbacks = {
  "robo_miner_interfaces::srv",
  "LongestSequenceValidate_Response",
  _LongestSequenceValidate_Response__cdr_serialize,
  _LongestSequenceValidate_Response__cdr_deserialize,
  _LongestSequenceValidate_Response__get_serialized_size,
  _LongestSequenceValidate_Response__max_serialized_size
};

static rosidl_message_type_support_t _LongestSequenceValidate_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LongestSequenceValidate_Response__callbacks,
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
get_message_type_support_handle<robo_miner_interfaces::srv::LongestSequenceValidate_Response>()
{
  return &robo_miner_interfaces::srv::typesupport_fastrtps_cpp::_LongestSequenceValidate_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robo_miner_interfaces, srv, LongestSequenceValidate_Response)() {
  return &robo_miner_interfaces::srv::typesupport_fastrtps_cpp::_LongestSequenceValidate_Response__handle;
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

static service_type_support_callbacks_t _LongestSequenceValidate__callbacks = {
  "robo_miner_interfaces::srv",
  "LongestSequenceValidate",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robo_miner_interfaces, srv, LongestSequenceValidate_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robo_miner_interfaces, srv, LongestSequenceValidate_Response)(),
};

static rosidl_service_type_support_t _LongestSequenceValidate__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LongestSequenceValidate__callbacks,
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
get_service_type_support_handle<robo_miner_interfaces::srv::LongestSequenceValidate>()
{
  return &robo_miner_interfaces::srv::typesupport_fastrtps_cpp::_LongestSequenceValidate__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robo_miner_interfaces, srv, LongestSequenceValidate)() {
  return &robo_miner_interfaces::srv::typesupport_fastrtps_cpp::_LongestSequenceValidate__handle;
}

#ifdef __cplusplus
}
#endif
