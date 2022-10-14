// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robo_miner_interfaces:srv/FieldMapValidate.idl
// generated code does not contain a copyright notice

#ifndef ROBO_MINER_INTERFACES__SRV__DETAIL__FIELD_MAP_VALIDATE__STRUCT_H_
#define ROBO_MINER_INTERFACES__SRV__DETAIL__FIELD_MAP_VALIDATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'field_map'
#include "robo_miner_interfaces/msg/detail/u_int8_multi_array__struct.h"

// Struct defined in srv/FieldMapValidate in the package robo_miner_interfaces.
typedef struct robo_miner_interfaces__srv__FieldMapValidate_Request
{
  robo_miner_interfaces__msg__UInt8MultiArray field_map;
} robo_miner_interfaces__srv__FieldMapValidate_Request;

// Struct for a sequence of robo_miner_interfaces__srv__FieldMapValidate_Request.
typedef struct robo_miner_interfaces__srv__FieldMapValidate_Request__Sequence
{
  robo_miner_interfaces__srv__FieldMapValidate_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_miner_interfaces__srv__FieldMapValidate_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_reason'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/FieldMapValidate in the package robo_miner_interfaces.
typedef struct robo_miner_interfaces__srv__FieldMapValidate_Response
{
  bool success;
  rosidl_runtime_c__String error_reason;
} robo_miner_interfaces__srv__FieldMapValidate_Response;

// Struct for a sequence of robo_miner_interfaces__srv__FieldMapValidate_Response.
typedef struct robo_miner_interfaces__srv__FieldMapValidate_Response__Sequence
{
  robo_miner_interfaces__srv__FieldMapValidate_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_miner_interfaces__srv__FieldMapValidate_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBO_MINER_INTERFACES__SRV__DETAIL__FIELD_MAP_VALIDATE__STRUCT_H_
