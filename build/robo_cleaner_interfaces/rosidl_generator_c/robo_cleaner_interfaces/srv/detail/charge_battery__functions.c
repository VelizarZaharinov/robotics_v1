// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robo_cleaner_interfaces:srv/ChargeBattery.idl
// generated code does not contain a copyright notice
#include "robo_cleaner_interfaces/srv/detail/charge_battery__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
robo_cleaner_interfaces__srv__ChargeBattery_Request__init(robo_cleaner_interfaces__srv__ChargeBattery_Request * msg)
{
  if (!msg) {
    return false;
  }
  // charge_turns
  return true;
}

void
robo_cleaner_interfaces__srv__ChargeBattery_Request__fini(robo_cleaner_interfaces__srv__ChargeBattery_Request * msg)
{
  if (!msg) {
    return;
  }
  // charge_turns
}

robo_cleaner_interfaces__srv__ChargeBattery_Request *
robo_cleaner_interfaces__srv__ChargeBattery_Request__create()
{
  robo_cleaner_interfaces__srv__ChargeBattery_Request * msg = (robo_cleaner_interfaces__srv__ChargeBattery_Request *)malloc(sizeof(robo_cleaner_interfaces__srv__ChargeBattery_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robo_cleaner_interfaces__srv__ChargeBattery_Request));
  bool success = robo_cleaner_interfaces__srv__ChargeBattery_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robo_cleaner_interfaces__srv__ChargeBattery_Request__destroy(robo_cleaner_interfaces__srv__ChargeBattery_Request * msg)
{
  if (msg) {
    robo_cleaner_interfaces__srv__ChargeBattery_Request__fini(msg);
  }
  free(msg);
}


bool
robo_cleaner_interfaces__srv__ChargeBattery_Request__Sequence__init(robo_cleaner_interfaces__srv__ChargeBattery_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robo_cleaner_interfaces__srv__ChargeBattery_Request * data = NULL;
  if (size) {
    data = (robo_cleaner_interfaces__srv__ChargeBattery_Request *)calloc(size, sizeof(robo_cleaner_interfaces__srv__ChargeBattery_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robo_cleaner_interfaces__srv__ChargeBattery_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robo_cleaner_interfaces__srv__ChargeBattery_Request__fini(&data[i - 1]);
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
robo_cleaner_interfaces__srv__ChargeBattery_Request__Sequence__fini(robo_cleaner_interfaces__srv__ChargeBattery_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robo_cleaner_interfaces__srv__ChargeBattery_Request__fini(&array->data[i]);
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

robo_cleaner_interfaces__srv__ChargeBattery_Request__Sequence *
robo_cleaner_interfaces__srv__ChargeBattery_Request__Sequence__create(size_t size)
{
  robo_cleaner_interfaces__srv__ChargeBattery_Request__Sequence * array = (robo_cleaner_interfaces__srv__ChargeBattery_Request__Sequence *)malloc(sizeof(robo_cleaner_interfaces__srv__ChargeBattery_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robo_cleaner_interfaces__srv__ChargeBattery_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robo_cleaner_interfaces__srv__ChargeBattery_Request__Sequence__destroy(robo_cleaner_interfaces__srv__ChargeBattery_Request__Sequence * array)
{
  if (array) {
    robo_cleaner_interfaces__srv__ChargeBattery_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `error_reason`
#include "rosidl_runtime_c/string_functions.h"
// Member `battery_status`
#include "robo_cleaner_interfaces/msg/detail/battery_status__functions.h"

bool
robo_cleaner_interfaces__srv__ChargeBattery_Response__init(robo_cleaner_interfaces__srv__ChargeBattery_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // error_reason
  if (!rosidl_runtime_c__String__init(&msg->error_reason)) {
    robo_cleaner_interfaces__srv__ChargeBattery_Response__fini(msg);
    return false;
  }
  // battery_status
  if (!robo_cleaner_interfaces__msg__BatteryStatus__init(&msg->battery_status)) {
    robo_cleaner_interfaces__srv__ChargeBattery_Response__fini(msg);
    return false;
  }
  // turns_spend_charging
  return true;
}

void
robo_cleaner_interfaces__srv__ChargeBattery_Response__fini(robo_cleaner_interfaces__srv__ChargeBattery_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // error_reason
  rosidl_runtime_c__String__fini(&msg->error_reason);
  // battery_status
  robo_cleaner_interfaces__msg__BatteryStatus__fini(&msg->battery_status);
  // turns_spend_charging
}

robo_cleaner_interfaces__srv__ChargeBattery_Response *
robo_cleaner_interfaces__srv__ChargeBattery_Response__create()
{
  robo_cleaner_interfaces__srv__ChargeBattery_Response * msg = (robo_cleaner_interfaces__srv__ChargeBattery_Response *)malloc(sizeof(robo_cleaner_interfaces__srv__ChargeBattery_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robo_cleaner_interfaces__srv__ChargeBattery_Response));
  bool success = robo_cleaner_interfaces__srv__ChargeBattery_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robo_cleaner_interfaces__srv__ChargeBattery_Response__destroy(robo_cleaner_interfaces__srv__ChargeBattery_Response * msg)
{
  if (msg) {
    robo_cleaner_interfaces__srv__ChargeBattery_Response__fini(msg);
  }
  free(msg);
}


bool
robo_cleaner_interfaces__srv__ChargeBattery_Response__Sequence__init(robo_cleaner_interfaces__srv__ChargeBattery_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robo_cleaner_interfaces__srv__ChargeBattery_Response * data = NULL;
  if (size) {
    data = (robo_cleaner_interfaces__srv__ChargeBattery_Response *)calloc(size, sizeof(robo_cleaner_interfaces__srv__ChargeBattery_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robo_cleaner_interfaces__srv__ChargeBattery_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robo_cleaner_interfaces__srv__ChargeBattery_Response__fini(&data[i - 1]);
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
robo_cleaner_interfaces__srv__ChargeBattery_Response__Sequence__fini(robo_cleaner_interfaces__srv__ChargeBattery_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robo_cleaner_interfaces__srv__ChargeBattery_Response__fini(&array->data[i]);
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

robo_cleaner_interfaces__srv__ChargeBattery_Response__Sequence *
robo_cleaner_interfaces__srv__ChargeBattery_Response__Sequence__create(size_t size)
{
  robo_cleaner_interfaces__srv__ChargeBattery_Response__Sequence * array = (robo_cleaner_interfaces__srv__ChargeBattery_Response__Sequence *)malloc(sizeof(robo_cleaner_interfaces__srv__ChargeBattery_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robo_cleaner_interfaces__srv__ChargeBattery_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robo_cleaner_interfaces__srv__ChargeBattery_Response__Sequence__destroy(robo_cleaner_interfaces__srv__ChargeBattery_Response__Sequence * array)
{
  if (array) {
    robo_cleaner_interfaces__srv__ChargeBattery_Response__Sequence__fini(array);
  }
  free(array);
}
