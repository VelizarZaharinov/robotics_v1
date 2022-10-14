// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robo_collector_interfaces:msg/RobotMoveType.idl
// generated code does not contain a copyright notice
#include "robo_collector_interfaces/msg/detail/robot_move_type__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
robo_collector_interfaces__msg__RobotMoveType__init(robo_collector_interfaces__msg__RobotMoveType * msg)
{
  if (!msg) {
    return false;
  }
  // move_type
  return true;
}

void
robo_collector_interfaces__msg__RobotMoveType__fini(robo_collector_interfaces__msg__RobotMoveType * msg)
{
  if (!msg) {
    return;
  }
  // move_type
}

robo_collector_interfaces__msg__RobotMoveType *
robo_collector_interfaces__msg__RobotMoveType__create()
{
  robo_collector_interfaces__msg__RobotMoveType * msg = (robo_collector_interfaces__msg__RobotMoveType *)malloc(sizeof(robo_collector_interfaces__msg__RobotMoveType));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robo_collector_interfaces__msg__RobotMoveType));
  bool success = robo_collector_interfaces__msg__RobotMoveType__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robo_collector_interfaces__msg__RobotMoveType__destroy(robo_collector_interfaces__msg__RobotMoveType * msg)
{
  if (msg) {
    robo_collector_interfaces__msg__RobotMoveType__fini(msg);
  }
  free(msg);
}


bool
robo_collector_interfaces__msg__RobotMoveType__Sequence__init(robo_collector_interfaces__msg__RobotMoveType__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robo_collector_interfaces__msg__RobotMoveType * data = NULL;
  if (size) {
    data = (robo_collector_interfaces__msg__RobotMoveType *)calloc(size, sizeof(robo_collector_interfaces__msg__RobotMoveType));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robo_collector_interfaces__msg__RobotMoveType__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robo_collector_interfaces__msg__RobotMoveType__fini(&data[i - 1]);
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
robo_collector_interfaces__msg__RobotMoveType__Sequence__fini(robo_collector_interfaces__msg__RobotMoveType__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robo_collector_interfaces__msg__RobotMoveType__fini(&array->data[i]);
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

robo_collector_interfaces__msg__RobotMoveType__Sequence *
robo_collector_interfaces__msg__RobotMoveType__Sequence__create(size_t size)
{
  robo_collector_interfaces__msg__RobotMoveType__Sequence * array = (robo_collector_interfaces__msg__RobotMoveType__Sequence *)malloc(sizeof(robo_collector_interfaces__msg__RobotMoveType__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robo_collector_interfaces__msg__RobotMoveType__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robo_collector_interfaces__msg__RobotMoveType__Sequence__destroy(robo_collector_interfaces__msg__RobotMoveType__Sequence * array)
{
  if (array) {
    robo_collector_interfaces__msg__RobotMoveType__Sequence__fini(array);
  }
  free(array);
}
