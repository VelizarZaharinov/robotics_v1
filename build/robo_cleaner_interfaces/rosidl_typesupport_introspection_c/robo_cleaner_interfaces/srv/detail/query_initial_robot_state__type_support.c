// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robo_cleaner_interfaces:srv/QueryInitialRobotState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robo_cleaner_interfaces/srv/detail/query_initial_robot_state__rosidl_typesupport_introspection_c.h"
#include "robo_cleaner_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robo_cleaner_interfaces/srv/detail/query_initial_robot_state__functions.h"
#include "robo_cleaner_interfaces/srv/detail/query_initial_robot_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void QueryInitialRobotState_Request__rosidl_typesupport_introspection_c__QueryInitialRobotState_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robo_cleaner_interfaces__srv__QueryInitialRobotState_Request__init(message_memory);
}

void QueryInitialRobotState_Request__rosidl_typesupport_introspection_c__QueryInitialRobotState_Request_fini_function(void * message_memory)
{
  robo_cleaner_interfaces__srv__QueryInitialRobotState_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember QueryInitialRobotState_Request__rosidl_typesupport_introspection_c__QueryInitialRobotState_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_cleaner_interfaces__srv__QueryInitialRobotState_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers QueryInitialRobotState_Request__rosidl_typesupport_introspection_c__QueryInitialRobotState_Request_message_members = {
  "robo_cleaner_interfaces__srv",  // message namespace
  "QueryInitialRobotState_Request",  // message name
  1,  // number of fields
  sizeof(robo_cleaner_interfaces__srv__QueryInitialRobotState_Request),
  QueryInitialRobotState_Request__rosidl_typesupport_introspection_c__QueryInitialRobotState_Request_message_member_array,  // message members
  QueryInitialRobotState_Request__rosidl_typesupport_introspection_c__QueryInitialRobotState_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  QueryInitialRobotState_Request__rosidl_typesupport_introspection_c__QueryInitialRobotState_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t QueryInitialRobotState_Request__rosidl_typesupport_introspection_c__QueryInitialRobotState_Request_message_type_support_handle = {
  0,
  &QueryInitialRobotState_Request__rosidl_typesupport_introspection_c__QueryInitialRobotState_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robo_cleaner_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, srv, QueryInitialRobotState_Request)() {
  if (!QueryInitialRobotState_Request__rosidl_typesupport_introspection_c__QueryInitialRobotState_Request_message_type_support_handle.typesupport_identifier) {
    QueryInitialRobotState_Request__rosidl_typesupport_introspection_c__QueryInitialRobotState_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &QueryInitialRobotState_Request__rosidl_typesupport_introspection_c__QueryInitialRobotState_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robo_cleaner_interfaces/srv/detail/query_initial_robot_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robo_cleaner_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robo_cleaner_interfaces/srv/detail/query_initial_robot_state__functions.h"
// already included above
// #include "robo_cleaner_interfaces/srv/detail/query_initial_robot_state__struct.h"


// Include directives for member types
// Member `error_reason`
#include "rosidl_runtime_c/string_functions.h"
// Member `initial_robot_state`
#include "robo_cleaner_interfaces/msg/initial_robot_state.h"
// Member `initial_robot_state`
#include "robo_cleaner_interfaces/msg/detail/initial_robot_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void QueryInitialRobotState_Response__rosidl_typesupport_introspection_c__QueryInitialRobotState_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robo_cleaner_interfaces__srv__QueryInitialRobotState_Response__init(message_memory);
}

void QueryInitialRobotState_Response__rosidl_typesupport_introspection_c__QueryInitialRobotState_Response_fini_function(void * message_memory)
{
  robo_cleaner_interfaces__srv__QueryInitialRobotState_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember QueryInitialRobotState_Response__rosidl_typesupport_introspection_c__QueryInitialRobotState_Response_message_member_array[3] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_cleaner_interfaces__srv__QueryInitialRobotState_Response, success),  // bytes offset in struct
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
    offsetof(robo_cleaner_interfaces__srv__QueryInitialRobotState_Response, error_reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "initial_robot_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_cleaner_interfaces__srv__QueryInitialRobotState_Response, initial_robot_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers QueryInitialRobotState_Response__rosidl_typesupport_introspection_c__QueryInitialRobotState_Response_message_members = {
  "robo_cleaner_interfaces__srv",  // message namespace
  "QueryInitialRobotState_Response",  // message name
  3,  // number of fields
  sizeof(robo_cleaner_interfaces__srv__QueryInitialRobotState_Response),
  QueryInitialRobotState_Response__rosidl_typesupport_introspection_c__QueryInitialRobotState_Response_message_member_array,  // message members
  QueryInitialRobotState_Response__rosidl_typesupport_introspection_c__QueryInitialRobotState_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  QueryInitialRobotState_Response__rosidl_typesupport_introspection_c__QueryInitialRobotState_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t QueryInitialRobotState_Response__rosidl_typesupport_introspection_c__QueryInitialRobotState_Response_message_type_support_handle = {
  0,
  &QueryInitialRobotState_Response__rosidl_typesupport_introspection_c__QueryInitialRobotState_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robo_cleaner_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, srv, QueryInitialRobotState_Response)() {
  QueryInitialRobotState_Response__rosidl_typesupport_introspection_c__QueryInitialRobotState_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, msg, InitialRobotState)();
  if (!QueryInitialRobotState_Response__rosidl_typesupport_introspection_c__QueryInitialRobotState_Response_message_type_support_handle.typesupport_identifier) {
    QueryInitialRobotState_Response__rosidl_typesupport_introspection_c__QueryInitialRobotState_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &QueryInitialRobotState_Response__rosidl_typesupport_introspection_c__QueryInitialRobotState_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robo_cleaner_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "robo_cleaner_interfaces/srv/detail/query_initial_robot_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers robo_cleaner_interfaces__srv__detail__query_initial_robot_state__rosidl_typesupport_introspection_c__QueryInitialRobotState_service_members = {
  "robo_cleaner_interfaces__srv",  // service namespace
  "QueryInitialRobotState",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // robo_cleaner_interfaces__srv__detail__query_initial_robot_state__rosidl_typesupport_introspection_c__QueryInitialRobotState_Request_message_type_support_handle,
  NULL  // response message
  // robo_cleaner_interfaces__srv__detail__query_initial_robot_state__rosidl_typesupport_introspection_c__QueryInitialRobotState_Response_message_type_support_handle
};

static rosidl_service_type_support_t robo_cleaner_interfaces__srv__detail__query_initial_robot_state__rosidl_typesupport_introspection_c__QueryInitialRobotState_service_type_support_handle = {
  0,
  &robo_cleaner_interfaces__srv__detail__query_initial_robot_state__rosidl_typesupport_introspection_c__QueryInitialRobotState_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, srv, QueryInitialRobotState_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, srv, QueryInitialRobotState_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robo_cleaner_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, srv, QueryInitialRobotState)() {
  if (!robo_cleaner_interfaces__srv__detail__query_initial_robot_state__rosidl_typesupport_introspection_c__QueryInitialRobotState_service_type_support_handle.typesupport_identifier) {
    robo_cleaner_interfaces__srv__detail__query_initial_robot_state__rosidl_typesupport_introspection_c__QueryInitialRobotState_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)robo_cleaner_interfaces__srv__detail__query_initial_robot_state__rosidl_typesupport_introspection_c__QueryInitialRobotState_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, srv, QueryInitialRobotState_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, srv, QueryInitialRobotState_Response)()->data;
  }

  return &robo_cleaner_interfaces__srv__detail__query_initial_robot_state__rosidl_typesupport_introspection_c__QueryInitialRobotState_service_type_support_handle;
}
