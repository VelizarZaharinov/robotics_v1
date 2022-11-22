// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from urscript_interfaces:srv/GetEefAngleAxis.idl
// generated code does not contain a copyright notice

#ifndef URSCRIPT_INTERFACES__SRV__DETAIL__GET_EEF_ANGLE_AXIS__TRAITS_HPP_
#define URSCRIPT_INTERFACES__SRV__DETAIL__GET_EEF_ANGLE_AXIS__TRAITS_HPP_

#include "urscript_interfaces/srv/detail/get_eef_angle_axis__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<urscript_interfaces::srv::GetEefAngleAxis_Request>()
{
  return "urscript_interfaces::srv::GetEefAngleAxis_Request";
}

template<>
inline const char * name<urscript_interfaces::srv::GetEefAngleAxis_Request>()
{
  return "urscript_interfaces/srv/GetEefAngleAxis_Request";
}

template<>
struct has_fixed_size<urscript_interfaces::srv::GetEefAngleAxis_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<urscript_interfaces::srv::GetEefAngleAxis_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<urscript_interfaces::srv::GetEefAngleAxis_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'angle_axis'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<urscript_interfaces::srv::GetEefAngleAxis_Response>()
{
  return "urscript_interfaces::srv::GetEefAngleAxis_Response";
}

template<>
inline const char * name<urscript_interfaces::srv::GetEefAngleAxis_Response>()
{
  return "urscript_interfaces/srv/GetEefAngleAxis_Response";
}

template<>
struct has_fixed_size<urscript_interfaces::srv::GetEefAngleAxis_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<urscript_interfaces::srv::GetEefAngleAxis_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<urscript_interfaces::srv::GetEefAngleAxis_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<urscript_interfaces::srv::GetEefAngleAxis>()
{
  return "urscript_interfaces::srv::GetEefAngleAxis";
}

template<>
inline const char * name<urscript_interfaces::srv::GetEefAngleAxis>()
{
  return "urscript_interfaces/srv/GetEefAngleAxis";
}

template<>
struct has_fixed_size<urscript_interfaces::srv::GetEefAngleAxis>
  : std::integral_constant<
    bool,
    has_fixed_size<urscript_interfaces::srv::GetEefAngleAxis_Request>::value &&
    has_fixed_size<urscript_interfaces::srv::GetEefAngleAxis_Response>::value
  >
{
};

template<>
struct has_bounded_size<urscript_interfaces::srv::GetEefAngleAxis>
  : std::integral_constant<
    bool,
    has_bounded_size<urscript_interfaces::srv::GetEefAngleAxis_Request>::value &&
    has_bounded_size<urscript_interfaces::srv::GetEefAngleAxis_Response>::value
  >
{
};

template<>
struct is_service<urscript_interfaces::srv::GetEefAngleAxis>
  : std::true_type
{
};

template<>
struct is_service_request<urscript_interfaces::srv::GetEefAngleAxis_Request>
  : std::true_type
{
};

template<>
struct is_service_response<urscript_interfaces::srv::GetEefAngleAxis_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // URSCRIPT_INTERFACES__SRV__DETAIL__GET_EEF_ANGLE_AXIS__TRAITS_HPP_
