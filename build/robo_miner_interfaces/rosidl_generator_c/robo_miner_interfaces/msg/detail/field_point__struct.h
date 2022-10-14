// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robo_miner_interfaces:msg/FieldPoint.idl
// generated code does not contain a copyright notice

#ifndef ROBO_MINER_INTERFACES__MSG__DETAIL__FIELD_POINT__STRUCT_H_
#define ROBO_MINER_INTERFACES__MSG__DETAIL__FIELD_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/FieldPoint in the package robo_miner_interfaces.
typedef struct robo_miner_interfaces__msg__FieldPoint
{
  int32_t row;
  int32_t col;
} robo_miner_interfaces__msg__FieldPoint;

// Struct for a sequence of robo_miner_interfaces__msg__FieldPoint.
typedef struct robo_miner_interfaces__msg__FieldPoint__Sequence
{
  robo_miner_interfaces__msg__FieldPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_miner_interfaces__msg__FieldPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBO_MINER_INTERFACES__MSG__DETAIL__FIELD_POINT__STRUCT_H_
