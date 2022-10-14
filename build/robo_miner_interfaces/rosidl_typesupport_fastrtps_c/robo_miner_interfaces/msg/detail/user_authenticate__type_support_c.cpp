// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robo_miner_interfaces:msg/UserAuthenticate.idl
// generated code does not contain a copyright notice
#include "robo_miner_interfaces/msg/detail/user_authenticate__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robo_miner_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robo_miner_interfaces/msg/detail/user_authenticate__struct.h"
#include "robo_miner_interfaces/msg/detail/user_authenticate__functions.h"
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

#include "rosidl_runtime_c/string.h"  // commit_sha, repository, user
#include "rosidl_runtime_c/string_functions.h"  // commit_sha, repository, user

// forward declare type support functions


using _UserAuthenticate__ros_msg_type = robo_miner_interfaces__msg__UserAuthenticate;

static bool _UserAuthenticate__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _UserAuthenticate__ros_msg_type * ros_message = static_cast<const _UserAuthenticate__ros_msg_type *>(untyped_ros_message);
  // Field name: user
  {
    const rosidl_runtime_c__String * str = &ros_message->user;
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

  // Field name: repository
  {
    const rosidl_runtime_c__String * str = &ros_message->repository;
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

  // Field name: commit_sha
  {
    const rosidl_runtime_c__String * str = &ros_message->commit_sha;
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

static bool _UserAuthenticate__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _UserAuthenticate__ros_msg_type * ros_message = static_cast<_UserAuthenticate__ros_msg_type *>(untyped_ros_message);
  // Field name: user
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->user.data) {
      rosidl_runtime_c__String__init(&ros_message->user);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->user,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'user'\n");
      return false;
    }
  }

  // Field name: repository
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->repository.data) {
      rosidl_runtime_c__String__init(&ros_message->repository);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->repository,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'repository'\n");
      return false;
    }
  }

  // Field name: commit_sha
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->commit_sha.data) {
      rosidl_runtime_c__String__init(&ros_message->commit_sha);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->commit_sha,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'commit_sha'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_miner_interfaces
size_t get_serialized_size_robo_miner_interfaces__msg__UserAuthenticate(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _UserAuthenticate__ros_msg_type * ros_message = static_cast<const _UserAuthenticate__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name user
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->user.size + 1);
  // field.name repository
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->repository.size + 1);
  // field.name commit_sha
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->commit_sha.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _UserAuthenticate__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robo_miner_interfaces__msg__UserAuthenticate(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_miner_interfaces
size_t max_serialized_size_robo_miner_interfaces__msg__UserAuthenticate(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: user
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: repository
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: commit_sha
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

static size_t _UserAuthenticate__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_robo_miner_interfaces__msg__UserAuthenticate(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_UserAuthenticate = {
  "robo_miner_interfaces::msg",
  "UserAuthenticate",
  _UserAuthenticate__cdr_serialize,
  _UserAuthenticate__cdr_deserialize,
  _UserAuthenticate__get_serialized_size,
  _UserAuthenticate__max_serialized_size
};

static rosidl_message_type_support_t _UserAuthenticate__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_UserAuthenticate,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_miner_interfaces, msg, UserAuthenticate)() {
  return &_UserAuthenticate__type_support;
}

#if defined(__cplusplus)
}
#endif
