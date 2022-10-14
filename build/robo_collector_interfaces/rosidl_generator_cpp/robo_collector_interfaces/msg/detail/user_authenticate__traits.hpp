// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robo_collector_interfaces:msg/UserAuthenticate.idl
// generated code does not contain a copyright notice

#ifndef ROBO_COLLECTOR_INTERFACES__MSG__DETAIL__USER_AUTHENTICATE__TRAITS_HPP_
#define ROBO_COLLECTOR_INTERFACES__MSG__DETAIL__USER_AUTHENTICATE__TRAITS_HPP_

#include "robo_collector_interfaces/msg/detail/user_authenticate__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robo_collector_interfaces::msg::UserAuthenticate>()
{
  return "robo_collector_interfaces::msg::UserAuthenticate";
}

template<>
inline const char * name<robo_collector_interfaces::msg::UserAuthenticate>()
{
  return "robo_collector_interfaces/msg/UserAuthenticate";
}

template<>
struct has_fixed_size<robo_collector_interfaces::msg::UserAuthenticate>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robo_collector_interfaces::msg::UserAuthenticate>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robo_collector_interfaces::msg::UserAuthenticate>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBO_COLLECTOR_INTERFACES__MSG__DETAIL__USER_AUTHENTICATE__TRAITS_HPP_
