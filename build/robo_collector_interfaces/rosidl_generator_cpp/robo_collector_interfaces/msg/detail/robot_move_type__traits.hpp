// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robo_collector_interfaces:msg/RobotMoveType.idl
// generated code does not contain a copyright notice

#ifndef ROBO_COLLECTOR_INTERFACES__MSG__DETAIL__ROBOT_MOVE_TYPE__TRAITS_HPP_
#define ROBO_COLLECTOR_INTERFACES__MSG__DETAIL__ROBOT_MOVE_TYPE__TRAITS_HPP_

#include "robo_collector_interfaces/msg/detail/robot_move_type__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robo_collector_interfaces::msg::RobotMoveType>()
{
  return "robo_collector_interfaces::msg::RobotMoveType";
}

template<>
inline const char * name<robo_collector_interfaces::msg::RobotMoveType>()
{
  return "robo_collector_interfaces/msg/RobotMoveType";
}

template<>
struct has_fixed_size<robo_collector_interfaces::msg::RobotMoveType>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robo_collector_interfaces::msg::RobotMoveType>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robo_collector_interfaces::msg::RobotMoveType>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBO_COLLECTOR_INTERFACES__MSG__DETAIL__ROBOT_MOVE_TYPE__TRAITS_HPP_
