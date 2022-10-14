// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robo_miner_interfaces:msg/UInt8MultiArray.idl
// generated code does not contain a copyright notice
#include "robo_miner_interfaces/msg/detail/u_int8_multi_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
robo_miner_interfaces__msg__UInt8MultiArray__init(robo_miner_interfaces__msg__UInt8MultiArray * msg)
{
  if (!msg) {
    return false;
  }
  // rows
  // cols
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    robo_miner_interfaces__msg__UInt8MultiArray__fini(msg);
    return false;
  }
  return true;
}

void
robo_miner_interfaces__msg__UInt8MultiArray__fini(robo_miner_interfaces__msg__UInt8MultiArray * msg)
{
  if (!msg) {
    return;
  }
  // rows
  // cols
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
}

robo_miner_interfaces__msg__UInt8MultiArray *
robo_miner_interfaces__msg__UInt8MultiArray__create()
{
  robo_miner_interfaces__msg__UInt8MultiArray * msg = (robo_miner_interfaces__msg__UInt8MultiArray *)malloc(sizeof(robo_miner_interfaces__msg__UInt8MultiArray));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robo_miner_interfaces__msg__UInt8MultiArray));
  bool success = robo_miner_interfaces__msg__UInt8MultiArray__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robo_miner_interfaces__msg__UInt8MultiArray__destroy(robo_miner_interfaces__msg__UInt8MultiArray * msg)
{
  if (msg) {
    robo_miner_interfaces__msg__UInt8MultiArray__fini(msg);
  }
  free(msg);
}


bool
robo_miner_interfaces__msg__UInt8MultiArray__Sequence__init(robo_miner_interfaces__msg__UInt8MultiArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robo_miner_interfaces__msg__UInt8MultiArray * data = NULL;
  if (size) {
    data = (robo_miner_interfaces__msg__UInt8MultiArray *)calloc(size, sizeof(robo_miner_interfaces__msg__UInt8MultiArray));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robo_miner_interfaces__msg__UInt8MultiArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robo_miner_interfaces__msg__UInt8MultiArray__fini(&data[i - 1]);
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
robo_miner_interfaces__msg__UInt8MultiArray__Sequence__fini(robo_miner_interfaces__msg__UInt8MultiArray__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robo_miner_interfaces__msg__UInt8MultiArray__fini(&array->data[i]);
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

robo_miner_interfaces__msg__UInt8MultiArray__Sequence *
robo_miner_interfaces__msg__UInt8MultiArray__Sequence__create(size_t size)
{
  robo_miner_interfaces__msg__UInt8MultiArray__Sequence * array = (robo_miner_interfaces__msg__UInt8MultiArray__Sequence *)malloc(sizeof(robo_miner_interfaces__msg__UInt8MultiArray__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robo_miner_interfaces__msg__UInt8MultiArray__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robo_miner_interfaces__msg__UInt8MultiArray__Sequence__destroy(robo_miner_interfaces__msg__UInt8MultiArray__Sequence * array)
{
  if (array) {
    robo_miner_interfaces__msg__UInt8MultiArray__Sequence__fini(array);
  }
  free(array);
}
