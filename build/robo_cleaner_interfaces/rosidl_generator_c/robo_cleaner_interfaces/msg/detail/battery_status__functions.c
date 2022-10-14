// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robo_cleaner_interfaces:msg/BatteryStatus.idl
// generated code does not contain a copyright notice
#include "robo_cleaner_interfaces/msg/detail/battery_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
robo_cleaner_interfaces__msg__BatteryStatus__init(robo_cleaner_interfaces__msg__BatteryStatus * msg)
{
  if (!msg) {
    return false;
  }
  // max_moves_on_full_energy
  // moves_left
  return true;
}

void
robo_cleaner_interfaces__msg__BatteryStatus__fini(robo_cleaner_interfaces__msg__BatteryStatus * msg)
{
  if (!msg) {
    return;
  }
  // max_moves_on_full_energy
  // moves_left
}

robo_cleaner_interfaces__msg__BatteryStatus *
robo_cleaner_interfaces__msg__BatteryStatus__create()
{
  robo_cleaner_interfaces__msg__BatteryStatus * msg = (robo_cleaner_interfaces__msg__BatteryStatus *)malloc(sizeof(robo_cleaner_interfaces__msg__BatteryStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robo_cleaner_interfaces__msg__BatteryStatus));
  bool success = robo_cleaner_interfaces__msg__BatteryStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robo_cleaner_interfaces__msg__BatteryStatus__destroy(robo_cleaner_interfaces__msg__BatteryStatus * msg)
{
  if (msg) {
    robo_cleaner_interfaces__msg__BatteryStatus__fini(msg);
  }
  free(msg);
}


bool
robo_cleaner_interfaces__msg__BatteryStatus__Sequence__init(robo_cleaner_interfaces__msg__BatteryStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robo_cleaner_interfaces__msg__BatteryStatus * data = NULL;
  if (size) {
    data = (robo_cleaner_interfaces__msg__BatteryStatus *)calloc(size, sizeof(robo_cleaner_interfaces__msg__BatteryStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robo_cleaner_interfaces__msg__BatteryStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robo_cleaner_interfaces__msg__BatteryStatus__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robo_cleaner_interfaces__msg__BatteryStatus__Sequence__fini(robo_cleaner_interfaces__msg__BatteryStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robo_cleaner_interfaces__msg__BatteryStatus__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robo_cleaner_interfaces__msg__BatteryStatus__Sequence *
robo_cleaner_interfaces__msg__BatteryStatus__Sequence__create(size_t size)
{
  robo_cleaner_interfaces__msg__BatteryStatus__Sequence * array = (robo_cleaner_interfaces__msg__BatteryStatus__Sequence *)malloc(sizeof(robo_cleaner_interfaces__msg__BatteryStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robo_cleaner_interfaces__msg__BatteryStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robo_cleaner_interfaces__msg__BatteryStatus__Sequence__destroy(robo_cleaner_interfaces__msg__BatteryStatus__Sequence * array)
{
  if (array) {
    robo_cleaner_interfaces__msg__BatteryStatus__Sequence__fini(array);
  }
  free(array);
}
