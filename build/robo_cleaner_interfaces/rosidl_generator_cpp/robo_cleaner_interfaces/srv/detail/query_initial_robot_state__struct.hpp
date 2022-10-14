// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robo_cleaner_interfaces:srv/QueryInitialRobotState.idl
// generated code does not contain a copyright notice

#ifndef ROBO_CLEANER_INTERFACES__SRV__DETAIL__QUERY_INITIAL_ROBOT_STATE__STRUCT_HPP_
#define ROBO_CLEANER_INTERFACES__SRV__DETAIL__QUERY_INITIAL_ROBOT_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__robo_cleaner_interfaces__srv__QueryInitialRobotState_Request __attribute__((deprecated))
#else
# define DEPRECATED__robo_cleaner_interfaces__srv__QueryInitialRobotState_Request __declspec(deprecated)
#endif

namespace robo_cleaner_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct QueryInitialRobotState_Request_
{
  using Type = QueryInitialRobotState_Request_<ContainerAllocator>;

  explicit QueryInitialRobotState_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit QueryInitialRobotState_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    robo_cleaner_interfaces::srv::QueryInitialRobotState_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_cleaner_interfaces::srv::QueryInitialRobotState_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_cleaner_interfaces::srv::QueryInitialRobotState_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_cleaner_interfaces::srv::QueryInitialRobotState_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_cleaner_interfaces::srv::QueryInitialRobotState_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_cleaner_interfaces::srv::QueryInitialRobotState_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_cleaner_interfaces::srv::QueryInitialRobotState_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_cleaner_interfaces::srv::QueryInitialRobotState_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_cleaner_interfaces::srv::QueryInitialRobotState_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_cleaner_interfaces::srv::QueryInitialRobotState_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_cleaner_interfaces__srv__QueryInitialRobotState_Request
    std::shared_ptr<robo_cleaner_interfaces::srv::QueryInitialRobotState_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_cleaner_interfaces__srv__QueryInitialRobotState_Request
    std::shared_ptr<robo_cleaner_interfaces::srv::QueryInitialRobotState_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const QueryInitialRobotState_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const QueryInitialRobotState_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct QueryInitialRobotState_Request_

// alias to use template instance with default allocator
using QueryInitialRobotState_Request =
  robo_cleaner_interfaces::srv::QueryInitialRobotState_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robo_cleaner_interfaces


// Include directives for member types
// Member 'initial_robot_state'
#include "robo_cleaner_interfaces/msg/detail/initial_robot_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robo_cleaner_interfaces__srv__QueryInitialRobotState_Response __attribute__((deprecated))
#else
# define DEPRECATED__robo_cleaner_interfaces__srv__QueryInitialRobotState_Response __declspec(deprecated)
#endif

namespace robo_cleaner_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct QueryInitialRobotState_Response_
{
  using Type = QueryInitialRobotState_Response_<ContainerAllocator>;

  explicit QueryInitialRobotState_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : initial_robot_state(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_reason = "";
    }
  }

  explicit QueryInitialRobotState_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_reason(_alloc),
    initial_robot_state(_alloc, _init)
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
  using _initial_robot_state_type =
    robo_cleaner_interfaces::msg::InitialRobotState_<ContainerAllocator>;
  _initial_robot_state_type initial_robot_state;

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
  Type & set__initial_robot_state(
    const robo_cleaner_interfaces::msg::InitialRobotState_<ContainerAllocator> & _arg)
  {
    this->initial_robot_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robo_cleaner_interfaces::srv::QueryInitialRobotState_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_cleaner_interfaces::srv::QueryInitialRobotState_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_cleaner_interfaces::srv::QueryInitialRobotState_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_cleaner_interfaces::srv::QueryInitialRobotState_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_cleaner_interfaces::srv::QueryInitialRobotState_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_cleaner_interfaces::srv::QueryInitialRobotState_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_cleaner_interfaces::srv::QueryInitialRobotState_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_cleaner_interfaces::srv::QueryInitialRobotState_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_cleaner_interfaces::srv::QueryInitialRobotState_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_cleaner_interfaces::srv::QueryInitialRobotState_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_cleaner_interfaces__srv__QueryInitialRobotState_Response
    std::shared_ptr<robo_cleaner_interfaces::srv::QueryInitialRobotState_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_cleaner_interfaces__srv__QueryInitialRobotState_Response
    std::shared_ptr<robo_cleaner_interfaces::srv::QueryInitialRobotState_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const QueryInitialRobotState_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->error_reason != other.error_reason) {
      return false;
    }
    if (this->initial_robot_state != other.initial_robot_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const QueryInitialRobotState_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct QueryInitialRobotState_Response_

// alias to use template instance with default allocator
using QueryInitialRobotState_Response =
  robo_cleaner_interfaces::srv::QueryInitialRobotState_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robo_cleaner_interfaces

namespace robo_cleaner_interfaces
{

namespace srv
{

struct QueryInitialRobotState
{
  using Request = robo_cleaner_interfaces::srv::QueryInitialRobotState_Request;
  using Response = robo_cleaner_interfaces::srv::QueryInitialRobotState_Response;
};

}  // namespace srv

}  // namespace robo_cleaner_interfaces

#endif  // ROBO_CLEANER_INTERFACES__SRV__DETAIL__QUERY_INITIAL_ROBOT_STATE__STRUCT_HPP_
