// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robo_miner_interfaces:msg/FieldPoint.idl
// generated code does not contain a copyright notice

#ifndef ROBO_MINER_INTERFACES__MSG__DETAIL__FIELD_POINT__TRAITS_HPP_
#define ROBO_MINER_INTERFACES__MSG__DETAIL__FIELD_POINT__TRAITS_HPP_

#include "robo_miner_interfaces/msg/detail/field_point__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robo_miner_interfaces::msg::FieldPoint>()
{
  return "robo_miner_interfaces::msg::FieldPoint";
}

template<>
inline const char * name<robo_miner_interfaces::msg::FieldPoint>()
{
  return "robo_miner_interfaces/msg/FieldPoint";
}

template<>
struct has_fixed_size<robo_miner_interfaces::msg::FieldPoint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robo_miner_interfaces::msg::FieldPoint>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robo_miner_interfaces::msg::FieldPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBO_MINER_INTERFACES__MSG__DETAIL__FIELD_POINT__TRAITS_HPP_
