// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from urscript_interfaces:srv/UrScript.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "urscript_interfaces/srv/detail/ur_script__rosidl_typesupport_introspection_c.h"
#include "urscript_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "urscript_interfaces/srv/detail/ur_script__functions.h"
#include "urscript_interfaces/srv/detail/ur_script__struct.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void UrScript_Request__rosidl_typesupport_introspection_c__UrScript_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  urscript_interfaces__srv__UrScript_Request__init(message_memory);
}

void UrScript_Request__rosidl_typesupport_introspection_c__UrScript_Request_fini_function(void * message_memory)
{
  urscript_interfaces__srv__UrScript_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember UrScript_Request__rosidl_typesupport_introspection_c__UrScript_Request_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(urscript_interfaces__srv__UrScript_Request, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers UrScript_Request__rosidl_typesupport_introspection_c__UrScript_Request_message_members = {
  "urscript_interfaces__srv",  // message namespace
  "UrScript_Request",  // message name
  1,  // number of fields
  sizeof(urscript_interfaces__srv__UrScript_Request),
  UrScript_Request__rosidl_typesupport_introspection_c__UrScript_Request_message_member_array,  // message members
  UrScript_Request__rosidl_typesupport_introspection_c__UrScript_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  UrScript_Request__rosidl_typesupport_introspection_c__UrScript_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t UrScript_Request__rosidl_typesupport_introspection_c__UrScript_Request_message_type_support_handle = {
  0,
  &UrScript_Request__rosidl_typesupport_introspection_c__UrScript_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_urscript_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, urscript_interfaces, srv, UrScript_Request)() {
  if (!UrScript_Request__rosidl_typesupport_introspection_c__UrScript_Request_message_type_support_handle.typesupport_identifier) {
    UrScript_Request__rosidl_typesupport_introspection_c__UrScript_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &UrScript_Request__rosidl_typesupport_introspection_c__UrScript_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "urscript_interfaces/srv/detail/ur_script__rosidl_typesupport_introspection_c.h"
// already included above
// #include "urscript_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "urscript_interfaces/srv/detail/ur_script__functions.h"
// already included above
// #include "urscript_interfaces/srv/detail/ur_script__struct.h"


// Include directives for member types
// Member `error_reason`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void UrScript_Response__rosidl_typesupport_introspection_c__UrScript_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  urscript_interfaces__srv__UrScript_Response__init(message_memory);
}

void UrScript_Response__rosidl_typesupport_introspection_c__UrScript_Response_fini_function(void * message_memory)
{
  urscript_interfaces__srv__UrScript_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember UrScript_Response__rosidl_typesupport_introspection_c__UrScript_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(urscript_interfaces__srv__UrScript_Response, success),  // bytes offset in struct
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
    offsetof(urscript_interfaces__srv__UrScript_Response, error_reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers UrScript_Response__rosidl_typesupport_introspection_c__UrScript_Response_message_members = {
  "urscript_interfaces__srv",  // message namespace
  "UrScript_Response",  // message name
  2,  // number of fields
  sizeof(urscript_interfaces__srv__UrScript_Response),
  UrScript_Response__rosidl_typesupport_introspection_c__UrScript_Response_message_member_array,  // message members
  UrScript_Response__rosidl_typesupport_introspection_c__UrScript_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  UrScript_Response__rosidl_typesupport_introspection_c__UrScript_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t UrScript_Response__rosidl_typesupport_introspection_c__UrScript_Response_message_type_support_handle = {
  0,
  &UrScript_Response__rosidl_typesupport_introspection_c__UrScript_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_urscript_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, urscript_interfaces, srv, UrScript_Response)() {
  if (!UrScript_Response__rosidl_typesupport_introspection_c__UrScript_Response_message_type_support_handle.typesupport_identifier) {
    UrScript_Response__rosidl_typesupport_introspection_c__UrScript_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &UrScript_Response__rosidl_typesupport_introspection_c__UrScript_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "urscript_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "urscript_interfaces/srv/detail/ur_script__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers urscript_interfaces__srv__detail__ur_script__rosidl_typesupport_introspection_c__UrScript_service_members = {
  "urscript_interfaces__srv",  // service namespace
  "UrScript",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // urscript_interfaces__srv__detail__ur_script__rosidl_typesupport_introspection_c__UrScript_Request_message_type_support_handle,
  NULL  // response message
  // urscript_interfaces__srv__detail__ur_script__rosidl_typesupport_introspection_c__UrScript_Response_message_type_support_handle
};

static rosidl_service_type_support_t urscript_interfaces__srv__detail__ur_script__rosidl_typesupport_introspection_c__UrScript_service_type_support_handle = {
  0,
  &urscript_interfaces__srv__detail__ur_script__rosidl_typesupport_introspection_c__UrScript_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, urscript_interfaces, srv, UrScript_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, urscript_interfaces, srv, UrScript_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_urscript_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, urscript_interfaces, srv, UrScript)() {
  if (!urscript_interfaces__srv__detail__ur_script__rosidl_typesupport_introspection_c__UrScript_service_type_support_handle.typesupport_identifier) {
    urscript_interfaces__srv__detail__ur_script__rosidl_typesupport_introspection_c__UrScript_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)urscript_interfaces__srv__detail__ur_script__rosidl_typesupport_introspection_c__UrScript_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, urscript_interfaces, srv, UrScript_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, urscript_interfaces, srv, UrScript_Response)()->data;
  }

  return &urscript_interfaces__srv__detail__ur_script__rosidl_typesupport_introspection_c__UrScript_service_type_support_handle;
}
