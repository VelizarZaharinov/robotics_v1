// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robo_miner_interfaces:srv/LongestSequenceValidate.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robo_miner_interfaces/srv/detail/longest_sequence_validate__rosidl_typesupport_introspection_c.h"
#include "robo_miner_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robo_miner_interfaces/srv/detail/longest_sequence_validate__functions.h"
#include "robo_miner_interfaces/srv/detail/longest_sequence_validate__struct.h"


// Include directives for member types
// Member `sequence_points`
#include "robo_miner_interfaces/msg/field_point.h"
// Member `sequence_points`
#include "robo_miner_interfaces/msg/detail/field_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LongestSequenceValidate_Request__rosidl_typesupport_introspection_c__LongestSequenceValidate_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robo_miner_interfaces__srv__LongestSequenceValidate_Request__init(message_memory);
}

void LongestSequenceValidate_Request__rosidl_typesupport_introspection_c__LongestSequenceValidate_Request_fini_function(void * message_memory)
{
  robo_miner_interfaces__srv__LongestSequenceValidate_Request__fini(message_memory);
}

size_t LongestSequenceValidate_Request__rosidl_typesupport_introspection_c__size_function__FieldPoint__sequence_points(
  const void * untyped_member)
{
  const robo_miner_interfaces__msg__FieldPoint__Sequence * member =
    (const robo_miner_interfaces__msg__FieldPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * LongestSequenceValidate_Request__rosidl_typesupport_introspection_c__get_const_function__FieldPoint__sequence_points(
  const void * untyped_member, size_t index)
{
  const robo_miner_interfaces__msg__FieldPoint__Sequence * member =
    (const robo_miner_interfaces__msg__FieldPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * LongestSequenceValidate_Request__rosidl_typesupport_introspection_c__get_function__FieldPoint__sequence_points(
  void * untyped_member, size_t index)
{
  robo_miner_interfaces__msg__FieldPoint__Sequence * member =
    (robo_miner_interfaces__msg__FieldPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

bool LongestSequenceValidate_Request__rosidl_typesupport_introspection_c__resize_function__FieldPoint__sequence_points(
  void * untyped_member, size_t size)
{
  robo_miner_interfaces__msg__FieldPoint__Sequence * member =
    (robo_miner_interfaces__msg__FieldPoint__Sequence *)(untyped_member);
  robo_miner_interfaces__msg__FieldPoint__Sequence__fini(member);
  return robo_miner_interfaces__msg__FieldPoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember LongestSequenceValidate_Request__rosidl_typesupport_introspection_c__LongestSequenceValidate_Request_message_member_array[1] = {
  {
    "sequence_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_miner_interfaces__srv__LongestSequenceValidate_Request, sequence_points),  // bytes offset in struct
    NULL,  // default value
    LongestSequenceValidate_Request__rosidl_typesupport_introspection_c__size_function__FieldPoint__sequence_points,  // size() function pointer
    LongestSequenceValidate_Request__rosidl_typesupport_introspection_c__get_const_function__FieldPoint__sequence_points,  // get_const(index) function pointer
    LongestSequenceValidate_Request__rosidl_typesupport_introspection_c__get_function__FieldPoint__sequence_points,  // get(index) function pointer
    LongestSequenceValidate_Request__rosidl_typesupport_introspection_c__resize_function__FieldPoint__sequence_points  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LongestSequenceValidate_Request__rosidl_typesupport_introspection_c__LongestSequenceValidate_Request_message_members = {
  "robo_miner_interfaces__srv",  // message namespace
  "LongestSequenceValidate_Request",  // message name
  1,  // number of fields
  sizeof(robo_miner_interfaces__srv__LongestSequenceValidate_Request),
  LongestSequenceValidate_Request__rosidl_typesupport_introspection_c__LongestSequenceValidate_Request_message_member_array,  // message members
  LongestSequenceValidate_Request__rosidl_typesupport_introspection_c__LongestSequenceValidate_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  LongestSequenceValidate_Request__rosidl_typesupport_introspection_c__LongestSequenceValidate_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LongestSequenceValidate_Request__rosidl_typesupport_introspection_c__LongestSequenceValidate_Request_message_type_support_handle = {
  0,
  &LongestSequenceValidate_Request__rosidl_typesupport_introspection_c__LongestSequenceValidate_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robo_miner_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_miner_interfaces, srv, LongestSequenceValidate_Request)() {
  LongestSequenceValidate_Request__rosidl_typesupport_introspection_c__LongestSequenceValidate_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_miner_interfaces, msg, FieldPoint)();
  if (!LongestSequenceValidate_Request__rosidl_typesupport_introspection_c__LongestSequenceValidate_Request_message_type_support_handle.typesupport_identifier) {
    LongestSequenceValidate_Request__rosidl_typesupport_introspection_c__LongestSequenceValidate_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LongestSequenceValidate_Request__rosidl_typesupport_introspection_c__LongestSequenceValidate_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robo_miner_interfaces/srv/detail/longest_sequence_validate__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robo_miner_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robo_miner_interfaces/srv/detail/longest_sequence_validate__functions.h"
// already included above
// #include "robo_miner_interfaces/srv/detail/longest_sequence_validate__struct.h"


// Include directives for member types
// Member `error_reason`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LongestSequenceValidate_Response__rosidl_typesupport_introspection_c__LongestSequenceValidate_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robo_miner_interfaces__srv__LongestSequenceValidate_Response__init(message_memory);
}

void LongestSequenceValidate_Response__rosidl_typesupport_introspection_c__LongestSequenceValidate_Response_fini_function(void * message_memory)
{
  robo_miner_interfaces__srv__LongestSequenceValidate_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LongestSequenceValidate_Response__rosidl_typesupport_introspection_c__LongestSequenceValidate_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_miner_interfaces__srv__LongestSequenceValidate_Response, success),  // bytes offset in struct
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
    offsetof(robo_miner_interfaces__srv__LongestSequenceValidate_Response, error_reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LongestSequenceValidate_Response__rosidl_typesupport_introspection_c__LongestSequenceValidate_Response_message_members = {
  "robo_miner_interfaces__srv",  // message namespace
  "LongestSequenceValidate_Response",  // message name
  2,  // number of fields
  sizeof(robo_miner_interfaces__srv__LongestSequenceValidate_Response),
  LongestSequenceValidate_Response__rosidl_typesupport_introspection_c__LongestSequenceValidate_Response_message_member_array,  // message members
  LongestSequenceValidate_Response__rosidl_typesupport_introspection_c__LongestSequenceValidate_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  LongestSequenceValidate_Response__rosidl_typesupport_introspection_c__LongestSequenceValidate_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LongestSequenceValidate_Response__rosidl_typesupport_introspection_c__LongestSequenceValidate_Response_message_type_support_handle = {
  0,
  &LongestSequenceValidate_Response__rosidl_typesupport_introspection_c__LongestSequenceValidate_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robo_miner_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_miner_interfaces, srv, LongestSequenceValidate_Response)() {
  if (!LongestSequenceValidate_Response__rosidl_typesupport_introspection_c__LongestSequenceValidate_Response_message_type_support_handle.typesupport_identifier) {
    LongestSequenceValidate_Response__rosidl_typesupport_introspection_c__LongestSequenceValidate_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LongestSequenceValidate_Response__rosidl_typesupport_introspection_c__LongestSequenceValidate_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robo_miner_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "robo_miner_interfaces/srv/detail/longest_sequence_validate__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers robo_miner_interfaces__srv__detail__longest_sequence_validate__rosidl_typesupport_introspection_c__LongestSequenceValidate_service_members = {
  "robo_miner_interfaces__srv",  // service namespace
  "LongestSequenceValidate",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // robo_miner_interfaces__srv__detail__longest_sequence_validate__rosidl_typesupport_introspection_c__LongestSequenceValidate_Request_message_type_support_handle,
  NULL  // response message
  // robo_miner_interfaces__srv__detail__longest_sequence_validate__rosidl_typesupport_introspection_c__LongestSequenceValidate_Response_message_type_support_handle
};

static rosidl_service_type_support_t robo_miner_interfaces__srv__detail__longest_sequence_validate__rosidl_typesupport_introspection_c__LongestSequenceValidate_service_type_support_handle = {
  0,
  &robo_miner_interfaces__srv__detail__longest_sequence_validate__rosidl_typesupport_introspection_c__LongestSequenceValidate_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_miner_interfaces, srv, LongestSequenceValidate_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_miner_interfaces, srv, LongestSequenceValidate_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robo_miner_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_miner_interfaces, srv, LongestSequenceValidate)() {
  if (!robo_miner_interfaces__srv__detail__longest_sequence_validate__rosidl_typesupport_introspection_c__LongestSequenceValidate_service_type_support_handle.typesupport_identifier) {
    robo_miner_interfaces__srv__detail__longest_sequence_validate__rosidl_typesupport_introspection_c__LongestSequenceValidate_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)robo_miner_interfaces__srv__detail__longest_sequence_validate__rosidl_typesupport_introspection_c__LongestSequenceValidate_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_miner_interfaces, srv, LongestSequenceValidate_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robo_miner_interfaces, srv, LongestSequenceValidate_Response)()->data;
  }

  return &robo_miner_interfaces__srv__detail__longest_sequence_validate__rosidl_typesupport_introspection_c__LongestSequenceValidate_service_type_support_handle;
}
