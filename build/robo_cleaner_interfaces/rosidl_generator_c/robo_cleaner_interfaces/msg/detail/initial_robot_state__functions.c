// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robo_cleaner_interfaces:msg/InitialRobotState.idl
// generated code does not contain a copyright notice
#include "robo_cleaner_interfaces/msg/detail/initial_robot_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `battery_status`
#include "robo_cleaner_interfaces/msg/detail/battery_status__functions.h"

bool
robo_cleaner_interfaces__msg__InitialRobotState__init(robo_cleaner_interfaces__msg__InitialRobotState * msg)
{
  if (!msg) {
    return false;
  }
  // battery_status
  if (!robo_cleaner_interfaces__msg__BatteryStatus__init(&msg->battery_status)) {
    robo_cleaner_interfaces__msg__InitialRobotState__fini(msg);
    return false;
  }
  // robot_tile
  // robot_dir
  return true;
}

void
robo_cleaner_interfaces__msg__InitialRobotState__fini(robo_cleaner_interfaces__msg__InitialRobotState * msg)
{
  if (!msg) {
    return;
  }
  // battery_status
  robo_cleaner_interfaces__msg__BatteryStatus__fini(&msg->battery_status);
  // robot_tile
  // robot_dir
}

robo_cleaner_interfaces__msg__InitialRobotState *
robo_cleaner_interfaces__msg__InitialRobotState__create()
{
  robo_cleaner_interfaces__msg__InitialRobotState * msg = (robo_cleaner_interfaces__msg__InitialRobotState *)malloc(sizeof(robo_cleaner_interfaces__msg__InitialRobotState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robo_cleaner_interfaces__msg__InitialRobotState));
  bool success = robo_cleaner_interfaces__msg__InitialRobotState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robo_cleaner_interfaces__msg__InitialRobotState__destroy(robo_cleaner_interfaces__msg__InitialRobotState * msg)
{
  if (msg) {
    robo_cleaner_interfaces__msg__InitialRobotState__fini(msg);
  }
  free(msg);
}


bool
robo_cleaner_interfaces__msg__InitialRobotState__Sequence__init(robo_cleaner_interfaces__msg__InitialRobotState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robo_cleaner_interfaces__msg__InitialRobotState * data = NULL;
  if (size) {
    data = (robo_cleaner_interfaces__msg__InitialRobotState *)calloc(size, sizeof(robo_cleaner_interfaces__msg__InitialRobotState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robo_cleaner_interfaces__msg__InitialRobotState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robo_cleaner_interfaces__msg__InitialRobotState__fini(&data[i - 1]);
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
robo_cleaner_interfaces__msg__InitialRobotState__Sequence__fini(robo_cleaner_interfaces__msg__InitialRobotState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robo_cleaner_interfaces__msg__InitialRobotState__fini(&array->data[i]);
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

robo_cleaner_interfaces__msg__InitialRobotState__Sequence *
robo_cleaner_interfaces__msg__InitialRobotState__Sequence__create(size_t size)
{
  robo_cleaner_interfaces__msg__InitialRobotState__Sequence * array = (robo_cleaner_interfaces__msg__InitialRobotState__Sequence *)malloc(sizeof(robo_cleaner_interfaces__msg__InitialRobotState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robo_cleaner_interfaces__msg__InitialRobotState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robo_cleaner_interfaces__msg__InitialRobotState__Sequence__destroy(robo_cleaner_interfaces__msg__InitialRobotState__Sequence * array)
{
  if (array) {
    robo_cleaner_interfaces__msg__InitialRobotState__Sequence__fini(array);
  }
  free(array);
}
