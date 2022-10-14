// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from urscript_interfaces:srv/UrScript.idl
// generated code does not contain a copyright notice

#ifndef URSCRIPT_INTERFACES__SRV__DETAIL__UR_SCRIPT__STRUCT_H_
#define URSCRIPT_INTERFACES__SRV__DETAIL__UR_SCRIPT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/UrScript in the package urscript_interfaces.
typedef struct urscript_interfaces__srv__UrScript_Request
{
  rosidl_runtime_c__String data;
} urscript_interfaces__srv__UrScript_Request;

// Struct for a sequence of urscript_interfaces__srv__UrScript_Request.
typedef struct urscript_interfaces__srv__UrScript_Request__Sequence
{
  urscript_interfaces__srv__UrScript_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} urscript_interfaces__srv__UrScript_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_reason'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/UrScript in the package urscript_interfaces.
typedef struct urscript_interfaces__srv__UrScript_Response
{
  bool success;
  rosidl_runtime_c__String error_reason;
} urscript_interfaces__srv__UrScript_Response;

// Struct for a sequence of urscript_interfaces__srv__UrScript_Response.
typedef struct urscript_interfaces__srv__UrScript_Response__Sequence
{
  urscript_interfaces__srv__UrScript_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} urscript_interfaces__srv__UrScript_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // URSCRIPT_INTERFACES__SRV__DETAIL__UR_SCRIPT__STRUCT_H_
