// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robo_cleaner_interfaces:srv/QueryBatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef ROBO_CLEANER_INTERFACES__SRV__DETAIL__QUERY_BATTERY_STATUS__STRUCT_H_
#define ROBO_CLEANER_INTERFACES__SRV__DETAIL__QUERY_BATTERY_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/QueryBatteryStatus in the package robo_cleaner_interfaces.
typedef struct robo_cleaner_interfaces__srv__QueryBatteryStatus_Request
{
  uint8_t structure_needs_at_least_one_member;
} robo_cleaner_interfaces__srv__QueryBatteryStatus_Request;

// Struct for a sequence of robo_cleaner_interfaces__srv__QueryBatteryStatus_Request.
typedef struct robo_cleaner_interfaces__srv__QueryBatteryStatus_Request__Sequence
{
  robo_cleaner_interfaces__srv__QueryBatteryStatus_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_cleaner_interfaces__srv__QueryBatteryStatus_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'battery_status'
#include "robo_cleaner_interfaces/msg/detail/battery_status__struct.h"

// Struct defined in srv/QueryBatteryStatus in the package robo_cleaner_interfaces.
typedef struct robo_cleaner_interfaces__srv__QueryBatteryStatus_Response
{
  robo_cleaner_interfaces__msg__BatteryStatus battery_status;
} robo_cleaner_interfaces__srv__QueryBatteryStatus_Response;

// Struct for a sequence of robo_cleaner_interfaces__srv__QueryBatteryStatus_Response.
typedef struct robo_cleaner_interfaces__srv__QueryBatteryStatus_Response__Sequence
{
  robo_cleaner_interfaces__srv__QueryBatteryStatus_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_cleaner_interfaces__srv__QueryBatteryStatus_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBO_CLEANER_INTERFACES__SRV__DETAIL__QUERY_BATTERY_STATUS__STRUCT_H_
