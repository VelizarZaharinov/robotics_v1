// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robo_cleaner_interfaces:msg/InitialRobotState.idl
// generated code does not contain a copyright notice

#ifndef ROBO_CLEANER_INTERFACES__MSG__DETAIL__INITIAL_ROBOT_STATE__TRAITS_HPP_
#define ROBO_CLEANER_INTERFACES__MSG__DETAIL__INITIAL_ROBOT_STATE__TRAITS_HPP_

#include "robo_cleaner_interfaces/msg/detail/initial_robot_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'battery_status'
#include "robo_cleaner_interfaces/msg/detail/battery_status__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robo_cleaner_interfaces::msg::InitialRobotState>()
{
  return "robo_cleaner_interfaces::msg::InitialRobotState";
}

template<>
inline const char * name<robo_cleaner_interfaces::msg::InitialRobotState>()
{
  return "robo_cleaner_interfaces/msg/InitialRobotState";
}

template<>
struct has_fixed_size<robo_cleaner_interfaces::msg::InitialRobotState>
  : std::integral_constant<bool, has_fixed_size<robo_cleaner_interfaces::msg::BatteryStatus>::value> {};

template<>
struct has_bounded_size<robo_cleaner_interfaces::msg::InitialRobotState>
  : std::integral_constant<bool, has_bounded_size<robo_cleaner_interfaces::msg::BatteryStatus>::value> {};

template<>
struct is_message<robo_cleaner_interfaces::msg::InitialRobotState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBO_CLEANER_INTERFACES__MSG__DETAIL__INITIAL_ROBOT_STATE__TRAITS_HPP_
