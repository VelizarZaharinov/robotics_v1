// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robo_cleaner_interfaces:msg/UserAuthenticate.idl
// generated code does not contain a copyright notice

#ifndef ROBO_CLEANER_INTERFACES__MSG__DETAIL__USER_AUTHENTICATE__BUILDER_HPP_
#define ROBO_CLEANER_INTERFACES__MSG__DETAIL__USER_AUTHENTICATE__BUILDER_HPP_

#include "robo_cleaner_interfaces/msg/detail/user_authenticate__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robo_cleaner_interfaces
{

namespace msg
{

namespace builder
{

class Init_UserAuthenticate_commit_sha
{
public:
  explicit Init_UserAuthenticate_commit_sha(::robo_cleaner_interfaces::msg::UserAuthenticate & msg)
  : msg_(msg)
  {}
  ::robo_cleaner_interfaces::msg::UserAuthenticate commit_sha(::robo_cleaner_interfaces::msg::UserAuthenticate::_commit_sha_type arg)
  {
    msg_.commit_sha = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_cleaner_interfaces::msg::UserAuthenticate msg_;
};

class Init_UserAuthenticate_repository
{
public:
  explicit Init_UserAuthenticate_repository(::robo_cleaner_interfaces::msg::UserAuthenticate & msg)
  : msg_(msg)
  {}
  Init_UserAuthenticate_commit_sha repository(::robo_cleaner_interfaces::msg::UserAuthenticate::_repository_type arg)
  {
    msg_.repository = std::move(arg);
    return Init_UserAuthenticate_commit_sha(msg_);
  }

private:
  ::robo_cleaner_interfaces::msg::UserAuthenticate msg_;
};

class Init_UserAuthenticate_user
{
public:
  Init_UserAuthenticate_user()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UserAuthenticate_repository user(::robo_cleaner_interfaces::msg::UserAuthenticate::_user_type arg)
  {
    msg_.user = std::move(arg);
    return Init_UserAuthenticate_repository(msg_);
  }

private:
  ::robo_cleaner_interfaces::msg::UserAuthenticate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_cleaner_interfaces::msg::UserAuthenticate>()
{
  return robo_cleaner_interfaces::msg::builder::Init_UserAuthenticate_user();
}

}  // namespace robo_cleaner_interfaces

#endif  // ROBO_CLEANER_INTERFACES__MSG__DETAIL__USER_AUTHENTICATE__BUILDER_HPP_
