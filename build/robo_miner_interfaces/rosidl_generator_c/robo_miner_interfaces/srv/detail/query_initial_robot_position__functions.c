// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robo_miner_interfaces:srv/QueryInitialRobotPosition.idl
// generated code does not contain a copyright notice
#include "robo_miner_interfaces/srv/detail/query_initial_robot_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
robo_miner_interfaces__srv__QueryInitialRobotPosition_Request__init(robo_miner_interfaces__srv__QueryInitialRobotPosition_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
robo_miner_interfaces__srv__QueryInitialRobotPosition_Request__fini(robo_miner_interfaces__srv__QueryInitialRobotPosition_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

robo_miner_interfaces__srv__QueryInitialRobotPosition_Request *
robo_miner_interfaces__srv__QueryInitialRobotPosition_Request__create()
{
  robo_miner_interfaces__srv__QueryInitialRobotPosition_Request * msg = (robo_miner_interfaces__srv__QueryInitialRobotPosition_Request *)malloc(sizeof(robo_miner_interfaces__srv__QueryInitialRobotPosition_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robo_miner_interfaces__srv__QueryInitialRobotPosition_Request));
  bool success = robo_miner_interfaces__srv__QueryInitialRobotPosition_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robo_miner_interfaces__srv__QueryInitialRobotPosition_Request__destroy(robo_miner_interfaces__srv__QueryInitialRobotPosition_Request * msg)
{
  if (msg) {
    robo_miner_interfaces__srv__QueryInitialRobotPosition_Request__fini(msg);
  }
  free(msg);
}


bool
robo_miner_interfaces__srv__QueryInitialRobotPosition_Request__Sequence__init(robo_miner_interfaces__srv__QueryInitialRobotPosition_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robo_miner_interfaces__srv__QueryInitialRobotPosition_Request * data = NULL;
  if (size) {
    data = (robo_miner_interfaces__srv__QueryInitialRobotPosition_Request *)calloc(size, sizeof(robo_miner_interfaces__srv__QueryInitialRobotPosition_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robo_miner_interfaces__srv__QueryInitialRobotPosition_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robo_miner_interfaces__srv__QueryInitialRobotPosition_Request__fini(&data[i - 1]);
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
robo_miner_interfaces__srv__QueryInitialRobotPosition_Request__Sequence__fini(robo_miner_interfaces__srv__QueryInitialRobotPosition_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robo_miner_interfaces__srv__QueryInitialRobotPosition_Request__fini(&array->data[i]);
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

robo_miner_interfaces__srv__QueryInitialRobotPosition_Request__Sequence *
robo_miner_interfaces__srv__QueryInitialRobotPosition_Request__Sequence__create(size_t size)
{
  robo_miner_interfaces__srv__QueryInitialRobotPosition_Request__Sequence * array = (robo_miner_interfaces__srv__QueryInitialRobotPosition_Request__Sequence *)malloc(sizeof(robo_miner_interfaces__srv__QueryInitialRobotPosition_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robo_miner_interfaces__srv__QueryInitialRobotPosition_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robo_miner_interfaces__srv__QueryInitialRobotPosition_Request__Sequence__destroy(robo_miner_interfaces__srv__QueryInitialRobotPosition_Request__Sequence * array)
{
  if (array) {
    robo_miner_interfaces__srv__QueryInitialRobotPosition_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `robot_position_response`
#include "robo_miner_interfaces/msg/detail/robot_position_response__functions.h"

bool
robo_miner_interfaces__srv__QueryInitialRobotPosition_Response__init(robo_miner_interfaces__srv__QueryInitialRobotPosition_Response * msg)
{
  if (!msg) {
    return false;
  }
  // robot_position_response
  if (!robo_miner_interfaces__msg__RobotPositionResponse__init(&msg->robot_position_response)) {
    robo_miner_interfaces__srv__QueryInitialRobotPosition_Response__fini(msg);
    return false;
  }
  // robot_initial_tile
  return true;
}

void
robo_miner_interfaces__srv__QueryInitialRobotPosition_Response__fini(robo_miner_interfaces__srv__QueryInitialRobotPosition_Response * msg)
{
  if (!msg) {
    return;
  }
  // robot_position_response
  robo_miner_interfaces__msg__RobotPositionResponse__fini(&msg->robot_position_response);
  // robot_initial_tile
}

robo_miner_interfaces__srv__QueryInitialRobotPosition_Response *
robo_miner_interfaces__srv__QueryInitialRobotPosition_Response__create()
{
  robo_miner_interfaces__srv__QueryInitialRobotPosition_Response * msg = (robo_miner_interfaces__srv__QueryInitialRobotPosition_Response *)malloc(sizeof(robo_miner_interfaces__srv__QueryInitialRobotPosition_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robo_miner_interfaces__srv__QueryInitialRobotPosition_Response));
  bool success = robo_miner_interfaces__srv__QueryInitialRobotPosition_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robo_miner_interfaces__srv__QueryInitialRobotPosition_Response__destroy(robo_miner_interfaces__srv__QueryInitialRobotPosition_Response * msg)
{
  if (msg) {
    robo_miner_interfaces__srv__QueryInitialRobotPosition_Response__fini(msg);
  }
  free(msg);
}


bool
robo_miner_interfaces__srv__QueryInitialRobotPosition_Response__Sequence__init(robo_miner_interfaces__srv__QueryInitialRobotPosition_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robo_miner_interfaces__srv__QueryInitialRobotPosition_Response * data = NULL;
  if (size) {
    data = (robo_miner_interfaces__srv__QueryInitialRobotPosition_Response *)calloc(size, sizeof(robo_miner_interfaces__srv__QueryInitialRobotPosition_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robo_miner_interfaces__srv__QueryInitialRobotPosition_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robo_miner_interfaces__srv__QueryInitialRobotPosition_Response__fini(&data[i - 1]);
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
robo_miner_interfaces__srv__QueryInitialRobotPosition_Response__Sequence__fini(robo_miner_interfaces__srv__QueryInitialRobotPosition_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robo_miner_interfaces__srv__QueryInitialRobotPosition_Response__fini(&array->data[i]);
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

robo_miner_interfaces__srv__QueryInitialRobotPosition_Response__Sequence *
robo_miner_interfaces__srv__QueryInitialRobotPosition_Response__Sequence__create(size_t size)
{
  robo_miner_interfaces__srv__QueryInitialRobotPosition_Response__Sequence * array = (robo_miner_interfaces__srv__QueryInitialRobotPosition_Response__Sequence *)malloc(sizeof(robo_miner_interfaces__srv__QueryInitialRobotPosition_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robo_miner_interfaces__srv__QueryInitialRobotPosition_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robo_miner_interfaces__srv__QueryInitialRobotPosition_Response__Sequence__destroy(robo_miner_interfaces__srv__QueryInitialRobotPosition_Response__Sequence * array)
{
  if (array) {
    robo_miner_interfaces__srv__QueryInitialRobotPosition_Response__Sequence__fini(array);
  }
  free(array);
}
