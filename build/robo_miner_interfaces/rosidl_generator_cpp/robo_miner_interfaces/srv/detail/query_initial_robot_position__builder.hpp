// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robo_miner_interfaces:srv/QueryInitialRobotPosition.idl
// generated code does not contain a copyright notice

#ifndef ROBO_MINER_INTERFACES__SRV__DETAIL__QUERY_INITIAL_ROBOT_POSITION__BUILDER_HPP_
#define ROBO_MINER_INTERFACES__SRV__DETAIL__QUERY_INITIAL_ROBOT_POSITION__BUILDER_HPP_

#include "robo_miner_interfaces/srv/detail/query_initial_robot_position__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robo_miner_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_miner_interfaces::srv::QueryInitialRobotPosition_Request>()
{
  return ::robo_miner_interfaces::srv::QueryInitialRobotPosition_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace robo_miner_interfaces


namespace robo_miner_interfaces
{

namespace srv
{

namespace builder
{

class Init_QueryInitialRobotPosition_Response_robot_initial_tile
{
public:
  explicit Init_QueryInitialRobotPosition_Response_robot_initial_tile(::robo_miner_interfaces::srv::QueryInitialRobotPosition_Response & msg)
  : msg_(msg)
  {}
  ::robo_miner_interfaces::srv::QueryInitialRobotPosition_Response robot_initial_tile(::robo_miner_interfaces::srv::QueryInitialRobotPosition_Response::_robot_initial_tile_type arg)
  {
    msg_.robot_initial_tile = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_miner_interfaces::srv::QueryInitialRobotPosition_Response msg_;
};

class Init_QueryInitialRobotPosition_Response_robot_position_response
{
public:
  Init_QueryInitialRobotPosition_Response_robot_position_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QueryInitialRobotPosition_Response_robot_initial_tile robot_position_response(::robo_miner_interfaces::srv::QueryInitialRobotPosition_Response::_robot_position_response_type arg)
  {
    msg_.robot_position_response = std::move(arg);
    return Init_QueryInitialRobotPosition_Response_robot_initial_tile(msg_);
  }

private:
  ::robo_miner_interfaces::srv::QueryInitialRobotPosition_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_miner_interfaces::srv::QueryInitialRobotPosition_Response>()
{
  return robo_miner_interfaces::srv::builder::Init_QueryInitialRobotPosition_Response_robot_position_response();
}

}  // namespace robo_miner_interfaces

#endif  // ROBO_MINER_INTERFACES__SRV__DETAIL__QUERY_INITIAL_ROBOT_POSITION__BUILDER_HPP_
