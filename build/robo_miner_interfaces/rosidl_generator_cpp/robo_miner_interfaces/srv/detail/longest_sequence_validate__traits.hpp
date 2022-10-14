// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robo_miner_interfaces:srv/LongestSequenceValidate.idl
// generated code does not contain a copyright notice

#ifndef ROBO_MINER_INTERFACES__SRV__DETAIL__LONGEST_SEQUENCE_VALIDATE__TRAITS_HPP_
#define ROBO_MINER_INTERFACES__SRV__DETAIL__LONGEST_SEQUENCE_VALIDATE__TRAITS_HPP_

#include "robo_miner_interfaces/srv/detail/longest_sequence_validate__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robo_miner_interfaces::srv::LongestSequenceValidate_Request>()
{
  return "robo_miner_interfaces::srv::LongestSequenceValidate_Request";
}

template<>
inline const char * name<robo_miner_interfaces::srv::LongestSequenceValidate_Request>()
{
  return "robo_miner_interfaces/srv/LongestSequenceValidate_Request";
}

template<>
struct has_fixed_size<robo_miner_interfaces::srv::LongestSequenceValidate_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robo_miner_interfaces::srv::LongestSequenceValidate_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robo_miner_interfaces::srv::LongestSequenceValidate_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robo_miner_interfaces::srv::LongestSequenceValidate_Response>()
{
  return "robo_miner_interfaces::srv::LongestSequenceValidate_Response";
}

template<>
inline const char * name<robo_miner_interfaces::srv::LongestSequenceValidate_Response>()
{
  return "robo_miner_interfaces/srv/LongestSequenceValidate_Response";
}

template<>
struct has_fixed_size<robo_miner_interfaces::srv::LongestSequenceValidate_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robo_miner_interfaces::srv::LongestSequenceValidate_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robo_miner_interfaces::srv::LongestSequenceValidate_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robo_miner_interfaces::srv::LongestSequenceValidate>()
{
  return "robo_miner_interfaces::srv::LongestSequenceValidate";
}

template<>
inline const char * name<robo_miner_interfaces::srv::LongestSequenceValidate>()
{
  return "robo_miner_interfaces/srv/LongestSequenceValidate";
}

template<>
struct has_fixed_size<robo_miner_interfaces::srv::LongestSequenceValidate>
  : std::integral_constant<
    bool,
    has_fixed_size<robo_miner_interfaces::srv::LongestSequenceValidate_Request>::value &&
    has_fixed_size<robo_miner_interfaces::srv::LongestSequenceValidate_Response>::value
  >
{
};

template<>
struct has_bounded_size<robo_miner_interfaces::srv::LongestSequenceValidate>
  : std::integral_constant<
    bool,
    has_bounded_size<robo_miner_interfaces::srv::LongestSequenceValidate_Request>::value &&
    has_bounded_size<robo_miner_interfaces::srv::LongestSequenceValidate_Response>::value
  >
{
};

template<>
struct is_service<robo_miner_interfaces::srv::LongestSequenceValidate>
  : std::true_type
{
};

template<>
struct is_service_request<robo_miner_interfaces::srv::LongestSequenceValidate_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robo_miner_interfaces::srv::LongestSequenceValidate_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBO_MINER_INTERFACES__SRV__DETAIL__LONGEST_SEQUENCE_VALIDATE__TRAITS_HPP_
