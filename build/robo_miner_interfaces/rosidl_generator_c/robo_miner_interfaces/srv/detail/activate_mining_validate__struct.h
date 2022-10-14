// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robo_miner_interfaces:srv/ActivateMiningValidate.idl
// generated code does not contain a copyright notice

#ifndef ROBO_MINER_INTERFACES__SRV__DETAIL__ACTIVATE_MINING_VALIDATE__STRUCT_H_
#define ROBO_MINER_INTERFACES__SRV__DETAIL__ACTIVATE_MINING_VALIDATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/ActivateMiningValidate in the package robo_miner_interfaces.
typedef struct robo_miner_interfaces__srv__ActivateMiningValidate_Request
{
  uint8_t structure_needs_at_least_one_member;
} robo_miner_interfaces__srv__ActivateMiningValidate_Request;

// Struct for a sequence of robo_miner_interfaces__srv__ActivateMiningValidate_Request.
typedef struct robo_miner_interfaces__srv__ActivateMiningValidate_Request__Sequence
{
  robo_miner_interfaces__srv__ActivateMiningValidate_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_miner_interfaces__srv__ActivateMiningValidate_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_reason'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/ActivateMiningValidate in the package robo_miner_interfaces.
typedef struct robo_miner_interfaces__srv__ActivateMiningValidate_Response
{
  bool success;
  rosidl_runtime_c__String error_reason;
} robo_miner_interfaces__srv__ActivateMiningValidate_Response;

// Struct for a sequence of robo_miner_interfaces__srv__ActivateMiningValidate_Response.
typedef struct robo_miner_interfaces__srv__ActivateMiningValidate_Response__Sequence
{
  robo_miner_interfaces__srv__ActivateMiningValidate_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_miner_interfaces__srv__ActivateMiningValidate_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBO_MINER_INTERFACES__SRV__DETAIL__ACTIVATE_MINING_VALIDATE__STRUCT_H_
