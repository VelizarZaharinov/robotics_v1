// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robo_miner_interfaces:msg/FieldPoint.idl
// generated code does not contain a copyright notice
#include "robo_miner_interfaces/msg/detail/field_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
robo_miner_interfaces__msg__FieldPoint__init(robo_miner_interfaces__msg__FieldPoint * msg)
{
  if (!msg) {
    return false;
  }
  // row
  // col
  return true;
}

void
robo_miner_interfaces__msg__FieldPoint__fini(robo_miner_interfaces__msg__FieldPoint * msg)
{
  if (!msg) {
    return;
  }
  // row
  // col
}

robo_miner_interfaces__msg__FieldPoint *
robo_miner_interfaces__msg__FieldPoint__create()
{
  robo_miner_interfaces__msg__FieldPoint * msg = (robo_miner_interfaces__msg__FieldPoint *)malloc(sizeof(robo_miner_interfaces__msg__FieldPoint));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robo_miner_interfaces__msg__FieldPoint));
  bool success = robo_miner_interfaces__msg__FieldPoint__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robo_miner_interfaces__msg__FieldPoint__destroy(robo_miner_interfaces__msg__FieldPoint * msg)
{
  if (msg) {
    robo_miner_interfaces__msg__FieldPoint__fini(msg);
  }
  free(msg);
}


bool
robo_miner_interfaces__msg__FieldPoint__Sequence__init(robo_miner_interfaces__msg__FieldPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robo_miner_interfaces__msg__FieldPoint * data = NULL;
  if (size) {
    data = (robo_miner_interfaces__msg__FieldPoint *)calloc(size, sizeof(robo_miner_interfaces__msg__FieldPoint));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robo_miner_interfaces__msg__FieldPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robo_miner_interfaces__msg__FieldPoint__fini(&data[i - 1]);
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
robo_miner_interfaces__msg__FieldPoint__Sequence__fini(robo_miner_interfaces__msg__FieldPoint__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robo_miner_interfaces__msg__FieldPoint__fini(&array->data[i]);
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

robo_miner_interfaces__msg__FieldPoint__Sequence *
robo_miner_interfaces__msg__FieldPoint__Sequence__create(size_t size)
{
  robo_miner_interfaces__msg__FieldPoint__Sequence * array = (robo_miner_interfaces__msg__FieldPoint__Sequence *)malloc(sizeof(robo_miner_interfaces__msg__FieldPoint__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robo_miner_interfaces__msg__FieldPoint__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robo_miner_interfaces__msg__FieldPoint__Sequence__destroy(robo_miner_interfaces__msg__FieldPoint__Sequence * array)
{
  if (array) {
    robo_miner_interfaces__msg__FieldPoint__Sequence__fini(array);
  }
  free(array);
}
