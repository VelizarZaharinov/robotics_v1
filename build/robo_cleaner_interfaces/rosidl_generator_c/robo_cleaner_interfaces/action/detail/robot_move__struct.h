// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robo_cleaner_interfaces:action/RobotMove.idl
// generated code does not contain a copyright notice

#ifndef ROBO_CLEANER_INTERFACES__ACTION__DETAIL__ROBOT_MOVE__STRUCT_H_
#define ROBO_CLEANER_INTERFACES__ACTION__DETAIL__ROBOT_MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'robot_move_type'
#include "robo_cleaner_interfaces/msg/detail/robot_move_type__struct.h"

// Struct defined in action/RobotMove in the package robo_cleaner_interfaces.
typedef struct robo_cleaner_interfaces__action__RobotMove_Goal
{
  robo_cleaner_interfaces__msg__RobotMoveType robot_move_type;
} robo_cleaner_interfaces__action__RobotMove_Goal;

// Struct for a sequence of robo_cleaner_interfaces__action__RobotMove_Goal.
typedef struct robo_cleaner_interfaces__action__RobotMove_Goal__Sequence
{
  robo_cleaner_interfaces__action__RobotMove_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_cleaner_interfaces__action__RobotMove_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_reason'
#include "rosidl_runtime_c/string.h"

// Struct defined in action/RobotMove in the package robo_cleaner_interfaces.
typedef struct robo_cleaner_interfaces__action__RobotMove_Result
{
  bool success;
  rosidl_runtime_c__String error_reason;
  uint8_t processed_field_marker;
} robo_cleaner_interfaces__action__RobotMove_Result;

// Struct for a sequence of robo_cleaner_interfaces__action__RobotMove_Result.
typedef struct robo_cleaner_interfaces__action__RobotMove_Result__Sequence
{
  robo_cleaner_interfaces__action__RobotMove_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_cleaner_interfaces__action__RobotMove_Result__Sequence;


// Constants defined in the message

// Struct defined in action/RobotMove in the package robo_cleaner_interfaces.
typedef struct robo_cleaner_interfaces__action__RobotMove_Feedback
{
  uint8_t approaching_field_marker;
  int32_t progress_percent;
} robo_cleaner_interfaces__action__RobotMove_Feedback;

// Struct for a sequence of robo_cleaner_interfaces__action__RobotMove_Feedback.
typedef struct robo_cleaner_interfaces__action__RobotMove_Feedback__Sequence
{
  robo_cleaner_interfaces__action__RobotMove_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_cleaner_interfaces__action__RobotMove_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "robo_cleaner_interfaces/action/detail/robot_move__struct.h"

// Struct defined in action/RobotMove in the package robo_cleaner_interfaces.
typedef struct robo_cleaner_interfaces__action__RobotMove_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  robo_cleaner_interfaces__action__RobotMove_Goal goal;
} robo_cleaner_interfaces__action__RobotMove_SendGoal_Request;

// Struct for a sequence of robo_cleaner_interfaces__action__RobotMove_SendGoal_Request.
typedef struct robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__Sequence
{
  robo_cleaner_interfaces__action__RobotMove_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/RobotMove in the package robo_cleaner_interfaces.
typedef struct robo_cleaner_interfaces__action__RobotMove_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} robo_cleaner_interfaces__action__RobotMove_SendGoal_Response;

// Struct for a sequence of robo_cleaner_interfaces__action__RobotMove_SendGoal_Response.
typedef struct robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__Sequence
{
  robo_cleaner_interfaces__action__RobotMove_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/RobotMove in the package robo_cleaner_interfaces.
typedef struct robo_cleaner_interfaces__action__RobotMove_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} robo_cleaner_interfaces__action__RobotMove_GetResult_Request;

// Struct for a sequence of robo_cleaner_interfaces__action__RobotMove_GetResult_Request.
typedef struct robo_cleaner_interfaces__action__RobotMove_GetResult_Request__Sequence
{
  robo_cleaner_interfaces__action__RobotMove_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_cleaner_interfaces__action__RobotMove_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "robo_cleaner_interfaces/action/detail/robot_move__struct.h"

// Struct defined in action/RobotMove in the package robo_cleaner_interfaces.
typedef struct robo_cleaner_interfaces__action__RobotMove_GetResult_Response
{
  int8_t status;
  robo_cleaner_interfaces__action__RobotMove_Result result;
} robo_cleaner_interfaces__action__RobotMove_GetResult_Response;

// Struct for a sequence of robo_cleaner_interfaces__action__RobotMove_GetResult_Response.
typedef struct robo_cleaner_interfaces__action__RobotMove_GetResult_Response__Sequence
{
  robo_cleaner_interfaces__action__RobotMove_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_cleaner_interfaces__action__RobotMove_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "robo_cleaner_interfaces/action/detail/robot_move__struct.h"

// Struct defined in action/RobotMove in the package robo_cleaner_interfaces.
typedef struct robo_cleaner_interfaces__action__RobotMove_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  robo_cleaner_interfaces__action__RobotMove_Feedback feedback;
} robo_cleaner_interfaces__action__RobotMove_FeedbackMessage;

// Struct for a sequence of robo_cleaner_interfaces__action__RobotMove_FeedbackMessage.
typedef struct robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__Sequence
{
  robo_cleaner_interfaces__action__RobotMove_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBO_CLEANER_INTERFACES__ACTION__DETAIL__ROBOT_MOVE__STRUCT_H_
