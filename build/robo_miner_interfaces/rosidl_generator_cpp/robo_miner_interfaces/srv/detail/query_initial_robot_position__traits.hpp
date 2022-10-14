// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robo_miner_interfaces:srv/QueryInitialRobotPosition.idl
// generated code does not contain a copyright notice

#ifndef ROBO_MINER_INTERFACES__SRV__DETAIL__QUERY_INITIAL_ROBOT_POSITION__TRAITS_HPP_
#define ROBO_MINER_INTERFACES__SRV__DETAIL__QUERY_INITIAL_ROBOT_POSITION__TRAITS_HPP_

#include "robo_miner_interfaces/srv/detail/query_initial_robot_position__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robo_miner_interfaces::srv::QueryInitialRobotPosition_Request>()
{
  return "robo_miner_interfaces::srv::QueryInitialRobotPosition_Request";
}

template<>
inline const char * name<robo_miner_interfaces::srv::QueryInitialRobotPosition_Request>()
{
  return "robo_miner_interfaces/srv/QueryInitialRobotPosition_Request";
}

template<>
struct has_fixed_size<robo_miner_interfaces::srv::QueryInitialRobotPosition_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robo_miner_interfaces::srv::QueryInitialRobotPosition_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robo_miner_interfaces::srv::QueryInitialRobotPosition_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'robot_position_response'
#include "robo_miner_interfaces/msg/detail/robot_position_response__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robo_miner_interfaces::srv::QueryInitialRobotPosition_Response>()
{
  return "robo_miner_interfaces::srv::QueryInitialRobotPosition_Response";
}

template<>
inline const char * name<robo_miner_interfaces::srv::QueryInitialRobotPosition_Response>()
{
  return "robo_miner_interfaces/srv/QueryInitialRobotPosition_Response";
}

template<>
struct has_fixed_size<robo_miner_interfaces::srv::QueryInitialRobotPosition_Response>
  : std::integral_constant<bool, has_fixed_size<robo_miner_interfaces::msg::RobotPositionResponse>::value> {};

template<>
struct has_bounded_size<robo_miner_interfaces::srv::QueryInitialRobotPosition_Response>
  : std::integral_constant<bool, has_bounded_size<robo_miner_interfaces::msg::RobotPositionResponse>::value> {};

template<>
struct is_message<robo_miner_interfaces::srv::QueryInitialRobotPosition_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robo_miner_interfaces::srv::QueryInitialRobotPosition>()
{
  return "robo_miner_interfaces::srv::QueryInitialRobotPosition";
}

template<>
inline const char * name<robo_miner_interfaces::srv::QueryInitialRobotPosition>()
{
  return "robo_miner_interfaces/srv/QueryInitialRobotPosition";
}

template<>
struct has_fixed_size<robo_miner_interfaces::srv::QueryInitialRobotPosition>
  : std::integral_constant<
    bool,
    has_fixed_size<robo_miner_interfaces::srv::QueryInitialRobotPosition_Request>::value &&
    has_fixed_size<robo_miner_interfaces::srv::QueryInitialRobotPosition_Response>::value
  >
{
};

template<>
struct has_bounded_size<robo_miner_interfaces::srv::QueryInitialRobotPosition>
  : std::integral_constant<
    bool,
    has_bounded_size<robo_miner_interfaces::srv::QueryInitialRobotPosition_Request>::value &&
    has_bounded_size<robo_miner_interfaces::srv::QueryInitialRobotPosition_Response>::value
  >
{
};

template<>
struct is_service<robo_miner_interfaces::srv::QueryInitialRobotPosition>
  : std::true_type
{
};

template<>
struct is_service_request<robo_miner_interfaces::srv::QueryInitialRobotPosition_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robo_miner_interfaces::srv::QueryInitialRobotPosition_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBO_MINER_INTERFACES__SRV__DETAIL__QUERY_INITIAL_ROBOT_POSITION__TRAITS_HPP_
