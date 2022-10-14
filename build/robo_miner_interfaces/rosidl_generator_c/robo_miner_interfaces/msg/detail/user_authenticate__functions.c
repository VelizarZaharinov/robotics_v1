// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robo_miner_interfaces:msg/UserAuthenticate.idl
// generated code does not contain a copyright notice
#include "robo_miner_interfaces/msg/detail/user_authenticate__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `user`
// Member `repository`
// Member `commit_sha`
#include "rosidl_runtime_c/string_functions.h"

bool
robo_miner_interfaces__msg__UserAuthenticate__init(robo_miner_interfaces__msg__UserAuthenticate * msg)
{
  if (!msg) {
    return false;
  }
  // user
  if (!rosidl_runtime_c__String__init(&msg->user)) {
    robo_miner_interfaces__msg__UserAuthenticate__fini(msg);
    return false;
  }
  // repository
  if (!rosidl_runtime_c__String__init(&msg->repository)) {
    robo_miner_interfaces__msg__UserAuthenticate__fini(msg);
    return false;
  }
  // commit_sha
  if (!rosidl_runtime_c__String__init(&msg->commit_sha)) {
    robo_miner_interfaces__msg__UserAuthenticate__fini(msg);
    return false;
  }
  return true;
}

void
robo_miner_interfaces__msg__UserAuthenticate__fini(robo_miner_interfaces__msg__UserAuthenticate * msg)
{
  if (!msg) {
    return;
  }
  // user
  rosidl_runtime_c__String__fini(&msg->user);
  // repository
  rosidl_runtime_c__String__fini(&msg->repository);
  // commit_sha
  rosidl_runtime_c__String__fini(&msg->commit_sha);
}

robo_miner_interfaces__msg__UserAuthenticate *
robo_miner_interfaces__msg__UserAuthenticate__create()
{
  robo_miner_interfaces__msg__UserAuthenticate * msg = (robo_miner_interfaces__msg__UserAuthenticate *)malloc(sizeof(robo_miner_interfaces__msg__UserAuthenticate));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robo_miner_interfaces__msg__UserAuthenticate));
  bool success = robo_miner_interfaces__msg__UserAuthenticate__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robo_miner_interfaces__msg__UserAuthenticate__destroy(robo_miner_interfaces__msg__UserAuthenticate * msg)
{
  if (msg) {
    robo_miner_interfaces__msg__UserAuthenticate__fini(msg);
  }
  free(msg);
}


bool
robo_miner_interfaces__msg__UserAuthenticate__Sequence__init(robo_miner_interfaces__msg__UserAuthenticate__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robo_miner_interfaces__msg__UserAuthenticate * data = NULL;
  if (size) {
    data = (robo_miner_interfaces__msg__UserAuthenticate *)calloc(size, sizeof(robo_miner_interfaces__msg__UserAuthenticate));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robo_miner_interfaces__msg__UserAuthenticate__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robo_miner_interfaces__msg__UserAuthenticate__fini(&data[i - 1]);
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
robo_miner_interfaces__msg__UserAuthenticate__Sequence__fini(robo_miner_interfaces__msg__UserAuthenticate__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robo_miner_interfaces__msg__UserAuthenticate__fini(&array->data[i]);
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

robo_miner_interfaces__msg__UserAuthenticate__Sequence *
robo_miner_interfaces__msg__UserAuthenticate__Sequence__create(size_t size)
{
  robo_miner_interfaces__msg__UserAuthenticate__Sequence * array = (robo_miner_interfaces__msg__UserAuthenticate__Sequence *)malloc(sizeof(robo_miner_interfaces__msg__UserAuthenticate__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robo_miner_interfaces__msg__UserAuthenticate__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robo_miner_interfaces__msg__UserAuthenticate__Sequence__destroy(robo_miner_interfaces__msg__UserAuthenticate__Sequence * array)
{
  if (array) {
    robo_miner_interfaces__msg__UserAuthenticate__Sequence__fini(array);
  }
  free(array);
}
