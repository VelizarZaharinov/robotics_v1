// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robo_miner_interfaces:srv/RobotMove.idl
// generated code does not contain a copyright notice

#ifndef ROBO_MINER_INTERFACES__SRV__DETAIL__ROBOT_MOVE__TRAITS_HPP_
#define ROBO_MINER_INTERFACES__SRV__DETAIL__ROBOT_MOVE__TRAITS_HPP_

#include "robo_miner_interfaces/srv/detail/robot_move__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'robot_move_type'
#include "robo_miner_interfaces/msg/detail/robot_move_type__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robo_miner_interfaces::srv::RobotMove_Request>()
{
  return "robo_miner_interfaces::srv::RobotMove_Request";
}

template<>
inline const char * name<robo_miner_interfaces::srv::RobotMove_Request>()
{
  return "robo_miner_interfaces/srv/RobotMove_Request";
}

template<>
struct has_fixed_size<robo_miner_interfaces::srv::RobotMove_Request>
  : std::integral_constant<bool, has_fixed_size<robo_miner_interfaces::msg::RobotMoveType>::value> {};

template<>
struct has_bounded_size<robo_miner_interfaces::srv::RobotMove_Request>
  : std::integral_constant<bool, has_bounded_size<robo_miner_interfaces::msg::RobotMoveType>::value> {};

template<>
struct is_message<robo_miner_interfaces::srv::RobotMove_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'robot_position_response'
#include "robo_miner_interfaces/msg/detail/robot_position_response__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robo_miner_interfaces::srv::RobotMove_Response>()
{
  return "robo_miner_interfaces::srv::RobotMove_Response";
}

template<>
inline const char * name<robo_miner_interfaces::srv::RobotMove_Response>()
{
  return "robo_miner_interfaces/srv/RobotMove_Response";
}

template<>
struct has_fixed_size<robo_miner_interfaces::srv::RobotMove_Response>
  : std::integral_constant<bool, has_fixed_size<robo_miner_interfaces::msg::RobotPositionResponse>::value> {};

template<>
struct has_bounded_size<robo_miner_interfaces::srv::RobotMove_Response>
  : std::integral_constant<bool, has_bounded_size<robo_miner_interfaces::msg::RobotPositionResponse>::value> {};

template<>
struct is_message<robo_miner_interfaces::srv::RobotMove_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robo_miner_interfaces::srv::RobotMove>()
{
  return "robo_miner_interfaces::srv::RobotMove";
}

template<>
inline const char * name<robo_miner_interfaces::srv::RobotMove>()
{
  return "robo_miner_interfaces/srv/RobotMove";
}

template<>
struct has_fixed_size<robo_miner_interfaces::srv::RobotMove>
  : std::integral_constant<
    bool,
    has_fixed_size<robo_miner_interfaces::srv::RobotMove_Request>::value &&
    has_fixed_size<robo_miner_interfaces::srv::RobotMove_Response>::value
  >
{
};

template<>
struct has_bounded_size<robo_miner_interfaces::srv::RobotMove>
  : std::integral_constant<
    bool,
    has_bounded_size<robo_miner_interfaces::srv::RobotMove_Request>::value &&
    has_bounded_size<robo_miner_interfaces::srv::RobotMove_Response>::value
  >
{
};

template<>
struct is_service<robo_miner_interfaces::srv::RobotMove>
  : std::true_type
{
};

template<>
struct is_service_request<robo_miner_interfaces::srv::RobotMove_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robo_miner_interfaces::srv::RobotMove_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBO_MINER_INTERFACES__SRV__DETAIL__ROBOT_MOVE__TRAITS_HPP_
