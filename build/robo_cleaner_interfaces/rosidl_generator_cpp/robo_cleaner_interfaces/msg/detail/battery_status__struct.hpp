// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robo_cleaner_interfaces:msg/BatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef ROBO_CLEANER_INTERFACES__MSG__DETAIL__BATTERY_STATUS__STRUCT_HPP_
#define ROBO_CLEANER_INTERFACES__MSG__DETAIL__BATTERY_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__robo_cleaner_interfaces__msg__BatteryStatus __attribute__((deprecated))
#else
# define DEPRECATED__robo_cleaner_interfaces__msg__BatteryStatus __declspec(deprecated)
#endif

namespace robo_cleaner_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BatteryStatus_
{
  using Type = BatteryStatus_<ContainerAllocator>;

  explicit BatteryStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_moves_on_full_energy = 0l;
      this->moves_left = 0l;
    }
  }

  explicit BatteryStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_moves_on_full_energy = 0l;
      this->moves_left = 0l;
    }
  }

  // field types and members
  using _max_moves_on_full_energy_type =
    int32_t;
  _max_moves_on_full_energy_type max_moves_on_full_energy;
  using _moves_left_type =
    int32_t;
  _moves_left_type moves_left;

  // setters for named parameter idiom
  Type & set__max_moves_on_full_energy(
    const int32_t & _arg)
  {
    this->max_moves_on_full_energy = _arg;
    return *this;
  }
  Type & set__moves_left(
    const int32_t & _arg)
  {
    this->moves_left = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robo_cleaner_interfaces::msg::BatteryStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_cleaner_interfaces::msg::BatteryStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_cleaner_interfaces::msg::BatteryStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_cleaner_interfaces::msg::BatteryStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_cleaner_interfaces::msg::BatteryStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_cleaner_interfaces::msg::BatteryStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_cleaner_interfaces::msg::BatteryStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_cleaner_interfaces::msg::BatteryStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_cleaner_interfaces::msg::BatteryStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_cleaner_interfaces::msg::BatteryStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_cleaner_interfaces__msg__BatteryStatus
    std::shared_ptr<robo_cleaner_interfaces::msg::BatteryStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_cleaner_interfaces__msg__BatteryStatus
    std::shared_ptr<robo_cleaner_interfaces::msg::BatteryStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatteryStatus_ & other) const
  {
    if (this->max_moves_on_full_energy != other.max_moves_on_full_energy) {
      return false;
    }
    if (this->moves_left != other.moves_left) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatteryStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatteryStatus_

// alias to use template instance with default allocator
using BatteryStatus =
  robo_cleaner_interfaces::msg::BatteryStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robo_cleaner_interfaces

#endif  // ROBO_CLEANER_INTERFACES__MSG__DETAIL__BATTERY_STATUS__STRUCT_HPP_
