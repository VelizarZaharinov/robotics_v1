// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robo_cleaner_interfaces:msg/BatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef ROBO_CLEANER_INTERFACES__MSG__DETAIL__BATTERY_STATUS__BUILDER_HPP_
#define ROBO_CLEANER_INTERFACES__MSG__DETAIL__BATTERY_STATUS__BUILDER_HPP_

#include "robo_cleaner_interfaces/msg/detail/battery_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robo_cleaner_interfaces
{

namespace msg
{

namespace builder
{

class Init_BatteryStatus_moves_left
{
public:
  explicit Init_BatteryStatus_moves_left(::robo_cleaner_interfaces::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  ::robo_cleaner_interfaces::msg::BatteryStatus moves_left(::robo_cleaner_interfaces::msg::BatteryStatus::_moves_left_type arg)
  {
    msg_.moves_left = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_cleaner_interfaces::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_max_moves_on_full_energy
{
public:
  Init_BatteryStatus_max_moves_on_full_energy()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BatteryStatus_moves_left max_moves_on_full_energy(::robo_cleaner_interfaces::msg::BatteryStatus::_max_moves_on_full_energy_type arg)
  {
    msg_.max_moves_on_full_energy = std::move(arg);
    return Init_BatteryStatus_moves_left(msg_);
  }

private:
  ::robo_cleaner_interfaces::msg::BatteryStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_cleaner_interfaces::msg::BatteryStatus>()
{
  return robo_cleaner_interfaces::msg::builder::Init_BatteryStatus_max_moves_on_full_energy();
}

}  // namespace robo_cleaner_interfaces

#endif  // ROBO_CLEANER_INTERFACES__MSG__DETAIL__BATTERY_STATUS__BUILDER_HPP_
