// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from urscript_interfaces:srv/UrScript.idl
// generated code does not contain a copyright notice

#ifndef URSCRIPT_INTERFACES__SRV__DETAIL__UR_SCRIPT__STRUCT_HPP_
#define URSCRIPT_INTERFACES__SRV__DETAIL__UR_SCRIPT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__urscript_interfaces__srv__UrScript_Request __attribute__((deprecated))
#else
# define DEPRECATED__urscript_interfaces__srv__UrScript_Request __declspec(deprecated)
#endif

namespace urscript_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UrScript_Request_
{
  using Type = UrScript_Request_<ContainerAllocator>;

  explicit UrScript_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = "";
    }
  }

  explicit UrScript_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = "";
    }
  }

  // field types and members
  using _data_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    urscript_interfaces::srv::UrScript_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const urscript_interfaces::srv::UrScript_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<urscript_interfaces::srv::UrScript_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<urscript_interfaces::srv::UrScript_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      urscript_interfaces::srv::UrScript_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<urscript_interfaces::srv::UrScript_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      urscript_interfaces::srv::UrScript_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<urscript_interfaces::srv::UrScript_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<urscript_interfaces::srv::UrScript_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<urscript_interfaces::srv::UrScript_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__urscript_interfaces__srv__UrScript_Request
    std::shared_ptr<urscript_interfaces::srv::UrScript_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__urscript_interfaces__srv__UrScript_Request
    std::shared_ptr<urscript_interfaces::srv::UrScript_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UrScript_Request_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const UrScript_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UrScript_Request_

// alias to use template instance with default allocator
using UrScript_Request =
  urscript_interfaces::srv::UrScript_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace urscript_interfaces


#ifndef _WIN32
# define DEPRECATED__urscript_interfaces__srv__UrScript_Response __attribute__((deprecated))
#else
# define DEPRECATED__urscript_interfaces__srv__UrScript_Response __declspec(deprecated)
#endif

namespace urscript_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UrScript_Response_
{
  using Type = UrScript_Response_<ContainerAllocator>;

  explicit UrScript_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_reason = "";
    }
  }

  explicit UrScript_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_reason = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _error_reason_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _error_reason_type error_reason;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__error_reason(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->error_reason = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    urscript_interfaces::srv::UrScript_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const urscript_interfaces::srv::UrScript_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<urscript_interfaces::srv::UrScript_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<urscript_interfaces::srv::UrScript_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      urscript_interfaces::srv::UrScript_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<urscript_interfaces::srv::UrScript_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      urscript_interfaces::srv::UrScript_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<urscript_interfaces::srv::UrScript_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<urscript_interfaces::srv::UrScript_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<urscript_interfaces::srv::UrScript_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__urscript_interfaces__srv__UrScript_Response
    std::shared_ptr<urscript_interfaces::srv::UrScript_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__urscript_interfaces__srv__UrScript_Response
    std::shared_ptr<urscript_interfaces::srv::UrScript_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UrScript_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->error_reason != other.error_reason) {
      return false;
    }
    return true;
  }
  bool operator!=(const UrScript_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UrScript_Response_

// alias to use template instance with default allocator
using UrScript_Response =
  urscript_interfaces::srv::UrScript_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace urscript_interfaces

namespace urscript_interfaces
{

namespace srv
{

struct UrScript
{
  using Request = urscript_interfaces::srv::UrScript_Request;
  using Response = urscript_interfaces::srv::UrScript_Response;
};

}  // namespace srv

}  // namespace urscript_interfaces

#endif  // URSCRIPT_INTERFACES__SRV__DETAIL__UR_SCRIPT__STRUCT_HPP_
