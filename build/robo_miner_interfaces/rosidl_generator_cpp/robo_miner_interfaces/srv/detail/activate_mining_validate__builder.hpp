// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robo_miner_interfaces:srv/ActivateMiningValidate.idl
// generated code does not contain a copyright notice

#ifndef ROBO_MINER_INTERFACES__SRV__DETAIL__ACTIVATE_MINING_VALIDATE__BUILDER_HPP_
#define ROBO_MINER_INTERFACES__SRV__DETAIL__ACTIVATE_MINING_VALIDATE__BUILDER_HPP_

#include "robo_miner_interfaces/srv/detail/activate_mining_validate__struct.hpp"
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
auto build<::robo_miner_interfaces::srv::ActivateMiningValidate_Request>()
{
  return ::robo_miner_interfaces::srv::ActivateMiningValidate_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace robo_miner_interfaces


namespace robo_miner_interfaces
{

namespace srv
{

namespace builder
{

class Init_ActivateMiningValidate_Response_error_reason
{
public:
  explicit Init_ActivateMiningValidate_Response_error_reason(::robo_miner_interfaces::srv::ActivateMiningValidate_Response & msg)
  : msg_(msg)
  {}
  ::robo_miner_interfaces::srv::ActivateMiningValidate_Response error_reason(::robo_miner_interfaces::srv::ActivateMiningValidate_Response::_error_reason_type arg)
  {
    msg_.error_reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_miner_interfaces::srv::ActivateMiningValidate_Response msg_;
};

class Init_ActivateMiningValidate_Response_success
{
public:
  Init_ActivateMiningValidate_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActivateMiningValidate_Response_error_reason success(::robo_miner_interfaces::srv::ActivateMiningValidate_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ActivateMiningValidate_Response_error_reason(msg_);
  }

private:
  ::robo_miner_interfaces::srv::ActivateMiningValidate_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_miner_interfaces::srv::ActivateMiningValidate_Response>()
{
  return robo_miner_interfaces::srv::builder::Init_ActivateMiningValidate_Response_success();
}

}  // namespace robo_miner_interfaces

#endif  // ROBO_MINER_INTERFACES__SRV__DETAIL__ACTIVATE_MINING_VALIDATE__BUILDER_HPP_
