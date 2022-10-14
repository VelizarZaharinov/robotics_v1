// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robo_cleaner_interfaces:srv/QueryInitialRobotState.idl
// generated code does not contain a copyright notice

#ifndef ROBO_CLEANER_INTERFACES__SRV__DETAIL__QUERY_INITIAL_ROBOT_STATE__TRAITS_HPP_
#define ROBO_CLEANER_INTERFACES__SRV__DETAIL__QUERY_INITIAL_ROBOT_STATE__TRAITS_HPP_

#include "robo_cleaner_interfaces/srv/detail/query_initial_robot_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robo_cleaner_interfaces::srv::QueryInitialRobotState_Request>()
{
  return "robo_cleaner_interfaces::srv::QueryInitialRobotState_Request";
}

template<>
inline const char * name<robo_cleaner_interfaces::srv::QueryInitialRobotState_Request>()
{
  return "robo_cleaner_interfaces/srv/QueryInitialRobotState_Request";
}

template<>
struct has_fixed_size<robo_cleaner_interfaces::srv::QueryInitialRobotState_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robo_cleaner_interfaces::srv::QueryInitialRobotState_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robo_cleaner_interfaces::srv::QueryInitialRobotState_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'initial_robot_state'
#include "robo_cleaner_interfaces/msg/detail/initial_robot_state__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robo_cleaner_interfaces::srv::QueryInitialRobotState_Response>()
{
  return "robo_cleaner_interfaces::srv::QueryInitialRobotState_Response";
}

template<>
inline const char * name<robo_cleaner_interfaces::srv::QueryInitialRobotState_Response>()
{
  return "robo_cleaner_interfaces/srv/QueryInitialRobotState_Response";
}

template<>
struct has_fixed_size<robo_cleaner_interfaces::srv::QueryInitialRobotState_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robo_cleaner_interfaces::srv::QueryInitialRobotState_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robo_cleaner_interfaces::srv::QueryInitialRobotState_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robo_cleaner_interfaces::srv::QueryInitialRobotState>()
{
  return "robo_cleaner_interfaces::srv::QueryInitialRobotState";
}

template<>
inline const char * name<robo_cleaner_interfaces::srv::QueryInitialRobotState>()
{
  return "robo_cleaner_interfaces/srv/QueryInitialRobotState";
}

template<>
struct has_fixed_size<robo_cleaner_interfaces::srv::QueryInitialRobotState>
  : std::integral_constant<
    bool,
    has_fixed_size<robo_cleaner_interfaces::srv::QueryInitialRobotState_Request>::value &&
    has_fixed_size<robo_cleaner_interfaces::srv::QueryInitialRobotState_Response>::value
  >
{
};

template<>
struct has_bounded_size<robo_cleaner_interfaces::srv::QueryInitialRobotState>
  : std::integral_constant<
    bool,
    has_bounded_size<robo_cleaner_interfaces::srv::QueryInitialRobotState_Request>::value &&
    has_bounded_size<robo_cleaner_interfaces::srv::QueryInitialRobotState_Response>::value
  >
{
};

template<>
struct is_service<robo_cleaner_interfaces::srv::QueryInitialRobotState>
  : std::true_type
{
};

template<>
struct is_service_request<robo_cleaner_interfaces::srv::QueryInitialRobotState_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robo_cleaner_interfaces::srv::QueryInitialRobotState_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBO_CLEANER_INTERFACES__SRV__DETAIL__QUERY_INITIAL_ROBOT_STATE__TRAITS_HPP_
