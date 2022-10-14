// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robo_cleaner_interfaces:srv/ChargeBattery.idl
// generated code does not contain a copyright notice

#ifndef ROBO_CLEANER_INTERFACES__SRV__DETAIL__CHARGE_BATTERY__STRUCT_H_
#define ROBO_CLEANER_INTERFACES__SRV__DETAIL__CHARGE_BATTERY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CHARGE_UNTIL_FULL'.
enum
{
  robo_cleaner_interfaces__srv__ChargeBattery_Request__CHARGE_UNTIL_FULL = 0l
};

// Struct defined in srv/ChargeBattery in the package robo_cleaner_interfaces.
typedef struct robo_cleaner_interfaces__srv__ChargeBattery_Request
{
  int32_t charge_turns;
} robo_cleaner_interfaces__srv__ChargeBattery_Request;

// Struct for a sequence of robo_cleaner_interfaces__srv__ChargeBattery_Request.
typedef struct robo_cleaner_interfaces__srv__ChargeBattery_Request__Sequence
{
  robo_cleaner_interfaces__srv__ChargeBattery_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_cleaner_interfaces__srv__ChargeBattery_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_reason'
#include "rosidl_runtime_c/string.h"
// Member 'battery_status'
#include "robo_cleaner_interfaces/msg/detail/battery_status__struct.h"

// Struct defined in srv/ChargeBattery in the package robo_cleaner_interfaces.
typedef struct robo_cleaner_interfaces__srv__ChargeBattery_Response
{
  bool success;
  rosidl_runtime_c__String error_reason;
  robo_cleaner_interfaces__msg__BatteryStatus battery_status;
  int32_t turns_spend_charging;
} robo_cleaner_interfaces__srv__ChargeBattery_Response;

// Struct for a sequence of robo_cleaner_interfaces__srv__ChargeBattery_Response.
typedef struct robo_cleaner_interfaces__srv__ChargeBattery_Response__Sequence
{
  robo_cleaner_interfaces__srv__ChargeBattery_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_cleaner_interfaces__srv__ChargeBattery_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBO_CLEANER_INTERFACES__SRV__DETAIL__CHARGE_BATTERY__STRUCT_H_
