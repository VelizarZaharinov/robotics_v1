// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robo_collector_interfaces:msg/UserAuthenticate.idl
// generated code does not contain a copyright notice

#ifndef ROBO_COLLECTOR_INTERFACES__MSG__DETAIL__USER_AUTHENTICATE__STRUCT_H_
#define ROBO_COLLECTOR_INTERFACES__MSG__DETAIL__USER_AUTHENTICATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'user'
// Member 'repository'
// Member 'commit_sha'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/UserAuthenticate in the package robo_collector_interfaces.
typedef struct robo_collector_interfaces__msg__UserAuthenticate
{
  rosidl_runtime_c__String user;
  rosidl_runtime_c__String repository;
  rosidl_runtime_c__String commit_sha;
} robo_collector_interfaces__msg__UserAuthenticate;

// Struct for a sequence of robo_collector_interfaces__msg__UserAuthenticate.
typedef struct robo_collector_interfaces__msg__UserAuthenticate__Sequence
{
  robo_collector_interfaces__msg__UserAuthenticate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_collector_interfaces__msg__UserAuthenticate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBO_COLLECTOR_INTERFACES__MSG__DETAIL__USER_AUTHENTICATE__STRUCT_H_
