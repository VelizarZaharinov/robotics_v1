// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robo_miner_interfaces:msg/FieldPoint.idl
// generated code does not contain a copyright notice

#ifndef ROBO_MINER_INTERFACES__MSG__DETAIL__FIELD_POINT__BUILDER_HPP_
#define ROBO_MINER_INTERFACES__MSG__DETAIL__FIELD_POINT__BUILDER_HPP_

#include "robo_miner_interfaces/msg/detail/field_point__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robo_miner_interfaces
{

namespace msg
{

namespace builder
{

class Init_FieldPoint_col
{
public:
  explicit Init_FieldPoint_col(::robo_miner_interfaces::msg::FieldPoint & msg)
  : msg_(msg)
  {}
  ::robo_miner_interfaces::msg::FieldPoint col(::robo_miner_interfaces::msg::FieldPoint::_col_type arg)
  {
    msg_.col = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_miner_interfaces::msg::FieldPoint msg_;
};

class Init_FieldPoint_row
{
public:
  Init_FieldPoint_row()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FieldPoint_col row(::robo_miner_interfaces::msg::FieldPoint::_row_type arg)
  {
    msg_.row = std::move(arg);
    return Init_FieldPoint_col(msg_);
  }

private:
  ::robo_miner_interfaces::msg::FieldPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_miner_interfaces::msg::FieldPoint>()
{
  return robo_miner_interfaces::msg::builder::Init_FieldPoint_row();
}

}  // namespace robo_miner_interfaces

#endif  // ROBO_MINER_INTERFACES__MSG__DETAIL__FIELD_POINT__BUILDER_HPP_
