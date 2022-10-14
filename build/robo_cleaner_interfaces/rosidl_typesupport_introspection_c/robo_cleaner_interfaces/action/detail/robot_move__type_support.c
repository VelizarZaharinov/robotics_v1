// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robo_cleaner_interfaces:action/RobotMove.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robo_cleaner_interfaces/action/detail/robot_move__rosidl_typesupport_introspection_c.h"
#include "robo_cleaner_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robo_cleaner_interfaces/action/detail/robot_move__functions.h"
#include "robo_cleaner_interfaces/action/detail/robot_move__struct.h"


// Include directives for member types
// Member `robot_move_type`
#include "robo_cleaner_interfaces/msg/robot_move_type.h"
// Member `robot_move_type`
#include "robo_cleaner_interfaces/msg/detail/robot_move_type__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RobotMove_Goal__rosidl_typesupport_introspection_c__RobotMove_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robo_cleaner_interfaces__action__RobotMove_Goal__init(message_memory);
}

void RobotMove_Goal__rosidl_typesupport_introspection_c__RobotMove_Goal_fini_function(void * message_memory)
{
  robo_cleaner_interfaces__action__RobotMove_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotMove_Goal__rosidl_typesupport_introspection_c__RobotMove_Goal_message_member_array[1] = {
  {
    "robot_move_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_cleaner_interfaces__action__RobotMove_Goal, robot_move_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotMove_Goal__rosidl_typesupport_introspection_c__RobotMove_Goal_message_members = {
  "robo_cleaner_interfaces__action",  // message namespace
  "RobotMove_Goal",  // message name
  1,  // number of fields
  sizeof(robo_cleaner_interfaces__action__RobotMove_Goal),
  RobotMove_Goal__rosidl_typesupport_introspection_c__RobotMove_Goal_message_member_array,  // message members
  RobotMove_Goal__rosidl_typesupport_introspection_c__RobotMove_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotMove_Goal__rosidl_typesupport_introspection_c__RobotMove_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotMove_Goal__rosidl_typesupport_introspection_c__RobotMove_Goal_message_type_support_handle = {
  0,
  &RobotMove_Goal__rosidl_typesupport_introspection_c__RobotMove_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robo_cleaner_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, action, RobotMove_Goal)() {
  RobotMove_Goal__rosidl_typesupport_introspection_c__RobotMove_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, msg, RobotMoveType)();
  if (!RobotMove_Goal__rosidl_typesupport_introspection_c__RobotMove_Goal_message_type_support_handle.typesupport_identifier) {
    RobotMove_Goal__rosidl_typesupport_introspection_c__RobotMove_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotMove_Goal__rosidl_typesupport_introspection_c__RobotMove_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robo_cleaner_interfaces/action/detail/robot_move__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robo_cleaner_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robo_cleaner_interfaces/action/detail/robot_move__functions.h"
// already included above
// #include "robo_cleaner_interfaces/action/detail/robot_move__struct.h"


// Include directives for member types
// Member `error_reason`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RobotMove_Result__rosidl_typesupport_introspection_c__RobotMove_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robo_cleaner_interfaces__action__RobotMove_Result__init(message_memory);
}

void RobotMove_Result__rosidl_typesupport_introspection_c__RobotMove_Result_fini_function(void * message_memory)
{
  robo_cleaner_interfaces__action__RobotMove_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotMove_Result__rosidl_typesupport_introspection_c__RobotMove_Result_message_member_array[3] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_cleaner_interfaces__action__RobotMove_Result, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_reason",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_cleaner_interfaces__action__RobotMove_Result, error_reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "processed_field_marker",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_cleaner_interfaces__action__RobotMove_Result, processed_field_marker),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotMove_Result__rosidl_typesupport_introspection_c__RobotMove_Result_message_members = {
  "robo_cleaner_interfaces__action",  // message namespace
  "RobotMove_Result",  // message name
  3,  // number of fields
  sizeof(robo_cleaner_interfaces__action__RobotMove_Result),
  RobotMove_Result__rosidl_typesupport_introspection_c__RobotMove_Result_message_member_array,  // message members
  RobotMove_Result__rosidl_typesupport_introspection_c__RobotMove_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotMove_Result__rosidl_typesupport_introspection_c__RobotMove_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotMove_Result__rosidl_typesupport_introspection_c__RobotMove_Result_message_type_support_handle = {
  0,
  &RobotMove_Result__rosidl_typesupport_introspection_c__RobotMove_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robo_cleaner_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, action, RobotMove_Result)() {
  if (!RobotMove_Result__rosidl_typesupport_introspection_c__RobotMove_Result_message_type_support_handle.typesupport_identifier) {
    RobotMove_Result__rosidl_typesupport_introspection_c__RobotMove_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotMove_Result__rosidl_typesupport_introspection_c__RobotMove_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robo_cleaner_interfaces/action/detail/robot_move__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robo_cleaner_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robo_cleaner_interfaces/action/detail/robot_move__functions.h"
// already included above
// #include "robo_cleaner_interfaces/action/detail/robot_move__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void RobotMove_Feedback__rosidl_typesupport_introspection_c__RobotMove_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robo_cleaner_interfaces__action__RobotMove_Feedback__init(message_memory);
}

void RobotMove_Feedback__rosidl_typesupport_introspection_c__RobotMove_Feedback_fini_function(void * message_memory)
{
  robo_cleaner_interfaces__action__RobotMove_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotMove_Feedback__rosidl_typesupport_introspection_c__RobotMove_Feedback_message_member_array[2] = {
  {
    "approaching_field_marker",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_cleaner_interfaces__action__RobotMove_Feedback, approaching_field_marker),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "progress_percent",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_cleaner_interfaces__action__RobotMove_Feedback, progress_percent),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotMove_Feedback__rosidl_typesupport_introspection_c__RobotMove_Feedback_message_members = {
  "robo_cleaner_interfaces__action",  // message namespace
  "RobotMove_Feedback",  // message name
  2,  // number of fields
  sizeof(robo_cleaner_interfaces__action__RobotMove_Feedback),
  RobotMove_Feedback__rosidl_typesupport_introspection_c__RobotMove_Feedback_message_member_array,  // message members
  RobotMove_Feedback__rosidl_typesupport_introspection_c__RobotMove_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotMove_Feedback__rosidl_typesupport_introspection_c__RobotMove_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotMove_Feedback__rosidl_typesupport_introspection_c__RobotMove_Feedback_message_type_support_handle = {
  0,
  &RobotMove_Feedback__rosidl_typesupport_introspection_c__RobotMove_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robo_cleaner_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, action, RobotMove_Feedback)() {
  if (!RobotMove_Feedback__rosidl_typesupport_introspection_c__RobotMove_Feedback_message_type_support_handle.typesupport_identifier) {
    RobotMove_Feedback__rosidl_typesupport_introspection_c__RobotMove_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotMove_Feedback__rosidl_typesupport_introspection_c__RobotMove_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robo_cleaner_interfaces/action/detail/robot_move__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robo_cleaner_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robo_cleaner_interfaces/action/detail/robot_move__functions.h"
// already included above
// #include "robo_cleaner_interfaces/action/detail/robot_move__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "robo_cleaner_interfaces/action/robot_move.h"
// Member `goal`
// already included above
// #include "robo_cleaner_interfaces/action/detail/robot_move__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RobotMove_SendGoal_Request__rosidl_typesupport_introspection_c__RobotMove_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__init(message_memory);
}

void RobotMove_SendGoal_Request__rosidl_typesupport_introspection_c__RobotMove_SendGoal_Request_fini_function(void * message_memory)
{
  robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotMove_SendGoal_Request__rosidl_typesupport_introspection_c__RobotMove_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_cleaner_interfaces__action__RobotMove_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_cleaner_interfaces__action__RobotMove_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotMove_SendGoal_Request__rosidl_typesupport_introspection_c__RobotMove_SendGoal_Request_message_members = {
  "robo_cleaner_interfaces__action",  // message namespace
  "RobotMove_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(robo_cleaner_interfaces__action__RobotMove_SendGoal_Request),
  RobotMove_SendGoal_Request__rosidl_typesupport_introspection_c__RobotMove_SendGoal_Request_message_member_array,  // message members
  RobotMove_SendGoal_Request__rosidl_typesupport_introspection_c__RobotMove_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotMove_SendGoal_Request__rosidl_typesupport_introspection_c__RobotMove_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotMove_SendGoal_Request__rosidl_typesupport_introspection_c__RobotMove_SendGoal_Request_message_type_support_handle = {
  0,
  &RobotMove_SendGoal_Request__rosidl_typesupport_introspection_c__RobotMove_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robo_cleaner_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, action, RobotMove_SendGoal_Request)() {
  RobotMove_SendGoal_Request__rosidl_typesupport_introspection_c__RobotMove_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  RobotMove_SendGoal_Request__rosidl_typesupport_introspection_c__RobotMove_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, action, RobotMove_Goal)();
  if (!RobotMove_SendGoal_Request__rosidl_typesupport_introspection_c__RobotMove_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    RobotMove_SendGoal_Request__rosidl_typesupport_introspection_c__RobotMove_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotMove_SendGoal_Request__rosidl_typesupport_introspection_c__RobotMove_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robo_cleaner_interfaces/action/detail/robot_move__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robo_cleaner_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robo_cleaner_interfaces/action/detail/robot_move__functions.h"
// already included above
// #include "robo_cleaner_interfaces/action/detail/robot_move__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RobotMove_SendGoal_Response__rosidl_typesupport_introspection_c__RobotMove_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__init(message_memory);
}

void RobotMove_SendGoal_Response__rosidl_typesupport_introspection_c__RobotMove_SendGoal_Response_fini_function(void * message_memory)
{
  robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotMove_SendGoal_Response__rosidl_typesupport_introspection_c__RobotMove_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_cleaner_interfaces__action__RobotMove_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_cleaner_interfaces__action__RobotMove_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotMove_SendGoal_Response__rosidl_typesupport_introspection_c__RobotMove_SendGoal_Response_message_members = {
  "robo_cleaner_interfaces__action",  // message namespace
  "RobotMove_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(robo_cleaner_interfaces__action__RobotMove_SendGoal_Response),
  RobotMove_SendGoal_Response__rosidl_typesupport_introspection_c__RobotMove_SendGoal_Response_message_member_array,  // message members
  RobotMove_SendGoal_Response__rosidl_typesupport_introspection_c__RobotMove_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotMove_SendGoal_Response__rosidl_typesupport_introspection_c__RobotMove_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotMove_SendGoal_Response__rosidl_typesupport_introspection_c__RobotMove_SendGoal_Response_message_type_support_handle = {
  0,
  &RobotMove_SendGoal_Response__rosidl_typesupport_introspection_c__RobotMove_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robo_cleaner_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, action, RobotMove_SendGoal_Response)() {
  RobotMove_SendGoal_Response__rosidl_typesupport_introspection_c__RobotMove_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!RobotMove_SendGoal_Response__rosidl_typesupport_introspection_c__RobotMove_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    RobotMove_SendGoal_Response__rosidl_typesupport_introspection_c__RobotMove_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotMove_SendGoal_Response__rosidl_typesupport_introspection_c__RobotMove_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robo_cleaner_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "robo_cleaner_interfaces/action/detail/robot_move__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers robo_cleaner_interfaces__action__detail__robot_move__rosidl_typesupport_introspection_c__RobotMove_SendGoal_service_members = {
  "robo_cleaner_interfaces__action",  // service namespace
  "RobotMove_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // robo_cleaner_interfaces__action__detail__robot_move__rosidl_typesupport_introspection_c__RobotMove_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // robo_cleaner_interfaces__action__detail__robot_move__rosidl_typesupport_introspection_c__RobotMove_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t robo_cleaner_interfaces__action__detail__robot_move__rosidl_typesupport_introspection_c__RobotMove_SendGoal_service_type_support_handle = {
  0,
  &robo_cleaner_interfaces__action__detail__robot_move__rosidl_typesupport_introspection_c__RobotMove_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, action, RobotMove_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, action, RobotMove_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robo_cleaner_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, action, RobotMove_SendGoal)() {
  if (!robo_cleaner_interfaces__action__detail__robot_move__rosidl_typesupport_introspection_c__RobotMove_SendGoal_service_type_support_handle.typesupport_identifier) {
    robo_cleaner_interfaces__action__detail__robot_move__rosidl_typesupport_introspection_c__RobotMove_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)robo_cleaner_interfaces__action__detail__robot_move__rosidl_typesupport_introspection_c__RobotMove_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, action, RobotMove_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, action, RobotMove_SendGoal_Response)()->data;
  }

  return &robo_cleaner_interfaces__action__detail__robot_move__rosidl_typesupport_introspection_c__RobotMove_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "robo_cleaner_interfaces/action/detail/robot_move__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robo_cleaner_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robo_cleaner_interfaces/action/detail/robot_move__functions.h"
// already included above
// #include "robo_cleaner_interfaces/action/detail/robot_move__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RobotMove_GetResult_Request__rosidl_typesupport_introspection_c__RobotMove_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robo_cleaner_interfaces__action__RobotMove_GetResult_Request__init(message_memory);
}

void RobotMove_GetResult_Request__rosidl_typesupport_introspection_c__RobotMove_GetResult_Request_fini_function(void * message_memory)
{
  robo_cleaner_interfaces__action__RobotMove_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotMove_GetResult_Request__rosidl_typesupport_introspection_c__RobotMove_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_cleaner_interfaces__action__RobotMove_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotMove_GetResult_Request__rosidl_typesupport_introspection_c__RobotMove_GetResult_Request_message_members = {
  "robo_cleaner_interfaces__action",  // message namespace
  "RobotMove_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(robo_cleaner_interfaces__action__RobotMove_GetResult_Request),
  RobotMove_GetResult_Request__rosidl_typesupport_introspection_c__RobotMove_GetResult_Request_message_member_array,  // message members
  RobotMove_GetResult_Request__rosidl_typesupport_introspection_c__RobotMove_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotMove_GetResult_Request__rosidl_typesupport_introspection_c__RobotMove_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotMove_GetResult_Request__rosidl_typesupport_introspection_c__RobotMove_GetResult_Request_message_type_support_handle = {
  0,
  &RobotMove_GetResult_Request__rosidl_typesupport_introspection_c__RobotMove_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robo_cleaner_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, action, RobotMove_GetResult_Request)() {
  RobotMove_GetResult_Request__rosidl_typesupport_introspection_c__RobotMove_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!RobotMove_GetResult_Request__rosidl_typesupport_introspection_c__RobotMove_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    RobotMove_GetResult_Request__rosidl_typesupport_introspection_c__RobotMove_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotMove_GetResult_Request__rosidl_typesupport_introspection_c__RobotMove_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robo_cleaner_interfaces/action/detail/robot_move__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robo_cleaner_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robo_cleaner_interfaces/action/detail/robot_move__functions.h"
// already included above
// #include "robo_cleaner_interfaces/action/detail/robot_move__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "robo_cleaner_interfaces/action/robot_move.h"
// Member `result`
// already included above
// #include "robo_cleaner_interfaces/action/detail/robot_move__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RobotMove_GetResult_Response__rosidl_typesupport_introspection_c__RobotMove_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robo_cleaner_interfaces__action__RobotMove_GetResult_Response__init(message_memory);
}

void RobotMove_GetResult_Response__rosidl_typesupport_introspection_c__RobotMove_GetResult_Response_fini_function(void * message_memory)
{
  robo_cleaner_interfaces__action__RobotMove_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotMove_GetResult_Response__rosidl_typesupport_introspection_c__RobotMove_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_cleaner_interfaces__action__RobotMove_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_cleaner_interfaces__action__RobotMove_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotMove_GetResult_Response__rosidl_typesupport_introspection_c__RobotMove_GetResult_Response_message_members = {
  "robo_cleaner_interfaces__action",  // message namespace
  "RobotMove_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(robo_cleaner_interfaces__action__RobotMove_GetResult_Response),
  RobotMove_GetResult_Response__rosidl_typesupport_introspection_c__RobotMove_GetResult_Response_message_member_array,  // message members
  RobotMove_GetResult_Response__rosidl_typesupport_introspection_c__RobotMove_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotMove_GetResult_Response__rosidl_typesupport_introspection_c__RobotMove_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotMove_GetResult_Response__rosidl_typesupport_introspection_c__RobotMove_GetResult_Response_message_type_support_handle = {
  0,
  &RobotMove_GetResult_Response__rosidl_typesupport_introspection_c__RobotMove_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robo_cleaner_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, action, RobotMove_GetResult_Response)() {
  RobotMove_GetResult_Response__rosidl_typesupport_introspection_c__RobotMove_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, action, RobotMove_Result)();
  if (!RobotMove_GetResult_Response__rosidl_typesupport_introspection_c__RobotMove_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    RobotMove_GetResult_Response__rosidl_typesupport_introspection_c__RobotMove_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotMove_GetResult_Response__rosidl_typesupport_introspection_c__RobotMove_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robo_cleaner_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "robo_cleaner_interfaces/action/detail/robot_move__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers robo_cleaner_interfaces__action__detail__robot_move__rosidl_typesupport_introspection_c__RobotMove_GetResult_service_members = {
  "robo_cleaner_interfaces__action",  // service namespace
  "RobotMove_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // robo_cleaner_interfaces__action__detail__robot_move__rosidl_typesupport_introspection_c__RobotMove_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // robo_cleaner_interfaces__action__detail__robot_move__rosidl_typesupport_introspection_c__RobotMove_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t robo_cleaner_interfaces__action__detail__robot_move__rosidl_typesupport_introspection_c__RobotMove_GetResult_service_type_support_handle = {
  0,
  &robo_cleaner_interfaces__action__detail__robot_move__rosidl_typesupport_introspection_c__RobotMove_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, action, RobotMove_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, action, RobotMove_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robo_cleaner_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, action, RobotMove_GetResult)() {
  if (!robo_cleaner_interfaces__action__detail__robot_move__rosidl_typesupport_introspection_c__RobotMove_GetResult_service_type_support_handle.typesupport_identifier) {
    robo_cleaner_interfaces__action__detail__robot_move__rosidl_typesupport_introspection_c__RobotMove_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)robo_cleaner_interfaces__action__detail__robot_move__rosidl_typesupport_introspection_c__RobotMove_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, action, RobotMove_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, action, RobotMove_GetResult_Response)()->data;
  }

  return &robo_cleaner_interfaces__action__detail__robot_move__rosidl_typesupport_introspection_c__RobotMove_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "robo_cleaner_interfaces/action/detail/robot_move__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robo_cleaner_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robo_cleaner_interfaces/action/detail/robot_move__functions.h"
// already included above
// #include "robo_cleaner_interfaces/action/detail/robot_move__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "robo_cleaner_interfaces/action/robot_move.h"
// Member `feedback`
// already included above
// #include "robo_cleaner_interfaces/action/detail/robot_move__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RobotMove_FeedbackMessage__rosidl_typesupport_introspection_c__RobotMove_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__init(message_memory);
}

void RobotMove_FeedbackMessage__rosidl_typesupport_introspection_c__RobotMove_FeedbackMessage_fini_function(void * message_memory)
{
  robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotMove_FeedbackMessage__rosidl_typesupport_introspection_c__RobotMove_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_cleaner_interfaces__action__RobotMove_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_cleaner_interfaces__action__RobotMove_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotMove_FeedbackMessage__rosidl_typesupport_introspection_c__RobotMove_FeedbackMessage_message_members = {
  "robo_cleaner_interfaces__action",  // message namespace
  "RobotMove_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(robo_cleaner_interfaces__action__RobotMove_FeedbackMessage),
  RobotMove_FeedbackMessage__rosidl_typesupport_introspection_c__RobotMove_FeedbackMessage_message_member_array,  // message members
  RobotMove_FeedbackMessage__rosidl_typesupport_introspection_c__RobotMove_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotMove_FeedbackMessage__rosidl_typesupport_introspection_c__RobotMove_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotMove_FeedbackMessage__rosidl_typesupport_introspection_c__RobotMove_FeedbackMessage_message_type_support_handle = {
  0,
  &RobotMove_FeedbackMessage__rosidl_typesupport_introspection_c__RobotMove_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robo_cleaner_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, action, RobotMove_FeedbackMessage)() {
  RobotMove_FeedbackMessage__rosidl_typesupport_introspection_c__RobotMove_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  RobotMove_FeedbackMessage__rosidl_typesupport_introspection_c__RobotMove_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, action, RobotMove_Feedback)();
  if (!RobotMove_FeedbackMessage__rosidl_typesupport_introspection_c__RobotMove_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    RobotMove_FeedbackMessage__rosidl_typesupport_introspection_c__RobotMove_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotMove_FeedbackMessage__rosidl_typesupport_introspection_c__RobotMove_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
