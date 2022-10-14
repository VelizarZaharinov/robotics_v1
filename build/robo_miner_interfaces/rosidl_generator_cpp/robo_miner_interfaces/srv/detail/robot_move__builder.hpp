// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robo_miner_interfaces:srv/RobotMove.idl
// generated code does not contain a copyright notice

#ifndef ROBO_MINER_INTERFACES__SRV__DETAIL__ROBOT_MOVE__BUILDER_HPP_
#define ROBO_MINER_INTERFACES__SRV__DETAIL__ROBOT_MOVE__BUILDER_HPP_

#include "robo_miner_interfaces/srv/detail/robot_move__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robo_miner_interfaces
{

namespace srv
{

namespace builder
{

class Init_RobotMove_Request_robot_move_type
{
public:
  Init_RobotMove_Request_robot_move_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robo_miner_interfaces::srv::RobotMove_Request robot_move_type(::robo_miner_interfaces::srv::RobotMove_Request::_robot_move_type_type arg)
  {
    msg_.robot_move_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_miner_interfaces::srv::RobotMove_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_miner_interfaces::srv::RobotMove_Request>()
{
  return robo_miner_interfaces::srv::builder::Init_RobotMove_Request_robot_move_type();
}

}  // namespace robo_miner_interfaces


namespace robo_miner_interfaces
{

namespace srv
{

namespace builder
{

class Init_RobotMove_Response_robot_position_response
{
public:
  Init_RobotMove_Response_robot_position_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robo_miner_interfaces::srv::RobotMove_Response robot_position_response(::robo_miner_interfaces::srv::RobotMove_Response::_robot_position_response_type arg)
  {
    msg_.robot_position_response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_miner_interfaces::srv::RobotMove_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_miner_interfaces::srv::RobotMove_Response>()
{
  return robo_miner_interfaces::srv::builder::Init_RobotMove_Response_robot_position_response();
}

}  // namespace robo_miner_interfaces

#endif  // ROBO_MINER_INTERFACES__SRV__DETAIL__ROBOT_MOVE__BUILDER_HPP_
