// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robo_cleaner_interfaces:msg/InitialRobotState.idl
// generated code does not contain a copyright notice

#ifndef ROBO_CLEANER_INTERFACES__MSG__DETAIL__INITIAL_ROBOT_STATE__BUILDER_HPP_
#define ROBO_CLEANER_INTERFACES__MSG__DETAIL__INITIAL_ROBOT_STATE__BUILDER_HPP_

#include "robo_cleaner_interfaces/msg/detail/initial_robot_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robo_cleaner_interfaces
{

namespace msg
{

namespace builder
{

class Init_InitialRobotState_robot_dir
{
public:
  explicit Init_InitialRobotState_robot_dir(::robo_cleaner_interfaces::msg::InitialRobotState & msg)
  : msg_(msg)
  {}
  ::robo_cleaner_interfaces::msg::InitialRobotState robot_dir(::robo_cleaner_interfaces::msg::InitialRobotState::_robot_dir_type arg)
  {
    msg_.robot_dir = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_cleaner_interfaces::msg::InitialRobotState msg_;
};

class Init_InitialRobotState_robot_tile
{
public:
  explicit Init_InitialRobotState_robot_tile(::robo_cleaner_interfaces::msg::InitialRobotState & msg)
  : msg_(msg)
  {}
  Init_InitialRobotState_robot_dir robot_tile(::robo_cleaner_interfaces::msg::InitialRobotState::_robot_tile_type arg)
  {
    msg_.robot_tile = std::move(arg);
    return Init_InitialRobotState_robot_dir(msg_);
  }

private:
  ::robo_cleaner_interfaces::msg::InitialRobotState msg_;
};

class Init_InitialRobotState_battery_status
{
public:
  Init_InitialRobotState_battery_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InitialRobotState_robot_tile battery_status(::robo_cleaner_interfaces::msg::InitialRobotState::_battery_status_type arg)
  {
    msg_.battery_status = std::move(arg);
    return Init_InitialRobotState_robot_tile(msg_);
  }

private:
  ::robo_cleaner_interfaces::msg::InitialRobotState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_cleaner_interfaces::msg::InitialRobotState>()
{
  return robo_cleaner_interfaces::msg::builder::Init_InitialRobotState_battery_status();
}

}  // namespace robo_cleaner_interfaces

#endif  // ROBO_CLEANER_INTERFACES__MSG__DETAIL__INITIAL_ROBOT_STATE__BUILDER_HPP_
