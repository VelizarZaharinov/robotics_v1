// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from urscript_interfaces:srv/UrScript.idl
// generated code does not contain a copyright notice
#include "urscript_interfaces/srv/detail/ur_script__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/string_functions.h"

bool
urscript_interfaces__srv__UrScript_Request__init(urscript_interfaces__srv__UrScript_Request * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__init(&msg->data)) {
    urscript_interfaces__srv__UrScript_Request__fini(msg);
    return false;
  }
  return true;
}

void
urscript_interfaces__srv__UrScript_Request__fini(urscript_interfaces__srv__UrScript_Request * msg)
{
  if (!msg) {
    return;
  }
  // data
  rosidl_runtime_c__String__fini(&msg->data);
}

urscript_interfaces__srv__UrScript_Request *
urscript_interfaces__srv__UrScript_Request__create()
{
  urscript_interfaces__srv__UrScript_Request * msg = (urscript_interfaces__srv__UrScript_Request *)malloc(sizeof(urscript_interfaces__srv__UrScript_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(urscript_interfaces__srv__UrScript_Request));
  bool success = urscript_interfaces__srv__UrScript_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
urscript_interfaces__srv__UrScript_Request__destroy(urscript_interfaces__srv__UrScript_Request * msg)
{
  if (msg) {
    urscript_interfaces__srv__UrScript_Request__fini(msg);
  }
  free(msg);
}


bool
urscript_interfaces__srv__UrScript_Request__Sequence__init(urscript_interfaces__srv__UrScript_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  urscript_interfaces__srv__UrScript_Request * data = NULL;
  if (size) {
    data = (urscript_interfaces__srv__UrScript_Request *)calloc(size, sizeof(urscript_interfaces__srv__UrScript_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = urscript_interfaces__srv__UrScript_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        urscript_interfaces__srv__UrScript_Request__fini(&data[i - 1]);
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
urscript_interfaces__srv__UrScript_Request__Sequence__fini(urscript_interfaces__srv__UrScript_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      urscript_interfaces__srv__UrScript_Request__fini(&array->data[i]);
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

urscript_interfaces__srv__UrScript_Request__Sequence *
urscript_interfaces__srv__UrScript_Request__Sequence__create(size_t size)
{
  urscript_interfaces__srv__UrScript_Request__Sequence * array = (urscript_interfaces__srv__UrScript_Request__Sequence *)malloc(sizeof(urscript_interfaces__srv__UrScript_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = urscript_interfaces__srv__UrScript_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
urscript_interfaces__srv__UrScript_Request__Sequence__destroy(urscript_interfaces__srv__UrScript_Request__Sequence * array)
{
  if (array) {
    urscript_interfaces__srv__UrScript_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `error_reason`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
urscript_interfaces__srv__UrScript_Response__init(urscript_interfaces__srv__UrScript_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // error_reason
  if (!rosidl_runtime_c__String__init(&msg->error_reason)) {
    urscript_interfaces__srv__UrScript_Response__fini(msg);
    return false;
  }
  return true;
}

void
urscript_interfaces__srv__UrScript_Response__fini(urscript_interfaces__srv__UrScript_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // error_reason
  rosidl_runtime_c__String__fini(&msg->error_reason);
}

urscript_interfaces__srv__UrScript_Response *
urscript_interfaces__srv__UrScript_Response__create()
{
  urscript_interfaces__srv__UrScript_Response * msg = (urscript_interfaces__srv__UrScript_Response *)malloc(sizeof(urscript_interfaces__srv__UrScript_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(urscript_interfaces__srv__UrScript_Response));
  bool success = urscript_interfaces__srv__UrScript_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
urscript_interfaces__srv__UrScript_Response__destroy(urscript_interfaces__srv__UrScript_Response * msg)
{
  if (msg) {
    urscript_interfaces__srv__UrScript_Response__fini(msg);
  }
  free(msg);
}


bool
urscript_interfaces__srv__UrScript_Response__Sequence__init(urscript_interfaces__srv__UrScript_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  urscript_interfaces__srv__UrScript_Response * data = NULL;
  if (size) {
    data = (urscript_interfaces__srv__UrScript_Response *)calloc(size, sizeof(urscript_interfaces__srv__UrScript_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = urscript_interfaces__srv__UrScript_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        urscript_interfaces__srv__UrScript_Response__fini(&data[i - 1]);
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
urscript_interfaces__srv__UrScript_Response__Sequence__fini(urscript_interfaces__srv__UrScript_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      urscript_interfaces__srv__UrScript_Response__fini(&array->data[i]);
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

urscript_interfaces__srv__UrScript_Response__Sequence *
urscript_interfaces__srv__UrScript_Response__Sequence__create(size_t size)
{
  urscript_interfaces__srv__UrScript_Response__Sequence * array = (urscript_interfaces__srv__UrScript_Response__Sequence *)malloc(sizeof(urscript_interfaces__srv__UrScript_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = urscript_interfaces__srv__UrScript_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
urscript_interfaces__srv__UrScript_Response__Sequence__destroy(urscript_interfaces__srv__UrScript_Response__Sequence * array)
{
  if (array) {
    urscript_interfaces__srv__UrScript_Response__Sequence__fini(array);
  }
  free(array);
}
