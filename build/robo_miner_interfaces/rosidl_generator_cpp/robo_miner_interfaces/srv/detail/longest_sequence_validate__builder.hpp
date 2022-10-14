// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robo_miner_interfaces:srv/LongestSequenceValidate.idl
// generated code does not contain a copyright notice

#ifndef ROBO_MINER_INTERFACES__SRV__DETAIL__LONGEST_SEQUENCE_VALIDATE__BUILDER_HPP_
#define ROBO_MINER_INTERFACES__SRV__DETAIL__LONGEST_SEQUENCE_VALIDATE__BUILDER_HPP_

#include "robo_miner_interfaces/srv/detail/longest_sequence_validate__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robo_miner_interfaces
{

namespace srv
{

namespace builder
{

class Init_LongestSequenceValidate_Request_sequence_points
{
public:
  Init_LongestSequenceValidate_Request_sequence_points()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robo_miner_interfaces::srv::LongestSequenceValidate_Request sequence_points(::robo_miner_interfaces::srv::LongestSequenceValidate_Request::_sequence_points_type arg)
  {
    msg_.sequence_points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_miner_interfaces::srv::LongestSequenceValidate_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_miner_interfaces::srv::LongestSequenceValidate_Request>()
{
  return robo_miner_interfaces::srv::builder::Init_LongestSequenceValidate_Request_sequence_points();
}

}  // namespace robo_miner_interfaces


namespace robo_miner_interfaces
{

namespace srv
{

namespace builder
{

class Init_LongestSequenceValidate_Response_error_reason
{
public:
  explicit Init_LongestSequenceValidate_Response_error_reason(::robo_miner_interfaces::srv::LongestSequenceValidate_Response & msg)
  : msg_(msg)
  {}
  ::robo_miner_interfaces::srv::LongestSequenceValidate_Response error_reason(::robo_miner_interfaces::srv::LongestSequenceValidate_Response::_error_reason_type arg)
  {
    msg_.error_reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_miner_interfaces::srv::LongestSequenceValidate_Response msg_;
};

class Init_LongestSequenceValidate_Response_success
{
public:
  Init_LongestSequenceValidate_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LongestSequenceValidate_Response_error_reason success(::robo_miner_interfaces::srv::LongestSequenceValidate_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_LongestSequenceValidate_Response_error_reason(msg_);
  }

private:
  ::robo_miner_interfaces::srv::LongestSequenceValidate_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_miner_interfaces::srv::LongestSequenceValidate_Response>()
{
  return robo_miner_interfaces::srv::builder::Init_LongestSequenceValidate_Response_success();
}

}  // namespace robo_miner_interfaces

#endif  // ROBO_MINER_INTERFACES__SRV__DETAIL__LONGEST_SEQUENCE_VALIDATE__BUILDER_HPP_
