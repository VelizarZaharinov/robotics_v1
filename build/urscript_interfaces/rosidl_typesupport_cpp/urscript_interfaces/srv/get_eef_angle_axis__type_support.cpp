// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from urscript_interfaces:srv/GetEefAngleAxis.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "urscript_interfaces/srv/detail/get_eef_angle_axis__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace urscript_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetEefAngleAxis_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetEefAngleAxis_Request_type_support_ids_t;

static const _GetEefAngleAxis_Request_type_support_ids_t _GetEefAngleAxis_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetEefAngleAxis_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetEefAngleAxis_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetEefAngleAxis_Request_type_support_symbol_names_t _GetEefAngleAxis_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, urscript_interfaces, srv, GetEefAngleAxis_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, urscript_interfaces, srv, GetEefAngleAxis_Request)),
  }
};

typedef struct _GetEefAngleAxis_Request_type_support_data_t
{
  void * data[2];
} _GetEefAngleAxis_Request_type_support_data_t;

static _GetEefAngleAxis_Request_type_support_data_t _GetEefAngleAxis_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetEefAngleAxis_Request_message_typesupport_map = {
  2,
  "urscript_interfaces",
  &_GetEefAngleAxis_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetEefAngleAxis_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetEefAngleAxis_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetEefAngleAxis_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetEefAngleAxis_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace urscript_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<urscript_interfaces::srv::GetEefAngleAxis_Request>()
{
  return &::urscript_interfaces::srv::rosidl_typesupport_cpp::GetEefAngleAxis_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, urscript_interfaces, srv, GetEefAngleAxis_Request)() {
  return get_message_type_support_handle<urscript_interfaces::srv::GetEefAngleAxis_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "urscript_interfaces/srv/detail/get_eef_angle_axis__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace urscript_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetEefAngleAxis_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetEefAngleAxis_Response_type_support_ids_t;

static const _GetEefAngleAxis_Response_type_support_ids_t _GetEefAngleAxis_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetEefAngleAxis_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetEefAngleAxis_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetEefAngleAxis_Response_type_support_symbol_names_t _GetEefAngleAxis_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, urscript_interfaces, srv, GetEefAngleAxis_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, urscript_interfaces, srv, GetEefAngleAxis_Response)),
  }
};

typedef struct _GetEefAngleAxis_Response_type_support_data_t
{
  void * data[2];
} _GetEefAngleAxis_Response_type_support_data_t;

static _GetEefAngleAxis_Response_type_support_data_t _GetEefAngleAxis_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetEefAngleAxis_Response_message_typesupport_map = {
  2,
  "urscript_interfaces",
  &_GetEefAngleAxis_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetEefAngleAxis_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetEefAngleAxis_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetEefAngleAxis_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetEefAngleAxis_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace urscript_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<urscript_interfaces::srv::GetEefAngleAxis_Response>()
{
  return &::urscript_interfaces::srv::rosidl_typesupport_cpp::GetEefAngleAxis_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, urscript_interfaces, srv, GetEefAngleAxis_Response)() {
  return get_message_type_support_handle<urscript_interfaces::srv::GetEefAngleAxis_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "urscript_interfaces/srv/detail/get_eef_angle_axis__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace urscript_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetEefAngleAxis_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetEefAngleAxis_type_support_ids_t;

static const _GetEefAngleAxis_type_support_ids_t _GetEefAngleAxis_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetEefAngleAxis_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetEefAngleAxis_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetEefAngleAxis_type_support_symbol_names_t _GetEefAngleAxis_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, urscript_interfaces, srv, GetEefAngleAxis)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, urscript_interfaces, srv, GetEefAngleAxis)),
  }
};

typedef struct _GetEefAngleAxis_type_support_data_t
{
  void * data[2];
} _GetEefAngleAxis_type_support_data_t;

static _GetEefAngleAxis_type_support_data_t _GetEefAngleAxis_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetEefAngleAxis_service_typesupport_map = {
  2,
  "urscript_interfaces",
  &_GetEefAngleAxis_service_typesupport_ids.typesupport_identifier[0],
  &_GetEefAngleAxis_service_typesupport_symbol_names.symbol_name[0],
  &_GetEefAngleAxis_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetEefAngleAxis_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetEefAngleAxis_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace urscript_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<urscript_interfaces::srv::GetEefAngleAxis>()
{
  return &::urscript_interfaces::srv::rosidl_typesupport_cpp::GetEefAngleAxis_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
