// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from urscript_interfaces:srv/UrScript.idl
// generated code does not contain a copyright notice

#ifndef URSCRIPT_INTERFACES__SRV__DETAIL__UR_SCRIPT__BUILDER_HPP_
#define URSCRIPT_INTERFACES__SRV__DETAIL__UR_SCRIPT__BUILDER_HPP_

#include "urscript_interfaces/srv/detail/ur_script__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace urscript_interfaces
{

namespace srv
{

namespace builder
{

class Init_UrScript_Request_data
{
public:
  Init_UrScript_Request_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::urscript_interfaces::srv::UrScript_Request data(::urscript_interfaces::srv::UrScript_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::urscript_interfaces::srv::UrScript_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::urscript_interfaces::srv::UrScript_Request>()
{
  return urscript_interfaces::srv::builder::Init_UrScript_Request_data();
}

}  // namespace urscript_interfaces


namespace urscript_interfaces
{

namespace srv
{

namespace builder
{

class Init_UrScript_Response_error_reason
{
public:
  explicit Init_UrScript_Response_error_reason(::urscript_interfaces::srv::UrScript_Response & msg)
  : msg_(msg)
  {}
  ::urscript_interfaces::srv::UrScript_Response error_reason(::urscript_interfaces::srv::UrScript_Response::_error_reason_type arg)
  {
    msg_.error_reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::urscript_interfaces::srv::UrScript_Response msg_;
};

class Init_UrScript_Response_success
{
public:
  Init_UrScript_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UrScript_Response_error_reason success(::urscript_interfaces::srv::UrScript_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_UrScript_Response_error_reason(msg_);
  }

private:
  ::urscript_interfaces::srv::UrScript_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::urscript_interfaces::srv::UrScript_Response>()
{
  return urscript_interfaces::srv::builder::Init_UrScript_Response_success();
}

}  // namespace urscript_interfaces

#endif  // URSCRIPT_INTERFACES__SRV__DETAIL__UR_SCRIPT__BUILDER_HPP_
