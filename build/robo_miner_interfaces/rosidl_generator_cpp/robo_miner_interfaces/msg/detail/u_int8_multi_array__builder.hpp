// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robo_miner_interfaces:msg/UInt8MultiArray.idl
// generated code does not contain a copyright notice

#ifndef ROBO_MINER_INTERFACES__MSG__DETAIL__U_INT8_MULTI_ARRAY__BUILDER_HPP_
#define ROBO_MINER_INTERFACES__MSG__DETAIL__U_INT8_MULTI_ARRAY__BUILDER_HPP_

#include "robo_miner_interfaces/msg/detail/u_int8_multi_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robo_miner_interfaces
{

namespace msg
{

namespace builder
{

class Init_UInt8MultiArray_data
{
public:
  explicit Init_UInt8MultiArray_data(::robo_miner_interfaces::msg::UInt8MultiArray & msg)
  : msg_(msg)
  {}
  ::robo_miner_interfaces::msg::UInt8MultiArray data(::robo_miner_interfaces::msg::UInt8MultiArray::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_miner_interfaces::msg::UInt8MultiArray msg_;
};

class Init_UInt8MultiArray_cols
{
public:
  explicit Init_UInt8MultiArray_cols(::robo_miner_interfaces::msg::UInt8MultiArray & msg)
  : msg_(msg)
  {}
  Init_UInt8MultiArray_data cols(::robo_miner_interfaces::msg::UInt8MultiArray::_cols_type arg)
  {
    msg_.cols = std::move(arg);
    return Init_UInt8MultiArray_data(msg_);
  }

private:
  ::robo_miner_interfaces::msg::UInt8MultiArray msg_;
};

class Init_UInt8MultiArray_rows
{
public:
  Init_UInt8MultiArray_rows()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UInt8MultiArray_cols rows(::robo_miner_interfaces::msg::UInt8MultiArray::_rows_type arg)
  {
    msg_.rows = std::move(arg);
    return Init_UInt8MultiArray_cols(msg_);
  }

private:
  ::robo_miner_interfaces::msg::UInt8MultiArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_miner_interfaces::msg::UInt8MultiArray>()
{
  return robo_miner_interfaces::msg::builder::Init_UInt8MultiArray_rows();
}

}  // namespace robo_miner_interfaces

#endif  // ROBO_MINER_INTERFACES__MSG__DETAIL__U_INT8_MULTI_ARRAY__BUILDER_HPP_
