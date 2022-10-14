// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from urscript_interfaces:srv/UrScript.idl
// generated code does not contain a copyright notice

#ifndef URSCRIPT_INTERFACES__SRV__DETAIL__UR_SCRIPT__TRAITS_HPP_
#define URSCRIPT_INTERFACES__SRV__DETAIL__UR_SCRIPT__TRAITS_HPP_

#include "urscript_interfaces/srv/detail/ur_script__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<urscript_interfaces::srv::UrScript_Request>()
{
  return "urscript_interfaces::srv::UrScript_Request";
}

template<>
inline const char * name<urscript_interfaces::srv::UrScript_Request>()
{
  return "urscript_interfaces/srv/UrScript_Request";
}

template<>
struct has_fixed_size<urscript_interfaces::srv::UrScript_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<urscript_interfaces::srv::UrScript_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<urscript_interfaces::srv::UrScript_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<urscript_interfaces::srv::UrScript_Response>()
{
  return "urscript_interfaces::srv::UrScript_Response";
}

template<>
inline const char * name<urscript_interfaces::srv::UrScript_Response>()
{
  return "urscript_interfaces/srv/UrScript_Response";
}

template<>
struct has_fixed_size<urscript_interfaces::srv::UrScript_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<urscript_interfaces::srv::UrScript_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<urscript_interfaces::srv::UrScript_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<urscript_interfaces::srv::UrScript>()
{
  return "urscript_interfaces::srv::UrScript";
}

template<>
inline const char * name<urscript_interfaces::srv::UrScript>()
{
  return "urscript_interfaces/srv/UrScript";
}

template<>
struct has_fixed_size<urscript_interfaces::srv::UrScript>
  : std::integral_constant<
    bool,
    has_fixed_size<urscript_interfaces::srv::UrScript_Request>::value &&
    has_fixed_size<urscript_interfaces::srv::UrScript_Response>::value
  >
{
};

template<>
struct has_bounded_size<urscript_interfaces::srv::UrScript>
  : std::integral_constant<
    bool,
    has_bounded_size<urscript_interfaces::srv::UrScript_Request>::value &&
    has_bounded_size<urscript_interfaces::srv::UrScript_Response>::value
  >
{
};

template<>
struct is_service<urscript_interfaces::srv::UrScript>
  : std::true_type
{
};

template<>
struct is_service_request<urscript_interfaces::srv::UrScript_Request>
  : std::true_type
{
};

template<>
struct is_service_response<urscript_interfaces::srv::UrScript_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // URSCRIPT_INTERFACES__SRV__DETAIL__UR_SCRIPT__TRAITS_HPP_
