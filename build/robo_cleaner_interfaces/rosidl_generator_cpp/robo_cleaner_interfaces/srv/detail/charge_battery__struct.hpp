// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robo_cleaner_interfaces:srv/ChargeBattery.idl
// generated code does not contain a copyright notice

#ifndef ROBO_CLEANER_INTERFACES__SRV__DETAIL__CHARGE_BATTERY__STRUCT_HPP_
#define ROBO_CLEANER_INTERFACES__SRV__DETAIL__CHARGE_BATTERY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__robo_cleaner_interfaces__srv__ChargeBattery_Request __attribute__((deprecated))
#else
# define DEPRECATED__robo_cleaner_interfaces__srv__ChargeBattery_Request __declspec(deprecated)
#endif

namespace robo_cleaner_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ChargeBattery_Request_
{
  using Type = ChargeBattery_Request_<ContainerAllocator>;

  explicit ChargeBattery_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->charge_turns = 0l;
    }
  }

  explicit ChargeBattery_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->charge_turns = 0l;
    }
  }

  // field types and members
  using _charge_turns_type =
    int32_t;
  _charge_turns_type charge_turns;

  // setters for named parameter idiom
  Type & set__charge_turns(
    const int32_t & _arg)
  {
    this->charge_turns = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t CHARGE_UNTIL_FULL =
    0;

  // pointer types
  using RawPtr =
    robo_cleaner_interfaces::srv::ChargeBattery_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_cleaner_interfaces::srv::ChargeBattery_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_cleaner_interfaces::srv::ChargeBattery_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_cleaner_interfaces::srv::ChargeBattery_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_cleaner_interfaces::srv::ChargeBattery_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_cleaner_interfaces::srv::ChargeBattery_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_cleaner_interfaces::srv::ChargeBattery_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_cleaner_interfaces::srv::ChargeBattery_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_cleaner_interfaces::srv::ChargeBattery_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_cleaner_interfaces::srv::ChargeBattery_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_cleaner_interfaces__srv__ChargeBattery_Request
    std::shared_ptr<robo_cleaner_interfaces::srv::ChargeBattery_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_cleaner_interfaces__srv__ChargeBattery_Request
    std::shared_ptr<robo_cleaner_interfaces::srv::ChargeBattery_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChargeBattery_Request_ & other) const
  {
    if (this->charge_turns != other.charge_turns) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChargeBattery_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChargeBattery_Request_

// alias to use template instance with default allocator
using ChargeBattery_Request =
  robo_cleaner_interfaces::srv::ChargeBattery_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t ChargeBattery_Request_<ContainerAllocator>::CHARGE_UNTIL_FULL;

}  // namespace srv

}  // namespace robo_cleaner_interfaces


// Include directives for member types
// Member 'battery_status'
#include "robo_cleaner_interfaces/msg/detail/battery_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robo_cleaner_interfaces__srv__ChargeBattery_Response __attribute__((deprecated))
#else
# define DEPRECATED__robo_cleaner_interfaces__srv__ChargeBattery_Response __declspec(deprecated)
#endif

namespace robo_cleaner_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ChargeBattery_Response_
{
  using Type = ChargeBattery_Response_<ContainerAllocator>;

  explicit ChargeBattery_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : battery_status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_reason = "";
      this->turns_spend_charging = 0l;
    }
  }

  explicit ChargeBattery_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_reason(_alloc),
    battery_status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_reason = "";
      this->turns_spend_charging = 0l;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _error_reason_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _error_reason_type error_reason;
  using _battery_status_type =
    robo_cleaner_interfaces::msg::BatteryStatus_<ContainerAllocator>;
  _battery_status_type battery_status;
  using _turns_spend_charging_type =
    int32_t;
  _turns_spend_charging_type turns_spend_charging;

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
  Type & set__battery_status(
    const robo_cleaner_interfaces::msg::BatteryStatus_<ContainerAllocator> & _arg)
  {
    this->battery_status = _arg;
    return *this;
  }
  Type & set__turns_spend_charging(
    const int32_t & _arg)
  {
    this->turns_spend_charging = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robo_cleaner_interfaces::srv::ChargeBattery_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_cleaner_interfaces::srv::ChargeBattery_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_cleaner_interfaces::srv::ChargeBattery_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_cleaner_interfaces::srv::ChargeBattery_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_cleaner_interfaces::srv::ChargeBattery_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_cleaner_interfaces::srv::ChargeBattery_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_cleaner_interfaces::srv::ChargeBattery_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_cleaner_interfaces::srv::ChargeBattery_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_cleaner_interfaces::srv::ChargeBattery_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_cleaner_interfaces::srv::ChargeBattery_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_cleaner_interfaces__srv__ChargeBattery_Response
    std::shared_ptr<robo_cleaner_interfaces::srv::ChargeBattery_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_cleaner_interfaces__srv__ChargeBattery_Response
    std::shared_ptr<robo_cleaner_interfaces::srv::ChargeBattery_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChargeBattery_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->error_reason != other.error_reason) {
      return false;
    }
    if (this->battery_status != other.battery_status) {
      return false;
    }
    if (this->turns_spend_charging != other.turns_spend_charging) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChargeBattery_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChargeBattery_Response_

// alias to use template instance with default allocator
using ChargeBattery_Response =
  robo_cleaner_interfaces::srv::ChargeBattery_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robo_cleaner_interfaces

namespace robo_cleaner_interfaces
{

namespace srv
{

struct ChargeBattery
{
  using Request = robo_cleaner_interfaces::srv::ChargeBattery_Request;
  using Response = robo_cleaner_interfaces::srv::ChargeBattery_Response;
};

}  // namespace srv

}  // namespace robo_cleaner_interfaces

#endif  // ROBO_CLEANER_INTERFACES__SRV__DETAIL__CHARGE_BATTERY__STRUCT_HPP_
