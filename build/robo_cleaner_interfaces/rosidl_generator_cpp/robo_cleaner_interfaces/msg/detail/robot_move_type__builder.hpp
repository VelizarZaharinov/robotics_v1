// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robo_cleaner_interfaces:msg/RobotMoveType.idl
// generated code does not contain a copyright notice

#ifndef ROBO_CLEANER_INTERFACES__MSG__DETAIL__ROBOT_MOVE_TYPE__BUILDER_HPP_
#define ROBO_CLEANER_INTERFACES__MSG__DETAIL__ROBOT_MOVE_TYPE__BUILDER_HPP_

#include "robo_cleaner_interfaces/msg/detail/robot_move_type__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robo_cleaner_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotMoveType_move_type
{
public:
  Init_RobotMoveType_move_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robo_cleaner_interfaces::msg::RobotMoveType move_type(::robo_cleaner_interfaces::msg::RobotMoveType::_move_type_type arg)
  {
    msg_.move_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_cleaner_interfaces::msg::RobotMoveType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_cleaner_interfaces::msg::RobotMoveType>()
{
  return robo_cleaner_interfaces::msg::builder::Init_RobotMoveType_move_type();
}

}  // namespace robo_cleaner_interfaces

#endif  // ROBO_CLEANER_INTERFACES__MSG__DETAIL__ROBOT_MOVE_TYPE__BUILDER_HPP_
