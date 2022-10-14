// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robo_cleaner_interfaces:msg/InitialRobotState.idl
// generated code does not contain a copyright notice

#ifndef ROBO_CLEANER_INTERFACES__MSG__DETAIL__INITIAL_ROBOT_STATE__STRUCT_HPP_
#define ROBO_CLEANER_INTERFACES__MSG__DETAIL__INITIAL_ROBOT_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'battery_status'
#include "robo_cleaner_interfaces/msg/detail/battery_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robo_cleaner_interfaces__msg__InitialRobotState __attribute__((deprecated))
#else
# define DEPRECATED__robo_cleaner_interfaces__msg__InitialRobotState __declspec(deprecated)
#endif

namespace robo_cleaner_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InitialRobotState_
{
  using Type = InitialRobotState_<ContainerAllocator>;

  explicit InitialRobotState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : battery_status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_tile = 0;
      this->robot_dir = 0l;
    }
  }

  explicit InitialRobotState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : battery_status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_tile = 0;
      this->robot_dir = 0l;
    }
  }

  // field types and members
  using _battery_status_type =
    robo_cleaner_interfaces::msg::BatteryStatus_<ContainerAllocator>;
  _battery_status_type battery_status;
  using _robot_tile_type =
    uint8_t;
  _robot_tile_type robot_tile;
  using _robot_dir_type =
    int32_t;
  _robot_dir_type robot_dir;

  // setters for named parameter idiom
  Type & set__battery_status(
    const robo_cleaner_interfaces::msg::BatteryStatus_<ContainerAllocator> & _arg)
  {
    this->battery_status = _arg;
    return *this;
  }
  Type & set__robot_tile(
    const uint8_t & _arg)
  {
    this->robot_tile = _arg;
    return *this;
  }
  Type & set__robot_dir(
    const int32_t & _arg)
  {
    this->robot_dir = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t DIRECTION_UP =
    0;
  static constexpr int32_t DIRECTION_RIGHT =
    1;
  static constexpr int32_t DIRECTION_DOWN =
    2;
  static constexpr int32_t DIRECTION_LEFT =
    3;

  // pointer types
  using RawPtr =
    robo_cleaner_interfaces::msg::InitialRobotState_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_cleaner_interfaces::msg::InitialRobotState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_cleaner_interfaces::msg::InitialRobotState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_cleaner_interfaces::msg::InitialRobotState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_cleaner_interfaces::msg::InitialRobotState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_cleaner_interfaces::msg::InitialRobotState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_cleaner_interfaces::msg::InitialRobotState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_cleaner_interfaces::msg::InitialRobotState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_cleaner_interfaces::msg::InitialRobotState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_cleaner_interfaces::msg::InitialRobotState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_cleaner_interfaces__msg__InitialRobotState
    std::shared_ptr<robo_cleaner_interfaces::msg::InitialRobotState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_cleaner_interfaces__msg__InitialRobotState
    std::shared_ptr<robo_cleaner_interfaces::msg::InitialRobotState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InitialRobotState_ & other) const
  {
    if (this->battery_status != other.battery_status) {
      return false;
    }
    if (this->robot_tile != other.robot_tile) {
      return false;
    }
    if (this->robot_dir != other.robot_dir) {
      return false;
    }
    return true;
  }
  bool operator!=(const InitialRobotState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InitialRobotState_

// alias to use template instance with default allocator
using InitialRobotState =
  robo_cleaner_interfaces::msg::InitialRobotState_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t InitialRobotState_<ContainerAllocator>::DIRECTION_UP;
template<typename ContainerAllocator>
constexpr int32_t InitialRobotState_<ContainerAllocator>::DIRECTION_RIGHT;
template<typename ContainerAllocator>
constexpr int32_t InitialRobotState_<ContainerAllocator>::DIRECTION_DOWN;
template<typename ContainerAllocator>
constexpr int32_t InitialRobotState_<ContainerAllocator>::DIRECTION_LEFT;

}  // namespace msg

}  // namespace robo_cleaner_interfaces

#endif  // ROBO_CLEANER_INTERFACES__MSG__DETAIL__INITIAL_ROBOT_STATE__STRUCT_HPP_
