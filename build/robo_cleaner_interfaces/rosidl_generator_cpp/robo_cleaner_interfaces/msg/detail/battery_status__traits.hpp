// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robo_cleaner_interfaces:msg/BatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef ROBO_CLEANER_INTERFACES__MSG__DETAIL__BATTERY_STATUS__TRAITS_HPP_
#define ROBO_CLEANER_INTERFACES__MSG__DETAIL__BATTERY_STATUS__TRAITS_HPP_

#include "robo_cleaner_interfaces/msg/detail/battery_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robo_cleaner_interfaces::msg::BatteryStatus>()
{
  return "robo_cleaner_interfaces::msg::BatteryStatus";
}

template<>
inline const char * name<robo_cleaner_interfaces::msg::BatteryStatus>()
{
  return "robo_cleaner_interfaces/msg/BatteryStatus";
}

template<>
struct has_fixed_size<robo_cleaner_interfaces::msg::BatteryStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robo_cleaner_interfaces::msg::BatteryStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robo_cleaner_interfaces::msg::BatteryStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBO_CLEANER_INTERFACES__MSG__DETAIL__BATTERY_STATUS__TRAITS_HPP_
