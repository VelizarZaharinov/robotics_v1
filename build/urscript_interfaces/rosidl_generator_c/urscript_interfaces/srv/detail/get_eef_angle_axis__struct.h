// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from urscript_interfaces:srv/GetEefAngleAxis.idl
// generated code does not contain a copyright notice

#ifndef URSCRIPT_INTERFACES__SRV__DETAIL__GET_EEF_ANGLE_AXIS__STRUCT_H_
#define URSCRIPT_INTERFACES__SRV__DETAIL__GET_EEF_ANGLE_AXIS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GetEefAngleAxis in the package urscript_interfaces.
typedef struct urscript_interfaces__srv__GetEefAngleAxis_Request
{
  uint8_t structure_needs_at_least_one_member;
} urscript_interfaces__srv__GetEefAngleAxis_Request;

// Struct for a sequence of urscript_interfaces__srv__GetEefAngleAxis_Request.
typedef struct urscript_interfaces__srv__GetEefAngleAxis_Request__Sequence
{
  urscript_interfaces__srv__GetEefAngleAxis_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} urscript_interfaces__srv__GetEefAngleAxis_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_reason'
#include "rosidl_runtime_c/string.h"
// Member 'angle_axis'
#include "geometry_msgs/msg/detail/vector3__struct.h"

// Struct defined in srv/GetEefAngleAxis in the package urscript_interfaces.
typedef struct urscript_interfaces__srv__GetEefAngleAxis_Response
{
  bool success;
  rosidl_runtime_c__String error_reason;
  geometry_msgs__msg__Vector3 angle_axis;
} urscript_interfaces__srv__GetEefAngleAxis_Response;

// Struct for a sequence of urscript_interfaces__srv__GetEefAngleAxis_Response.
typedef struct urscript_interfaces__srv__GetEefAngleAxis_Response__Sequence
{
  urscript_interfaces__srv__GetEefAngleAxis_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} urscript_interfaces__srv__GetEefAngleAxis_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // URSCRIPT_INTERFACES__SRV__DETAIL__GET_EEF_ANGLE_AXIS__STRUCT_H_
