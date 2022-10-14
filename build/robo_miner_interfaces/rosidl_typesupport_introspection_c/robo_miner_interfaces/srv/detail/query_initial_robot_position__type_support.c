// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robo_miner_interfaces:srv/QueryInitialRobotPosition.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robo_miner_interfaces/srv/detail/query_initial_robot_position__rosidl_typesupport_introspection_c.h"
#include "robo_miner_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robo_miner_interfaces/srv/detail/query_initial_robot_position__functions.h"
#include "robo_miner_interfaces/srv/detail/query_initial_robot_position__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void QueryInitialRobotPosition_Request__rosidl_typesupport_introspection_c__QueryInitialRobotPosition_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robo_miner_interfaces__srv__QueryInitialRobotPosition_Request__init(message_memory);
}

void QueryInitialRobotPosition_Request__rosidl_typesupport_introspection_c__QueryInitialRobotPosition_Request_fini_function(void * message_memory)
{
  robo_miner_interfaces__srv__QueryInitialRobotPosition_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember QueryInitialRobotPosition_Request__rosidl_typesupport_introspection_c__QueryInitialRobotPosition_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_miner_interfaces__srv__QueryInitialRobotPosition_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers QueryInitialRobotPosition_Request__rosidl_typesupport_introspection_c__QueryInitialRobotPosition_Request_message_members = {
  "robo_miner_interfaces__srv",  // message namespace
  "QueryInitialRobotPosition_Request",  // message name
  1,  // number of fields
  sizeof(robo_miner_interfaces__srv__QueryInitialRobotPosition_Request),
  QueryInitialRobotPosition_Request__rosidl_typesupport_introspection_c__QueryInitialRobotPosition_Request_message_member_array,  // message members
  QueryInitialRobotPosition_Request__rosidl_typesupport_introspection_c__QueryInitialRobotPosition_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  QueryInitialRobotPosition_Request__rosidl_typesupport_introspection_c__QueryInitialRobotPosition_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t QueryInitialRobotPosition_Request__rosidl_typesupport_introspection_c__QueryInitialRobotPosition_Request_message_type_support_handle = {
  0,
  &QueryInitialRobotPosition_Request__rosidl_typesupport_introspection_c__QueryInitialRobotPosition_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robo_miner_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_miner_interfaces, srv, QueryInitialRobotPosition_Request)() {
  if (!QueryInitialRobotPosition_Request__rosidl_typesupport_introspection_c__QueryInitialRobotPosition_Request_message_type_support_handle.typesupport_identifier) {
    QueryInitialRobotPosition_Request__rosidl_typesupport_introspection_c__QueryInitialRobotPosition_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &QueryInitialRobotPosition_Request__rosidl_typesupport_introspection_c__QueryInitialRobotPosition_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robo_miner_interfaces/srv/detail/query_initial_robot_position__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robo_miner_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robo_miner_interfaces/srv/detail/query_initial_robot_position__functions.h"
// already included above
// #include "robo_miner_interfaces/srv/detail/query_initial_robot_position__struct.h"


// Include directives for member types
// Member `robot_position_response`
#include "robo_miner_interfaces/msg/robot_position_response.h"
// Member `robot_position_response`
#include "robo_miner_interfaces/msg/detail/robot_position_response__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void QueryInitialRobotPosition_Response__rosidl_typesupport_introspection_c__QueryInitialRobotPosition_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robo_miner_interfaces__srv__QueryInitialRobotPosition_Response__init(message_memory);
}

void QueryInitialRobotPosition_Response__rosidl_typesupport_introspection_c__QueryInitialRobotPosition_Response_fini_function(void * message_memory)
{
  robo_miner_interfaces__srv__QueryInitialRobotPosition_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember QueryInitialRobotPosition_Response__rosidl_typesupport_introspection_c__QueryInitialRobotPosition_Response_message_member_array[2] = {
  {
    "robot_position_response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_miner_interfaces__srv__QueryInitialRobotPosition_Response, robot_position_response),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_initial_tile",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_miner_interfaces__srv__QueryInitialRobotPosition_Response, robot_initial_tile),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers QueryInitialRobotPosition_Response__rosidl_typesupport_introspection_c__QueryInitialRobotPosition_Response_message_members = {
  "robo_miner_interfaces__srv",  // message namespace
  "QueryInitialRobotPosition_Response",  // message name
  2,  // number of fields
  sizeof(robo_miner_interfaces__srv__QueryInitialRobotPosition_Response),
  QueryInitialRobotPosition_Response__rosidl_typesupport_introspection_c__QueryInitialRobotPosition_Response_message_member_array,  // message members
  QueryInitialRobotPosition_Response__rosidl_typesupport_introspection_c__QueryInitialRobotPosition_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  QueryInitialRobotPosition_Response__rosidl_typesupport_introspection_c__QueryInitialRobotPosition_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t QueryInitialRobotPosition_Response__rosidl_typesupport_introspection_c__QueryInitialRobotPosition_Response_message_type_support_handle = {
  0,
  &QueryInitialRobotPosition_Response__rosidl_typesupport_introspection_c__QueryInitialRobotPosition_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robo_miner_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_miner_interfaces, srv, QueryInitialRobotPosition_Response)() {
  QueryInitialRobotPosition_Response__rosidl_typesupport_introspection_c__QueryInitialRobotPosition_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_miner_interfaces, msg, RobotPositionResponse)();
  if (!QueryInitialRobotPosition_Response__rosidl_typesupport_introspection_c__QueryInitialRobotPosition_Response_message_type_support_handle.typesupport_identifier) {
    QueryInitialRobotPosition_Response__rosidl_typesupport_introspection_c__QueryInitialRobotPosition_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &QueryInitialRobotPosition_Response__rosidl_typesupport_introspection_c__QueryInitialRobotPosition_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robo_miner_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "robo_miner_interfaces/srv/detail/query_initial_robot_position__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers robo_miner_interfaces__srv__detail__query_initial_robot_position__rosidl_typesupport_introspection_c__QueryInitialRobotPosition_service_members = {
  "robo_miner_interfaces__srv",  // service namespace
  "QueryInitialRobotPosition",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // robo_miner_interfaces__srv__detail__query_initial_robot_position__rosidl_typesupport_introspection_c__QueryInitialRobotPosition_Request_message_type_support_handle,
  NULL  // response message
  // robo_miner_interfaces__srv__detail__query_initial_robot_position__rosidl_typesupport_introspection_c__QueryInitialRobotPosition_Response_message_type_support_handle
};

static rosidl_service_type_support_t robo_miner_interfaces__srv__detail__query_initial_robot_position__rosidl_typesupport_introspection_c__QueryInitialRobotPosition_service_type_support_handle = {
  0,
  &robo_miner_interfaces__srv__detail__query_initial_robot_position__rosidl_typesupport_introspection_c__QueryInitialRobotPosition_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_miner_interfaces, srv, QueryInitialRobotPosition_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_miner_interfaces, srv, QueryInitialRobotPosition_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robo_miner_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_miner_interfaces, srv, QueryInitialRobotPosition)() {
  if (!robo_miner_interfaces__srv__detail__query_initial_robot_position__rosidl_typesupport_introspection_c__QueryInitialRobotPosition_service_type_support_handle.typesupport_identifier) {
    robo_miner_interfaces__srv__detail__query_initial_robot_position__rosidl_typesupport_introspection_c__QueryInitialRobotPosition_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)robo_miner_interfaces__srv__detail__query_initial_robot_position__rosidl_typesupport_introspection_c__QueryInitialRobotPosition_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_miner_interfaces, srv, QueryInitialRobotPosition_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_miner_interfaces, srv, QueryInitialRobotPosition_Response)()->data;
  }

  return &robo_miner_interfaces__srv__detail__query_initial_robot_position__rosidl_typesupport_introspection_c__QueryInitialRobotPosition_service_type_support_handle;
}
