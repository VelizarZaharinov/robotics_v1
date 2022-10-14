// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robo_cleaner_interfaces:srv/QueryBatteryStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robo_cleaner_interfaces/srv/detail/query_battery_status__rosidl_typesupport_introspection_c.h"
#include "robo_cleaner_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robo_cleaner_interfaces/srv/detail/query_battery_status__functions.h"
#include "robo_cleaner_interfaces/srv/detail/query_battery_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void QueryBatteryStatus_Request__rosidl_typesupport_introspection_c__QueryBatteryStatus_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robo_cleaner_interfaces__srv__QueryBatteryStatus_Request__init(message_memory);
}

void QueryBatteryStatus_Request__rosidl_typesupport_introspection_c__QueryBatteryStatus_Request_fini_function(void * message_memory)
{
  robo_cleaner_interfaces__srv__QueryBatteryStatus_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember QueryBatteryStatus_Request__rosidl_typesupport_introspection_c__QueryBatteryStatus_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_cleaner_interfaces__srv__QueryBatteryStatus_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers QueryBatteryStatus_Request__rosidl_typesupport_introspection_c__QueryBatteryStatus_Request_message_members = {
  "robo_cleaner_interfaces__srv",  // message namespace
  "QueryBatteryStatus_Request",  // message name
  1,  // number of fields
  sizeof(robo_cleaner_interfaces__srv__QueryBatteryStatus_Request),
  QueryBatteryStatus_Request__rosidl_typesupport_introspection_c__QueryBatteryStatus_Request_message_member_array,  // message members
  QueryBatteryStatus_Request__rosidl_typesupport_introspection_c__QueryBatteryStatus_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  QueryBatteryStatus_Request__rosidl_typesupport_introspection_c__QueryBatteryStatus_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t QueryBatteryStatus_Request__rosidl_typesupport_introspection_c__QueryBatteryStatus_Request_message_type_support_handle = {
  0,
  &QueryBatteryStatus_Request__rosidl_typesupport_introspection_c__QueryBatteryStatus_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robo_cleaner_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, srv, QueryBatteryStatus_Request)() {
  if (!QueryBatteryStatus_Request__rosidl_typesupport_introspection_c__QueryBatteryStatus_Request_message_type_support_handle.typesupport_identifier) {
    QueryBatteryStatus_Request__rosidl_typesupport_introspection_c__QueryBatteryStatus_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &QueryBatteryStatus_Request__rosidl_typesupport_introspection_c__QueryBatteryStatus_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robo_cleaner_interfaces/srv/detail/query_battery_status__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robo_cleaner_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robo_cleaner_interfaces/srv/detail/query_battery_status__functions.h"
// already included above
// #include "robo_cleaner_interfaces/srv/detail/query_battery_status__struct.h"


// Include directives for member types
// Member `battery_status`
#include "robo_cleaner_interfaces/msg/battery_status.h"
// Member `battery_status`
#include "robo_cleaner_interfaces/msg/detail/battery_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void QueryBatteryStatus_Response__rosidl_typesupport_introspection_c__QueryBatteryStatus_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robo_cleaner_interfaces__srv__QueryBatteryStatus_Response__init(message_memory);
}

void QueryBatteryStatus_Response__rosidl_typesupport_introspection_c__QueryBatteryStatus_Response_fini_function(void * message_memory)
{
  robo_cleaner_interfaces__srv__QueryBatteryStatus_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember QueryBatteryStatus_Response__rosidl_typesupport_introspection_c__QueryBatteryStatus_Response_message_member_array[1] = {
  {
    "battery_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_cleaner_interfaces__srv__QueryBatteryStatus_Response, battery_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers QueryBatteryStatus_Response__rosidl_typesupport_introspection_c__QueryBatteryStatus_Response_message_members = {
  "robo_cleaner_interfaces__srv",  // message namespace
  "QueryBatteryStatus_Response",  // message name
  1,  // number of fields
  sizeof(robo_cleaner_interfaces__srv__QueryBatteryStatus_Response),
  QueryBatteryStatus_Response__rosidl_typesupport_introspection_c__QueryBatteryStatus_Response_message_member_array,  // message members
  QueryBatteryStatus_Response__rosidl_typesupport_introspection_c__QueryBatteryStatus_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  QueryBatteryStatus_Response__rosidl_typesupport_introspection_c__QueryBatteryStatus_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t QueryBatteryStatus_Response__rosidl_typesupport_introspection_c__QueryBatteryStatus_Response_message_type_support_handle = {
  0,
  &QueryBatteryStatus_Response__rosidl_typesupport_introspection_c__QueryBatteryStatus_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robo_cleaner_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, srv, QueryBatteryStatus_Response)() {
  QueryBatteryStatus_Response__rosidl_typesupport_introspection_c__QueryBatteryStatus_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, msg, BatteryStatus)();
  if (!QueryBatteryStatus_Response__rosidl_typesupport_introspection_c__QueryBatteryStatus_Response_message_type_support_handle.typesupport_identifier) {
    QueryBatteryStatus_Response__rosidl_typesupport_introspection_c__QueryBatteryStatus_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &QueryBatteryStatus_Response__rosidl_typesupport_introspection_c__QueryBatteryStatus_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robo_cleaner_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "robo_cleaner_interfaces/srv/detail/query_battery_status__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers robo_cleaner_interfaces__srv__detail__query_battery_status__rosidl_typesupport_introspection_c__QueryBatteryStatus_service_members = {
  "robo_cleaner_interfaces__srv",  // service namespace
  "QueryBatteryStatus",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // robo_cleaner_interfaces__srv__detail__query_battery_status__rosidl_typesupport_introspection_c__QueryBatteryStatus_Request_message_type_support_handle,
  NULL  // response message
  // robo_cleaner_interfaces__srv__detail__query_battery_status__rosidl_typesupport_introspection_c__QueryBatteryStatus_Response_message_type_support_handle
};

static rosidl_service_type_support_t robo_cleaner_interfaces__srv__detail__query_battery_status__rosidl_typesupport_introspection_c__QueryBatteryStatus_service_type_support_handle = {
  0,
  &robo_cleaner_interfaces__srv__detail__query_battery_status__rosidl_typesupport_introspection_c__QueryBatteryStatus_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, srv, QueryBatteryStatus_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, srv, QueryBatteryStatus_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robo_cleaner_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, srv, QueryBatteryStatus)() {
  if (!robo_cleaner_interfaces__srv__detail__query_battery_status__rosidl_typesupport_introspection_c__QueryBatteryStatus_service_type_support_handle.typesupport_identifier) {
    robo_cleaner_interfaces__srv__detail__query_battery_status__rosidl_typesupport_introspection_c__QueryBatteryStatus_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)robo_cleaner_interfaces__srv__detail__query_battery_status__rosidl_typesupport_introspection_c__QueryBatteryStatus_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, srv, QueryBatteryStatus_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_cleaner_interfaces, srv, QueryBatteryStatus_Response)()->data;
  }

  return &robo_cleaner_interfaces__srv__detail__query_battery_status__rosidl_typesupport_introspection_c__QueryBatteryStatus_service_type_support_handle;
}
