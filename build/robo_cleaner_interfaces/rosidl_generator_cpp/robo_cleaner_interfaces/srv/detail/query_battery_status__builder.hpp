// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robo_cleaner_interfaces:srv/QueryBatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef ROBO_CLEANER_INTERFACES__SRV__DETAIL__QUERY_BATTERY_STATUS__BUILDER_HPP_
#define ROBO_CLEANER_INTERFACES__SRV__DETAIL__QUERY_BATTERY_STATUS__BUILDER_HPP_

#include "robo_cleaner_interfaces/srv/detail/query_battery_status__struct.hpp"
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
auto build<::robo_cleaner_interfaces::srv::QueryBatteryStatus_Request>()
{
  return ::robo_cleaner_interfaces::srv::QueryBatteryStatus_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace robo_cleaner_interfaces


namespace robo_cleaner_interfaces
{

namespace srv
{

namespace builder
{

class Init_QueryBatteryStatus_Response_battery_status
{
public:
  Init_QueryBatteryStatus_Response_battery_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robo_cleaner_interfaces::srv::QueryBatteryStatus_Response battery_status(::robo_cleaner_interfaces::srv::QueryBatteryStatus_Response::_battery_status_type arg)
  {
    msg_.battery_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_cleaner_interfaces::srv::QueryBatteryStatus_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_cleaner_interfaces::srv::QueryBatteryStatus_Response>()
{
  return robo_cleaner_interfaces::srv::builder::Init_QueryBatteryStatus_Response_battery_status();
}

}  // namespace robo_cleaner_interfaces

#endif  // ROBO_CLEANER_INTERFACES__SRV__DETAIL__QUERY_BATTERY_STATUS__BUILDER_HPP_
