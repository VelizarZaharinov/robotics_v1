// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robo_cleaner_interfaces:action/RobotMove.idl
// generated code does not contain a copyright notice
#include "robo_cleaner_interfaces/action/detail/robot_move__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `robot_move_type`
#include "robo_cleaner_interfaces/msg/detail/robot_move_type__functions.h"

bool
robo_cleaner_interfaces__action__RobotMove_Goal__init(robo_cleaner_interfaces__action__RobotMove_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // robot_move_type
  if (!robo_cleaner_interfaces__msg__RobotMoveType__init(&msg->robot_move_type)) {
    robo_cleaner_interfaces__action__RobotMove_Goal__fini(msg);
    return false;
  }
  return true;
}

void
robo_cleaner_interfaces__action__RobotMove_Goal__fini(robo_cleaner_interfaces__action__RobotMove_Goal * msg)
{
  if (!msg) {
    return;
  }
  // robot_move_type
  robo_cleaner_interfaces__msg__RobotMoveType__fini(&msg->robot_move_type);
}

robo_cleaner_interfaces__action__RobotMove_Goal *
robo_cleaner_interfaces__action__RobotMove_Goal__create()
{
  robo_cleaner_interfaces__action__RobotMove_Goal * msg = (robo_cleaner_interfaces__action__RobotMove_Goal *)malloc(sizeof(robo_cleaner_interfaces__action__RobotMove_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robo_cleaner_interfaces__action__RobotMove_Goal));
  bool success = robo_cleaner_interfaces__action__RobotMove_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robo_cleaner_interfaces__action__RobotMove_Goal__destroy(robo_cleaner_interfaces__action__RobotMove_Goal * msg)
{
  if (msg) {
    robo_cleaner_interfaces__action__RobotMove_Goal__fini(msg);
  }
  free(msg);
}


bool
robo_cleaner_interfaces__action__RobotMove_Goal__Sequence__init(robo_cleaner_interfaces__action__RobotMove_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robo_cleaner_interfaces__action__RobotMove_Goal * data = NULL;
  if (size) {
    data = (robo_cleaner_interfaces__action__RobotMove_Goal *)calloc(size, sizeof(robo_cleaner_interfaces__action__RobotMove_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robo_cleaner_interfaces__action__RobotMove_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robo_cleaner_interfaces__action__RobotMove_Goal__fini(&data[i - 1]);
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
robo_cleaner_interfaces__action__RobotMove_Goal__Sequence__fini(robo_cleaner_interfaces__action__RobotMove_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robo_cleaner_interfaces__action__RobotMove_Goal__fini(&array->data[i]);
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

robo_cleaner_interfaces__action__RobotMove_Goal__Sequence *
robo_cleaner_interfaces__action__RobotMove_Goal__Sequence__create(size_t size)
{
  robo_cleaner_interfaces__action__RobotMove_Goal__Sequence * array = (robo_cleaner_interfaces__action__RobotMove_Goal__Sequence *)malloc(sizeof(robo_cleaner_interfaces__action__RobotMove_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robo_cleaner_interfaces__action__RobotMove_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robo_cleaner_interfaces__action__RobotMove_Goal__Sequence__destroy(robo_cleaner_interfaces__action__RobotMove_Goal__Sequence * array)
{
  if (array) {
    robo_cleaner_interfaces__action__RobotMove_Goal__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `error_reason`
#include "rosidl_runtime_c/string_functions.h"

bool
robo_cleaner_interfaces__action__RobotMove_Result__init(robo_cleaner_interfaces__action__RobotMove_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // error_reason
  if (!rosidl_runtime_c__String__init(&msg->error_reason)) {
    robo_cleaner_interfaces__action__RobotMove_Result__fini(msg);
    return false;
  }
  // processed_field_marker
  return true;
}

void
robo_cleaner_interfaces__action__RobotMove_Result__fini(robo_cleaner_interfaces__action__RobotMove_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // error_reason
  rosidl_runtime_c__String__fini(&msg->error_reason);
  // processed_field_marker
}

robo_cleaner_interfaces__action__RobotMove_Result *
robo_cleaner_interfaces__action__RobotMove_Result__create()
{
  robo_cleaner_interfaces__action__RobotMove_Result * msg = (robo_cleaner_interfaces__action__RobotMove_Result *)malloc(sizeof(robo_cleaner_interfaces__action__RobotMove_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robo_cleaner_interfaces__action__RobotMove_Result));
  bool success = robo_cleaner_interfaces__action__RobotMove_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robo_cleaner_interfaces__action__RobotMove_Result__destroy(robo_cleaner_interfaces__action__RobotMove_Result * msg)
{
  if (msg) {
    robo_cleaner_interfaces__action__RobotMove_Result__fini(msg);
  }
  free(msg);
}


bool
robo_cleaner_interfaces__action__RobotMove_Result__Sequence__init(robo_cleaner_interfaces__action__RobotMove_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robo_cleaner_interfaces__action__RobotMove_Result * data = NULL;
  if (size) {
    data = (robo_cleaner_interfaces__action__RobotMove_Result *)calloc(size, sizeof(robo_cleaner_interfaces__action__RobotMove_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robo_cleaner_interfaces__action__RobotMove_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robo_cleaner_interfaces__action__RobotMove_Result__fini(&data[i - 1]);
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
robo_cleaner_interfaces__action__RobotMove_Result__Sequence__fini(robo_cleaner_interfaces__action__RobotMove_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robo_cleaner_interfaces__action__RobotMove_Result__fini(&array->data[i]);
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

robo_cleaner_interfaces__action__RobotMove_Result__Sequence *
robo_cleaner_interfaces__action__RobotMove_Result__Sequence__create(size_t size)
{
  robo_cleaner_interfaces__action__RobotMove_Result__Sequence * array = (robo_cleaner_interfaces__action__RobotMove_Result__Sequence *)malloc(sizeof(robo_cleaner_interfaces__action__RobotMove_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robo_cleaner_interfaces__action__RobotMove_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robo_cleaner_interfaces__action__RobotMove_Result__Sequence__destroy(robo_cleaner_interfaces__action__RobotMove_Result__Sequence * array)
{
  if (array) {
    robo_cleaner_interfaces__action__RobotMove_Result__Sequence__fini(array);
  }
  free(array);
}


bool
robo_cleaner_interfaces__action__RobotMove_Feedback__init(robo_cleaner_interfaces__action__RobotMove_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // approaching_field_marker
  // progress_percent
  return true;
}

void
robo_cleaner_interfaces__action__RobotMove_Feedback__fini(robo_cleaner_interfaces__action__RobotMove_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // approaching_field_marker
  // progress_percent
}

robo_cleaner_interfaces__action__RobotMove_Feedback *
robo_cleaner_interfaces__action__RobotMove_Feedback__create()
{
  robo_cleaner_interfaces__action__RobotMove_Feedback * msg = (robo_cleaner_interfaces__action__RobotMove_Feedback *)malloc(sizeof(robo_cleaner_interfaces__action__RobotMove_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robo_cleaner_interfaces__action__RobotMove_Feedback));
  bool success = robo_cleaner_interfaces__action__RobotMove_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robo_cleaner_interfaces__action__RobotMove_Feedback__destroy(robo_cleaner_interfaces__action__RobotMove_Feedback * msg)
{
  if (msg) {
    robo_cleaner_interfaces__action__RobotMove_Feedback__fini(msg);
  }
  free(msg);
}


bool
robo_cleaner_interfaces__action__RobotMove_Feedback__Sequence__init(robo_cleaner_interfaces__action__RobotMove_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robo_cleaner_interfaces__action__RobotMove_Feedback * data = NULL;
  if (size) {
    data = (robo_cleaner_interfaces__action__RobotMove_Feedback *)calloc(size, sizeof(robo_cleaner_interfaces__action__RobotMove_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robo_cleaner_interfaces__action__RobotMove_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robo_cleaner_interfaces__action__RobotMove_Feedback__fini(&data[i - 1]);
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
robo_cleaner_interfaces__action__RobotMove_Feedback__Sequence__fini(robo_cleaner_interfaces__action__RobotMove_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robo_cleaner_interfaces__action__RobotMove_Feedback__fini(&array->data[i]);
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

robo_cleaner_interfaces__action__RobotMove_Feedback__Sequence *
robo_cleaner_interfaces__action__RobotMove_Feedback__Sequence__create(size_t size)
{
  robo_cleaner_interfaces__action__RobotMove_Feedback__Sequence * array = (robo_cleaner_interfaces__action__RobotMove_Feedback__Sequence *)malloc(sizeof(robo_cleaner_interfaces__action__RobotMove_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robo_cleaner_interfaces__action__RobotMove_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robo_cleaner_interfaces__action__RobotMove_Feedback__Sequence__destroy(robo_cleaner_interfaces__action__RobotMove_Feedback__Sequence * array)
{
  if (array) {
    robo_cleaner_interfaces__action__RobotMove_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "robo_cleaner_interfaces/action/detail/robot_move__functions.h"

bool
robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__init(robo_cleaner_interfaces__action__RobotMove_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!robo_cleaner_interfaces__action__RobotMove_Goal__init(&msg->goal)) {
    robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__fini(robo_cleaner_interfaces__action__RobotMove_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  robo_cleaner_interfaces__action__RobotMove_Goal__fini(&msg->goal);
}

robo_cleaner_interfaces__action__RobotMove_SendGoal_Request *
robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__create()
{
  robo_cleaner_interfaces__action__RobotMove_SendGoal_Request * msg = (robo_cleaner_interfaces__action__RobotMove_SendGoal_Request *)malloc(sizeof(robo_cleaner_interfaces__action__RobotMove_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robo_cleaner_interfaces__action__RobotMove_SendGoal_Request));
  bool success = robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__destroy(robo_cleaner_interfaces__action__RobotMove_SendGoal_Request * msg)
{
  if (msg) {
    robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__Sequence__init(robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robo_cleaner_interfaces__action__RobotMove_SendGoal_Request * data = NULL;
  if (size) {
    data = (robo_cleaner_interfaces__action__RobotMove_SendGoal_Request *)calloc(size, sizeof(robo_cleaner_interfaces__action__RobotMove_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__fini(&data[i - 1]);
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
robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__Sequence__fini(robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__fini(&array->data[i]);
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

robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__Sequence *
robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__Sequence__create(size_t size)
{
  robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__Sequence * array = (robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__Sequence *)malloc(sizeof(robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__Sequence__destroy(robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__Sequence * array)
{
  if (array) {
    robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__init(robo_cleaner_interfaces__action__RobotMove_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__fini(robo_cleaner_interfaces__action__RobotMove_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

robo_cleaner_interfaces__action__RobotMove_SendGoal_Response *
robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__create()
{
  robo_cleaner_interfaces__action__RobotMove_SendGoal_Response * msg = (robo_cleaner_interfaces__action__RobotMove_SendGoal_Response *)malloc(sizeof(robo_cleaner_interfaces__action__RobotMove_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robo_cleaner_interfaces__action__RobotMove_SendGoal_Response));
  bool success = robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__destroy(robo_cleaner_interfaces__action__RobotMove_SendGoal_Response * msg)
{
  if (msg) {
    robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__Sequence__init(robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robo_cleaner_interfaces__action__RobotMove_SendGoal_Response * data = NULL;
  if (size) {
    data = (robo_cleaner_interfaces__action__RobotMove_SendGoal_Response *)calloc(size, sizeof(robo_cleaner_interfaces__action__RobotMove_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__fini(&data[i - 1]);
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
robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__Sequence__fini(robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__fini(&array->data[i]);
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

robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__Sequence *
robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__Sequence__create(size_t size)
{
  robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__Sequence * array = (robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__Sequence *)malloc(sizeof(robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__Sequence__destroy(robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__Sequence * array)
{
  if (array) {
    robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
robo_cleaner_interfaces__action__RobotMove_GetResult_Request__init(robo_cleaner_interfaces__action__RobotMove_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    robo_cleaner_interfaces__action__RobotMove_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
robo_cleaner_interfaces__action__RobotMove_GetResult_Request__fini(robo_cleaner_interfaces__action__RobotMove_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

robo_cleaner_interfaces__action__RobotMove_GetResult_Request *
robo_cleaner_interfaces__action__RobotMove_GetResult_Request__create()
{
  robo_cleaner_interfaces__action__RobotMove_GetResult_Request * msg = (robo_cleaner_interfaces__action__RobotMove_GetResult_Request *)malloc(sizeof(robo_cleaner_interfaces__action__RobotMove_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robo_cleaner_interfaces__action__RobotMove_GetResult_Request));
  bool success = robo_cleaner_interfaces__action__RobotMove_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robo_cleaner_interfaces__action__RobotMove_GetResult_Request__destroy(robo_cleaner_interfaces__action__RobotMove_GetResult_Request * msg)
{
  if (msg) {
    robo_cleaner_interfaces__action__RobotMove_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
robo_cleaner_interfaces__action__RobotMove_GetResult_Request__Sequence__init(robo_cleaner_interfaces__action__RobotMove_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robo_cleaner_interfaces__action__RobotMove_GetResult_Request * data = NULL;
  if (size) {
    data = (robo_cleaner_interfaces__action__RobotMove_GetResult_Request *)calloc(size, sizeof(robo_cleaner_interfaces__action__RobotMove_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robo_cleaner_interfaces__action__RobotMove_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robo_cleaner_interfaces__action__RobotMove_GetResult_Request__fini(&data[i - 1]);
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
robo_cleaner_interfaces__action__RobotMove_GetResult_Request__Sequence__fini(robo_cleaner_interfaces__action__RobotMove_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robo_cleaner_interfaces__action__RobotMove_GetResult_Request__fini(&array->data[i]);
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

robo_cleaner_interfaces__action__RobotMove_GetResult_Request__Sequence *
robo_cleaner_interfaces__action__RobotMove_GetResult_Request__Sequence__create(size_t size)
{
  robo_cleaner_interfaces__action__RobotMove_GetResult_Request__Sequence * array = (robo_cleaner_interfaces__action__RobotMove_GetResult_Request__Sequence *)malloc(sizeof(robo_cleaner_interfaces__action__RobotMove_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robo_cleaner_interfaces__action__RobotMove_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robo_cleaner_interfaces__action__RobotMove_GetResult_Request__Sequence__destroy(robo_cleaner_interfaces__action__RobotMove_GetResult_Request__Sequence * array)
{
  if (array) {
    robo_cleaner_interfaces__action__RobotMove_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "robo_cleaner_interfaces/action/detail/robot_move__functions.h"

bool
robo_cleaner_interfaces__action__RobotMove_GetResult_Response__init(robo_cleaner_interfaces__action__RobotMove_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!robo_cleaner_interfaces__action__RobotMove_Result__init(&msg->result)) {
    robo_cleaner_interfaces__action__RobotMove_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
robo_cleaner_interfaces__action__RobotMove_GetResult_Response__fini(robo_cleaner_interfaces__action__RobotMove_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  robo_cleaner_interfaces__action__RobotMove_Result__fini(&msg->result);
}

robo_cleaner_interfaces__action__RobotMove_GetResult_Response *
robo_cleaner_interfaces__action__RobotMove_GetResult_Response__create()
{
  robo_cleaner_interfaces__action__RobotMove_GetResult_Response * msg = (robo_cleaner_interfaces__action__RobotMove_GetResult_Response *)malloc(sizeof(robo_cleaner_interfaces__action__RobotMove_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robo_cleaner_interfaces__action__RobotMove_GetResult_Response));
  bool success = robo_cleaner_interfaces__action__RobotMove_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robo_cleaner_interfaces__action__RobotMove_GetResult_Response__destroy(robo_cleaner_interfaces__action__RobotMove_GetResult_Response * msg)
{
  if (msg) {
    robo_cleaner_interfaces__action__RobotMove_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
robo_cleaner_interfaces__action__RobotMove_GetResult_Response__Sequence__init(robo_cleaner_interfaces__action__RobotMove_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robo_cleaner_interfaces__action__RobotMove_GetResult_Response * data = NULL;
  if (size) {
    data = (robo_cleaner_interfaces__action__RobotMove_GetResult_Response *)calloc(size, sizeof(robo_cleaner_interfaces__action__RobotMove_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robo_cleaner_interfaces__action__RobotMove_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robo_cleaner_interfaces__action__RobotMove_GetResult_Response__fini(&data[i - 1]);
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
robo_cleaner_interfaces__action__RobotMove_GetResult_Response__Sequence__fini(robo_cleaner_interfaces__action__RobotMove_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robo_cleaner_interfaces__action__RobotMove_GetResult_Response__fini(&array->data[i]);
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

robo_cleaner_interfaces__action__RobotMove_GetResult_Response__Sequence *
robo_cleaner_interfaces__action__RobotMove_GetResult_Response__Sequence__create(size_t size)
{
  robo_cleaner_interfaces__action__RobotMove_GetResult_Response__Sequence * array = (robo_cleaner_interfaces__action__RobotMove_GetResult_Response__Sequence *)malloc(sizeof(robo_cleaner_interfaces__action__RobotMove_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robo_cleaner_interfaces__action__RobotMove_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robo_cleaner_interfaces__action__RobotMove_GetResult_Response__Sequence__destroy(robo_cleaner_interfaces__action__RobotMove_GetResult_Response__Sequence * array)
{
  if (array) {
    robo_cleaner_interfaces__action__RobotMove_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "robo_cleaner_interfaces/action/detail/robot_move__functions.h"

bool
robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__init(robo_cleaner_interfaces__action__RobotMove_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!robo_cleaner_interfaces__action__RobotMove_Feedback__init(&msg->feedback)) {
    robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__fini(robo_cleaner_interfaces__action__RobotMove_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  robo_cleaner_interfaces__action__RobotMove_Feedback__fini(&msg->feedback);
}

robo_cleaner_interfaces__action__RobotMove_FeedbackMessage *
robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__create()
{
  robo_cleaner_interfaces__action__RobotMove_FeedbackMessage * msg = (robo_cleaner_interfaces__action__RobotMove_FeedbackMessage *)malloc(sizeof(robo_cleaner_interfaces__action__RobotMove_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robo_cleaner_interfaces__action__RobotMove_FeedbackMessage));
  bool success = robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__destroy(robo_cleaner_interfaces__action__RobotMove_FeedbackMessage * msg)
{
  if (msg) {
    robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__Sequence__init(robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robo_cleaner_interfaces__action__RobotMove_FeedbackMessage * data = NULL;
  if (size) {
    data = (robo_cleaner_interfaces__action__RobotMove_FeedbackMessage *)calloc(size, sizeof(robo_cleaner_interfaces__action__RobotMove_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__fini(&data[i - 1]);
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
robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__Sequence__fini(robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__fini(&array->data[i]);
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

robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__Sequence *
robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__Sequence__create(size_t size)
{
  robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__Sequence * array = (robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__Sequence *)malloc(sizeof(robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__Sequence__destroy(robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__Sequence * array)
{
  if (array) {
    robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
