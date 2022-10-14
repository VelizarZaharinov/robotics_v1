// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robo_cleaner_interfaces:srv/QueryInitialRobotState.idl
// generated code does not contain a copyright notice

#ifndef ROBO_CLEANER_INTERFACES__SRV__DETAIL__QUERY_INITIAL_ROBOT_STATE__BUILDER_HPP_
#define ROBO_CLEANER_INTERFACES__SRV__DETAIL__QUERY_INITIAL_ROBOT_STATE__BUILDER_HPP_

#include "robo_cleaner_interfaces/srv/detail/query_initial_robot_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robo_cleaner_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_cleaner_interfaces::srv::QueryInitialRobotState_Request>()
{
  return ::robo_cleaner_interfaces::srv::QueryInitialRobotState_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace robo_cleaner_interfaces


namespace robo_cleaner_interfaces
{

namespace srv
{

namespace builder
{

class Init_QueryInitialRobotState_Response_initial_robot_state
{
public:
  explicit Init_QueryInitialRobotState_Response_initial_robot_state(::robo_cleaner_interfaces::srv::QueryInitialRobotState_Response & msg)
  : msg_(msg)
  {}
  ::robo_cleaner_interfaces::srv::QueryInitialRobotState_Response initial_robot_state(::robo_cleaner_interfaces::srv::QueryInitialRobotState_Response::_initial_robot_state_type arg)
  {
    msg_.initial_robot_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_cleaner_interfaces::srv::QueryInitialRobotState_Response msg_;
};

class Init_QueryInitialRobotState_Response_error_reason
{
public:
  explicit Init_QueryInitialRobotState_Response_error_reason(::robo_cleaner_interfaces::srv::QueryInitialRobotState_Response & msg)
  : msg_(msg)
  {}
  Init_QueryInitialRobotState_Response_initial_robot_state error_reason(::robo_cleaner_interfaces::srv::QueryInitialRobotState_Response::_error_reason_type arg)
  {
    msg_.error_reason = std::move(arg);
    return Init_QueryInitialRobotState_Response_initial_robot_state(msg_);
  }

private:
  ::robo_cleaner_interfaces::srv::QueryInitialRobotState_Response msg_;
};

class Init_QueryInitialRobotState_Response_success
{
public:
  Init_QueryInitialRobotState_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QueryInitialRobotState_Response_error_reason success(::robo_cleaner_interfaces::srv::QueryInitialRobotState_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_QueryInitialRobotState_Response_error_reason(msg_);
  }

private:
  ::robo_cleaner_interfaces::srv::QueryInitialRobotState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_cleaner_interfaces::srv::QueryInitialRobotState_Response>()
{
  return robo_cleaner_interfaces::srv::builder::Init_QueryInitialRobotState_Response_success();
}

}  // namespace robo_cleaner_interfaces

#endif  // ROBO_CLEANER_INTERFACES__SRV__DETAIL__QUERY_INITIAL_ROBOT_STATE__BUILDER_HPP_
