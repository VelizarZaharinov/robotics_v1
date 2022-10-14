// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robo_cleaner_interfaces:srv/QueryBatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef ROBO_CLEANER_INTERFACES__SRV__DETAIL__QUERY_BATTERY_STATUS__STRUCT_HPP_
#define ROBO_CLEANER_INTERFACES__SRV__DETAIL__QUERY_BATTERY_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__robo_cleaner_interfaces__srv__QueryBatteryStatus_Request __attribute__((deprecated))
#else
# define DEPRECATED__robo_cleaner_interfaces__srv__QueryBatteryStatus_Request __declspec(deprecated)
#endif

namespace robo_cleaner_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct QueryBatteryStatus_Request_
{
  using Type = QueryBatteryStatus_Request_<ContainerAllocator>;

  explicit QueryBatteryStatus_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit QueryBatteryStatus_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    robo_cleaner_interfaces::srv::QueryBatteryStatus_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_cleaner_interfaces::srv::QueryBatteryStatus_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_cleaner_interfaces::srv::QueryBatteryStatus_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_cleaner_interfaces::srv::QueryBatteryStatus_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_cleaner_interfaces::srv::QueryBatteryStatus_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_cleaner_interfaces::srv::QueryBatteryStatus_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_cleaner_interfaces::srv::QueryBatteryStatus_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_cleaner_interfaces::srv::QueryBatteryStatus_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_cleaner_interfaces::srv::QueryBatteryStatus_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_cleaner_interfaces::srv::QueryBatteryStatus_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_cleaner_interfaces__srv__QueryBatteryStatus_Request
    std::shared_ptr<robo_cleaner_interfaces::srv::QueryBatteryStatus_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_cleaner_interfaces__srv__QueryBatteryStatus_Request
    std::shared_ptr<robo_cleaner_interfaces::srv::QueryBatteryStatus_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const QueryBatteryStatus_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const QueryBatteryStatus_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct QueryBatteryStatus_Request_

// alias to use template instance with default allocator
using QueryBatteryStatus_Request =
  robo_cleaner_interfaces::srv::QueryBatteryStatus_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robo_cleaner_interfaces


// Include directives for member types
// Member 'battery_status'
#include "robo_cleaner_interfaces/msg/detail/battery_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robo_cleaner_interfaces__srv__QueryBatteryStatus_Response __attribute__((deprecated))
#else
# define DEPRECATED__robo_cleaner_interfaces__srv__QueryBatteryStatus_Response __declspec(deprecated)
#endif

namespace robo_cleaner_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct QueryBatteryStatus_Response_
{
  using Type = QueryBatteryStatus_Response_<ContainerAllocator>;

  explicit QueryBatteryStatus_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : battery_status(_init)
  {
    (void)_init;
  }

  explicit QueryBatteryStatus_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : battery_status(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _battery_status_type =
    robo_cleaner_interfaces::msg::BatteryStatus_<ContainerAllocator>;
  _battery_status_type battery_status;

  // setters for named parameter idiom
  Type & set__battery_status(
    const robo_cleaner_interfaces::msg::BatteryStatus_<ContainerAllocator> & _arg)
  {
    this->battery_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robo_cleaner_interfaces::srv::QueryBatteryStatus_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_cleaner_interfaces::srv::QueryBatteryStatus_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_cleaner_interfaces::srv::QueryBatteryStatus_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_cleaner_interfaces::srv::QueryBatteryStatus_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_cleaner_interfaces::srv::QueryBatteryStatus_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_cleaner_interfaces::srv::QueryBatteryStatus_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_cleaner_interfaces::srv::QueryBatteryStatus_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_cleaner_interfaces::srv::QueryBatteryStatus_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_cleaner_interfaces::srv::QueryBatteryStatus_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_cleaner_interfaces::srv::QueryBatteryStatus_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_cleaner_interfaces__srv__QueryBatteryStatus_Response
    std::shared_ptr<robo_cleaner_interfaces::srv::QueryBatteryStatus_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_cleaner_interfaces__srv__QueryBatteryStatus_Response
    std::shared_ptr<robo_cleaner_interfaces::srv::QueryBatteryStatus_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const QueryBatteryStatus_Response_ & other) const
  {
    if (this->battery_status != other.battery_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const QueryBatteryStatus_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct QueryBatteryStatus_Response_

// alias to use template instance with default allocator
using QueryBatteryStatus_Response =
  robo_cleaner_interfaces::srv::QueryBatteryStatus_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robo_cleaner_interfaces

namespace robo_cleaner_interfaces
{

namespace srv
{

struct QueryBatteryStatus
{
  using Request = robo_cleaner_interfaces::srv::QueryBatteryStatus_Request;
  using Response = robo_cleaner_interfaces::srv::QueryBatteryStatus_Response;
};

}  // namespace srv

}  // namespace robo_cleaner_interfaces

#endif  // ROBO_CLEANER_INTERFACES__SRV__DETAIL__QUERY_BATTERY_STATUS__STRUCT_HPP_
