// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robo_miner_interfaces:srv/FieldMapValidate.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robo_miner_interfaces/srv/detail/field_map_validate__rosidl_typesupport_introspection_c.h"
#include "robo_miner_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robo_miner_interfaces/srv/detail/field_map_validate__functions.h"
#include "robo_miner_interfaces/srv/detail/field_map_validate__struct.h"


// Include directives for member types
// Member `field_map`
#include "robo_miner_interfaces/msg/u_int8_multi_array.h"
// Member `field_map`
#include "robo_miner_interfaces/msg/detail/u_int8_multi_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FieldMapValidate_Request__rosidl_typesupport_introspection_c__FieldMapValidate_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robo_miner_interfaces__srv__FieldMapValidate_Request__init(message_memory);
}

void FieldMapValidate_Request__rosidl_typesupport_introspection_c__FieldMapValidate_Request_fini_function(void * message_memory)
{
  robo_miner_interfaces__srv__FieldMapValidate_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FieldMapValidate_Request__rosidl_typesupport_introspection_c__FieldMapValidate_Request_message_member_array[1] = {
  {
    "field_map",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_miner_interfaces__srv__FieldMapValidate_Request, field_map),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FieldMapValidate_Request__rosidl_typesupport_introspection_c__FieldMapValidate_Request_message_members = {
  "robo_miner_interfaces__srv",  // message namespace
  "FieldMapValidate_Request",  // message name
  1,  // number of fields
  sizeof(robo_miner_interfaces__srv__FieldMapValidate_Request),
  FieldMapValidate_Request__rosidl_typesupport_introspection_c__FieldMapValidate_Request_message_member_array,  // message members
  FieldMapValidate_Request__rosidl_typesupport_introspection_c__FieldMapValidate_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  FieldMapValidate_Request__rosidl_typesupport_introspection_c__FieldMapValidate_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FieldMapValidate_Request__rosidl_typesupport_introspection_c__FieldMapValidate_Request_message_type_support_handle = {
  0,
  &FieldMapValidate_Request__rosidl_typesupport_introspection_c__FieldMapValidate_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robo_miner_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_miner_interfaces, srv, FieldMapValidate_Request)() {
  FieldMapValidate_Request__rosidl_typesupport_introspection_c__FieldMapValidate_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_miner_interfaces, msg, UInt8MultiArray)();
  if (!FieldMapValidate_Request__rosidl_typesupport_introspection_c__FieldMapValidate_Request_message_type_support_handle.typesupport_identifier) {
    FieldMapValidate_Request__rosidl_typesupport_introspection_c__FieldMapValidate_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FieldMapValidate_Request__rosidl_typesupport_introspection_c__FieldMapValidate_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robo_miner_interfaces/srv/detail/field_map_validate__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robo_miner_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robo_miner_interfaces/srv/detail/field_map_validate__functions.h"
// already included above
// #include "robo_miner_interfaces/srv/detail/field_map_validate__struct.h"


// Include directives for member types
// Member `error_reason`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FieldMapValidate_Response__rosidl_typesupport_introspection_c__FieldMapValidate_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robo_miner_interfaces__srv__FieldMapValidate_Response__init(message_memory);
}

void FieldMapValidate_Response__rosidl_typesupport_introspection_c__FieldMapValidate_Response_fini_function(void * message_memory)
{
  robo_miner_interfaces__srv__FieldMapValidate_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FieldMapValidate_Response__rosidl_typesupport_introspection_c__FieldMapValidate_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_miner_interfaces__srv__FieldMapValidate_Response, success),  // bytes offset in struct
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
    offsetof(robo_miner_interfaces__srv__FieldMapValidate_Response, error_reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FieldMapValidate_Response__rosidl_typesupport_introspection_c__FieldMapValidate_Response_message_members = {
  "robo_miner_interfaces__srv",  // message namespace
  "FieldMapValidate_Response",  // message name
  2,  // number of fields
  sizeof(robo_miner_interfaces__srv__FieldMapValidate_Response),
  FieldMapValidate_Response__rosidl_typesupport_introspection_c__FieldMapValidate_Response_message_member_array,  // message members
  FieldMapValidate_Response__rosidl_typesupport_introspection_c__FieldMapValidate_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  FieldMapValidate_Response__rosidl_typesupport_introspection_c__FieldMapValidate_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FieldMapValidate_Response__rosidl_typesupport_introspection_c__FieldMapValidate_Response_message_type_support_handle = {
  0,
  &FieldMapValidate_Response__rosidl_typesupport_introspection_c__FieldMapValidate_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robo_miner_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_miner_interfaces, srv, FieldMapValidate_Response)() {
  if (!FieldMapValidate_Response__rosidl_typesupport_introspection_c__FieldMapValidate_Response_message_type_support_handle.typesupport_identifier) {
    FieldMapValidate_Response__rosidl_typesupport_introspection_c__FieldMapValidate_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FieldMapValidate_Response__rosidl_typesupport_introspection_c__FieldMapValidate_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robo_miner_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "robo_miner_interfaces/srv/detail/field_map_validate__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers robo_miner_interfaces__srv__detail__field_map_validate__rosidl_typesupport_introspection_c__FieldMapValidate_service_members = {
  "robo_miner_interfaces__srv",  // service namespace
  "FieldMapValidate",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // robo_miner_interfaces__srv__detail__field_map_validate__rosidl_typesupport_introspection_c__FieldMapValidate_Request_message_type_support_handle,
  NULL  // response message
  // robo_miner_interfaces__srv__detail__field_map_validate__rosidl_typesupport_introspection_c__FieldMapValidate_Response_message_type_support_handle
};

static rosidl_service_type_support_t robo_miner_interfaces__srv__detail__field_map_validate__rosidl_typesupport_introspection_c__FieldMapValidate_service_type_support_handle = {
  0,
  &robo_miner_interfaces__srv__detail__field_map_validate__rosidl_typesupport_introspection_c__FieldMapValidate_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_miner_interfaces, srv, FieldMapValidate_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_miner_interfaces, srv, FieldMapValidate_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robo_miner_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_miner_interfaces, srv, FieldMapValidate)() {
  if (!robo_miner_interfaces__srv__detail__field_map_validate__rosidl_typesupport_introspection_c__FieldMapValidate_service_type_support_handle.typesupport_identifier) {
    robo_miner_interfaces__srv__detail__field_map_validate__rosidl_typesupport_introspection_c__FieldMapValidate_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)robo_miner_interfaces__srv__detail__field_map_validate__rosidl_typesupport_introspection_c__FieldMapValidate_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_miner_interfaces, srv, FieldMapValidate_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_miner_interfaces, srv, FieldMapValidate_Response)()->data;
  }

  return &robo_miner_interfaces__srv__detail__field_map_validate__rosidl_typesupport_introspection_c__FieldMapValidate_service_type_support_handle;
}
