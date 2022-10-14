// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robo_cleaner_interfaces:msg/BatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef ROBO_CLEANER_INTERFACES__MSG__DETAIL__BATTERY_STATUS__STRUCT_H_
#define ROBO_CLEANER_INTERFACES__MSG__DETAIL__BATTERY_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/BatteryStatus in the package robo_cleaner_interfaces.
typedef struct robo_cleaner_interfaces__msg__BatteryStatus
{
  int32_t max_moves_on_full_energy;
  int32_t moves_left;
} robo_cleaner_interfaces__msg__BatteryStatus;

// Struct for a sequence of robo_cleaner_interfaces__msg__BatteryStatus.
typedef struct robo_cleaner_interfaces__msg__BatteryStatus__Sequence
{
  robo_cleaner_interfaces__msg__BatteryStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_cleaner_interfaces__msg__BatteryStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBO_CLEANER_INTERFACES__MSG__DETAIL__BATTERY_STATUS__STRUCT_H_
