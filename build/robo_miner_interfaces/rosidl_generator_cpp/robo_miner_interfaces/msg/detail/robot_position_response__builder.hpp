// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robo_miner_interfaces:msg/RobotPositionResponse.idl
// generated code does not contain a copyright notice

#ifndef ROBO_MINER_INTERFACES__MSG__DETAIL__ROBOT_POSITION_RESPONSE__BUILDER_HPP_
#define ROBO_MINER_INTERFACES__MSG__DETAIL__ROBOT_POSITION_RESPONSE__BUILDER_HPP_

#include "robo_miner_interfaces/msg/detail/robot_position_response__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robo_miner_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotPositionResponse_robot_dir
{
public:
  explicit Init_RobotPositionResponse_robot_dir(::robo_miner_interfaces::msg::RobotPositionResponse & msg)
  : msg_(msg)
  {}
  ::robo_miner_interfaces::msg::RobotPositionResponse robot_dir(::robo_miner_interfaces::msg::RobotPositionResponse::_robot_dir_type arg)
  {
    msg_.robot_dir = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_miner_interfaces::msg::RobotPositionResponse msg_;
};

class Init_RobotPositionResponse_surrounding_tiles
{
public:
  explicit Init_RobotPositionResponse_surrounding_tiles(::robo_miner_interfaces::msg::RobotPositionResponse & msg)
  : msg_(msg)
  {}
  Init_RobotPositionResponse_robot_dir surrounding_tiles(::robo_miner_interfaces::msg::RobotPositionResponse::_surrounding_tiles_type arg)
  {
    msg_.surrounding_tiles = std::move(arg);
    return Init_RobotPositionResponse_robot_dir(msg_);
  }

private:
  ::robo_miner_interfaces::msg::RobotPositionResponse msg_;
};

class Init_RobotPositionResponse_error_reason
{
public:
  explicit Init_RobotPositionResponse_error_reason(::robo_miner_interfaces::msg::RobotPositionResponse & msg)
  : msg_(msg)
  {}
  Init_RobotPositionResponse_surrounding_tiles error_reason(::robo_miner_interfaces::msg::RobotPositionResponse::_error_reason_type arg)
  {
    msg_.error_reason = std::move(arg);
    return Init_RobotPositionResponse_surrounding_tiles(msg_);
  }

private:
  ::robo_miner_interfaces::msg::RobotPositionResponse msg_;
};

class Init_RobotPositionResponse_success
{
public:
  Init_RobotPositionResponse_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotPositionResponse_error_reason success(::robo_miner_interfaces::msg::RobotPositionResponse::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_RobotPositionResponse_error_reason(msg_);
  }

private:
  ::robo_miner_interfaces::msg::RobotPositionResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_miner_interfaces::msg::RobotPositionResponse>()
{
  return robo_miner_interfaces::msg::builder::Init_RobotPositionResponse_success();
}

}  // namespace robo_miner_interfaces

#endif  // ROBO_MINER_INTERFACES__MSG__DETAIL__ROBOT_POSITION_RESPONSE__BUILDER_HPP_
