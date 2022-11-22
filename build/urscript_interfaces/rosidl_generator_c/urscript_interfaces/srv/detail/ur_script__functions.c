// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from urscript_interfaces:srv/UrScript.idl
// generated code does not contain a copyright notice
#include "urscript_interfaces/srv/detail/ur_script__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

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

bool
urscript_interfaces__srv__UrScript_Request__are_equal(const urscript_interfaces__srv__UrScript_Request * lhs, const urscript_interfaces__srv__UrScript_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
urscript_interfaces__srv__UrScript_Request__copy(
  const urscript_interfaces__srv__UrScript_Request * input,
  urscript_interfaces__srv__UrScript_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

urscript_interfaces__srv__UrScript_Request *
urscript_interfaces__srv__UrScript_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  urscript_interfaces__srv__UrScript_Request * msg = (urscript_interfaces__srv__UrScript_Request *)allocator.allocate(sizeof(urscript_interfaces__srv__UrScript_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(urscript_interfaces__srv__UrScript_Request));
  bool success = urscript_interfaces__srv__UrScript_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
urscript_interfaces__srv__UrScript_Request__destroy(urscript_interfaces__srv__UrScript_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    urscript_interfaces__srv__UrScript_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
urscript_interfaces__srv__UrScript_Request__Sequence__init(urscript_interfaces__srv__UrScript_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  urscript_interfaces__srv__UrScript_Request * data = NULL;

  if (size) {
    data = (urscript_interfaces__srv__UrScript_Request *)allocator.zero_allocate(size, sizeof(urscript_interfaces__srv__UrScript_Request), allocator.state);
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
      allocator.deallocate(data, allocator.state);
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
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      urscript_interfaces__srv__UrScript_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
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
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  urscript_interfaces__srv__UrScript_Request__Sequence * array = (urscript_interfaces__srv__UrScript_Request__Sequence *)allocator.allocate(sizeof(urscript_interfaces__srv__UrScript_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = urscript_interfaces__srv__UrScript_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
urscript_interfaces__srv__UrScript_Request__Sequence__destroy(urscript_interfaces__srv__UrScript_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    urscript_interfaces__srv__UrScript_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
urscript_interfaces__srv__UrScript_Request__Sequence__are_equal(const urscript_interfaces__srv__UrScript_Request__Sequence * lhs, const urscript_interfaces__srv__UrScript_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!urscript_interfaces__srv__UrScript_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
urscript_interfaces__srv__UrScript_Request__Sequence__copy(
  const urscript_interfaces__srv__UrScript_Request__Sequence * input,
  urscript_interfaces__srv__UrScript_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(urscript_interfaces__srv__UrScript_Request);
    urscript_interfaces__srv__UrScript_Request * data =
      (urscript_interfaces__srv__UrScript_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!urscript_interfaces__srv__UrScript_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          urscript_interfaces__srv__UrScript_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!urscript_interfaces__srv__UrScript_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
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

bool
urscript_interfaces__srv__UrScript_Response__are_equal(const urscript_interfaces__srv__UrScript_Response * lhs, const urscript_interfaces__srv__UrScript_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // error_reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_reason), &(rhs->error_reason)))
  {
    return false;
  }
  return true;
}

bool
urscript_interfaces__srv__UrScript_Response__copy(
  const urscript_interfaces__srv__UrScript_Response * input,
  urscript_interfaces__srv__UrScript_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // error_reason
  if (!rosidl_runtime_c__String__copy(
      &(input->error_reason), &(output->error_reason)))
  {
    return false;
  }
  return true;
}

urscript_interfaces__srv__UrScript_Response *
urscript_interfaces__srv__UrScript_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  urscript_interfaces__srv__UrScript_Response * msg = (urscript_interfaces__srv__UrScript_Response *)allocator.allocate(sizeof(urscript_interfaces__srv__UrScript_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(urscript_interfaces__srv__UrScript_Response));
  bool success = urscript_interfaces__srv__UrScript_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
urscript_interfaces__srv__UrScript_Response__destroy(urscript_interfaces__srv__UrScript_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    urscript_interfaces__srv__UrScript_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
urscript_interfaces__srv__UrScript_Response__Sequence__init(urscript_interfaces__srv__UrScript_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  urscript_interfaces__srv__UrScript_Response * data = NULL;

  if (size) {
    data = (urscript_interfaces__srv__UrScript_Response *)allocator.zero_allocate(size, sizeof(urscript_interfaces__srv__UrScript_Response), allocator.state);
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
      allocator.deallocate(data, allocator.state);
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
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      urscript_interfaces__srv__UrScript_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
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
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  urscript_interfaces__srv__UrScript_Response__Sequence * array = (urscript_interfaces__srv__UrScript_Response__Sequence *)allocator.allocate(sizeof(urscript_interfaces__srv__UrScript_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = urscript_interfaces__srv__UrScript_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
urscript_interfaces__srv__UrScript_Response__Sequence__destroy(urscript_interfaces__srv__UrScript_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    urscript_interfaces__srv__UrScript_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
urscript_interfaces__srv__UrScript_Response__Sequence__are_equal(const urscript_interfaces__srv__UrScript_Response__Sequence * lhs, const urscript_interfaces__srv__UrScript_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!urscript_interfaces__srv__UrScript_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
urscript_interfaces__srv__UrScript_Response__Sequence__copy(
  const urscript_interfaces__srv__UrScript_Response__Sequence * input,
  urscript_interfaces__srv__UrScript_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(urscript_interfaces__srv__UrScript_Response);
    urscript_interfaces__srv__UrScript_Response * data =
      (urscript_interfaces__srv__UrScript_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!urscript_interfaces__srv__UrScript_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          urscript_interfaces__srv__UrScript_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!urscript_interfaces__srv__UrScript_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
