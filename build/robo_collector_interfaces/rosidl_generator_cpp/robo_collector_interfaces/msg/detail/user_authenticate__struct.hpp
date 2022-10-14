// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robo_collector_interfaces:msg/UserAuthenticate.idl
// generated code does not contain a copyright notice

#ifndef ROBO_COLLECTOR_INTERFACES__MSG__DETAIL__USER_AUTHENTICATE__STRUCT_HPP_
#define ROBO_COLLECTOR_INTERFACES__MSG__DETAIL__USER_AUTHENTICATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__robo_collector_interfaces__msg__UserAuthenticate __attribute__((deprecated))
#else
# define DEPRECATED__robo_collector_interfaces__msg__UserAuthenticate __declspec(deprecated)
#endif

namespace robo_collector_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UserAuthenticate_
{
  using Type = UserAuthenticate_<ContainerAllocator>;

  explicit UserAuthenticate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->user = "";
      this->repository = "";
      this->commit_sha = "";
    }
  }

  explicit UserAuthenticate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : user(_alloc),
    repository(_alloc),
    commit_sha(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->user = "";
      this->repository = "";
      this->commit_sha = "";
    }
  }

  // field types and members
  using _user_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _user_type user;
  using _repository_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _repository_type repository;
  using _commit_sha_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _commit_sha_type commit_sha;

  // setters for named parameter idiom
  Type & set__user(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->user = _arg;
    return *this;
  }
  Type & set__repository(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->repository = _arg;
    return *this;
  }
  Type & set__commit_sha(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->commit_sha = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robo_collector_interfaces::msg::UserAuthenticate_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_collector_interfaces::msg::UserAuthenticate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_collector_interfaces::msg::UserAuthenticate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_collector_interfaces::msg::UserAuthenticate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_collector_interfaces::msg::UserAuthenticate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_collector_interfaces::msg::UserAuthenticate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_collector_interfaces::msg::UserAuthenticate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_collector_interfaces::msg::UserAuthenticate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_collector_interfaces::msg::UserAuthenticate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_collector_interfaces::msg::UserAuthenticate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_collector_interfaces__msg__UserAuthenticate
    std::shared_ptr<robo_collector_interfaces::msg::UserAuthenticate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_collector_interfaces__msg__UserAuthenticate
    std::shared_ptr<robo_collector_interfaces::msg::UserAuthenticate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UserAuthenticate_ & other) const
  {
    if (this->user != other.user) {
      return false;
    }
    if (this->repository != other.repository) {
      return false;
    }
    if (this->commit_sha != other.commit_sha) {
      return false;
    }
    return true;
  }
  bool operator!=(const UserAuthenticate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UserAuthenticate_

// alias to use template instance with default allocator
using UserAuthenticate =
  robo_collector_interfaces::msg::UserAuthenticate_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robo_collector_interfaces

#endif  // ROBO_COLLECTOR_INTERFACES__MSG__DETAIL__USER_AUTHENTICATE__STRUCT_HPP_
