// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from urscript_interfaces:srv/GetEefAngleAxis.idl
// generated code does not contain a copyright notice

#ifndef URSCRIPT_INTERFACES__SRV__DETAIL__GET_EEF_ANGLE_AXIS__BUILDER_HPP_
#define URSCRIPT_INTERFACES__SRV__DETAIL__GET_EEF_ANGLE_AXIS__BUILDER_HPP_

#include "urscript_interfaces/srv/detail/get_eef_angle_axis__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace urscript_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::urscript_interfaces::srv::GetEefAngleAxis_Request>()
{
  return ::urscript_interfaces::srv::GetEefAngleAxis_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace urscript_interfaces


namespace urscript_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetEefAngleAxis_Response_angle_axis
{
public:
  explicit Init_GetEefAngleAxis_Response_angle_axis(::urscript_interfaces::srv::GetEefAngleAxis_Response & msg)
  : msg_(msg)
  {}
  ::urscript_interfaces::srv::GetEefAngleAxis_Response angle_axis(::urscript_interfaces::srv::GetEefAngleAxis_Response::_angle_axis_type arg)
  {
    msg_.angle_axis = std::move(arg);
    return std::move(msg_);
  }

private:
  ::urscript_interfaces::srv::GetEefAngleAxis_Response msg_;
};

class Init_GetEefAngleAxis_Response_error_reason
{
public:
  explicit Init_GetEefAngleAxis_Response_error_reason(::urscript_interfaces::srv::GetEefAngleAxis_Response & msg)
  : msg_(msg)
  {}
  Init_GetEefAngleAxis_Response_angle_axis error_reason(::urscript_interfaces::srv::GetEefAngleAxis_Response::_error_reason_type arg)
  {
    msg_.error_reason = std::move(arg);
    return Init_GetEefAngleAxis_Response_angle_axis(msg_);
  }

private:
  ::urscript_interfaces::srv::GetEefAngleAxis_Response msg_;
};

class Init_GetEefAngleAxis_Response_success
{
public:
  Init_GetEefAngleAxis_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetEefAngleAxis_Response_error_reason success(::urscript_interfaces::srv::GetEefAngleAxis_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetEefAngleAxis_Response_error_reason(msg_);
  }

private:
  ::urscript_interfaces::srv::GetEefAngleAxis_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::urscript_interfaces::srv::GetEefAngleAxis_Response>()
{
  return urscript_interfaces::srv::builder::Init_GetEefAngleAxis_Response_success();
}

}  // namespace urscript_interfaces

#endif  // URSCRIPT_INTERFACES__SRV__DETAIL__GET_EEF_ANGLE_AXIS__BUILDER_HPP_
