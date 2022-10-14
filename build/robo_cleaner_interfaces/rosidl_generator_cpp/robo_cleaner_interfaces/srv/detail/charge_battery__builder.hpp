// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robo_cleaner_interfaces:srv/ChargeBattery.idl
// generated code does not contain a copyright notice

#ifndef ROBO_CLEANER_INTERFACES__SRV__DETAIL__CHARGE_BATTERY__BUILDER_HPP_
#define ROBO_CLEANER_INTERFACES__SRV__DETAIL__CHARGE_BATTERY__BUILDER_HPP_

#include "robo_cleaner_interfaces/srv/detail/charge_battery__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robo_cleaner_interfaces
{

namespace srv
{

namespace builder
{

class Init_ChargeBattery_Request_charge_turns
{
public:
  Init_ChargeBattery_Request_charge_turns()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robo_cleaner_interfaces::srv::ChargeBattery_Request charge_turns(::robo_cleaner_interfaces::srv::ChargeBattery_Request::_charge_turns_type arg)
  {
    msg_.charge_turns = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_cleaner_interfaces::srv::ChargeBattery_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_cleaner_interfaces::srv::ChargeBattery_Request>()
{
  return robo_cleaner_interfaces::srv::builder::Init_ChargeBattery_Request_charge_turns();
}

}  // namespace robo_cleaner_interfaces


namespace robo_cleaner_interfaces
{

namespace srv
{

namespace builder
{

class Init_ChargeBattery_Response_turns_spend_charging
{
public:
  explicit Init_ChargeBattery_Response_turns_spend_charging(::robo_cleaner_interfaces::srv::ChargeBattery_Response & msg)
  : msg_(msg)
  {}
  ::robo_cleaner_interfaces::srv::ChargeBattery_Response turns_spend_charging(::robo_cleaner_interfaces::srv::ChargeBattery_Response::_turns_spend_charging_type arg)
  {
    msg_.turns_spend_charging = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_cleaner_interfaces::srv::ChargeBattery_Response msg_;
};

class Init_ChargeBattery_Response_battery_status
{
public:
  explicit Init_ChargeBattery_Response_battery_status(::robo_cleaner_interfaces::srv::ChargeBattery_Response & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Response_turns_spend_charging battery_status(::robo_cleaner_interfaces::srv::ChargeBattery_Response::_battery_status_type arg)
  {
    msg_.battery_status = std::move(arg);
    return Init_ChargeBattery_Response_turns_spend_charging(msg_);
  }

private:
  ::robo_cleaner_interfaces::srv::ChargeBattery_Response msg_;
};

class Init_ChargeBattery_Response_error_reason
{
public:
  explicit Init_ChargeBattery_Response_error_reason(::robo_cleaner_interfaces::srv::ChargeBattery_Response & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Response_battery_status error_reason(::robo_cleaner_interfaces::srv::ChargeBattery_Response::_error_reason_type arg)
  {
    msg_.error_reason = std::move(arg);
    return Init_ChargeBattery_Response_battery_status(msg_);
  }

private:
  ::robo_cleaner_interfaces::srv::ChargeBattery_Response msg_;
};

class Init_ChargeBattery_Response_success
{
public:
  Init_ChargeBattery_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargeBattery_Response_error_reason success(::robo_cleaner_interfaces::srv::ChargeBattery_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ChargeBattery_Response_error_reason(msg_);
  }

private:
  ::robo_cleaner_interfaces::srv::ChargeBattery_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_cleaner_interfaces::srv::ChargeBattery_Response>()
{
  return robo_cleaner_interfaces::srv::builder::Init_ChargeBattery_Response_success();
}

}  // namespace robo_cleaner_interfaces

#endif  // ROBO_CLEANER_INTERFACES__SRV__DETAIL__CHARGE_BATTERY__BUILDER_HPP_
