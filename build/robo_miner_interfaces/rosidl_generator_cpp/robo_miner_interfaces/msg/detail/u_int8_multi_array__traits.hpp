// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robo_miner_interfaces:msg/UInt8MultiArray.idl
// generated code does not contain a copyright notice

#ifndef ROBO_MINER_INTERFACES__MSG__DETAIL__U_INT8_MULTI_ARRAY__TRAITS_HPP_
#define ROBO_MINER_INTERFACES__MSG__DETAIL__U_INT8_MULTI_ARRAY__TRAITS_HPP_

#include "robo_miner_interfaces/msg/detail/u_int8_multi_array__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robo_miner_interfaces::msg::UInt8MultiArray>()
{
  return "robo_miner_interfaces::msg::UInt8MultiArray";
}

template<>
inline const char * name<robo_miner_interfaces::msg::UInt8MultiArray>()
{
  return "robo_miner_interfaces/msg/UInt8MultiArray";
}

template<>
struct has_fixed_size<robo_miner_interfaces::msg::UInt8MultiArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robo_miner_interfaces::msg::UInt8MultiArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robo_miner_interfaces::msg::UInt8MultiArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBO_MINER_INTERFACES__MSG__DETAIL__U_INT8_MULTI_ARRAY__TRAITS_HPP_
