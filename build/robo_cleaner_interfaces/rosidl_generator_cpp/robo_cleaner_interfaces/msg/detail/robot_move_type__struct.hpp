// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robo_cleaner_interfaces:msg/RobotMoveType.idl
// generated code does not contain a copyright notice

#ifndef ROBO_CLEANER_INTERFACES__MSG__DETAIL__ROBOT_MOVE_TYPE__STRUCT_HPP_
#define ROBO_CLEANER_INTERFACES__MSG__DETAIL__ROBOT_MOVE_TYPE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__robo_cleaner_interfaces__msg__RobotMoveType __attribute__((deprecated))
#else
# define DEPRECATED__robo_cleaner_interfaces__msg__RobotMoveType __declspec(deprecated)
#endif

namespace robo_cleaner_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotMoveType_
{
  using Type = RobotMoveType_<ContainerAllocator>;

  explicit RobotMoveType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->move_type = 0;
    }
  }

  explicit RobotMoveType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->move_type = 0;
    }
  }

  // field types and members
  using _move_type_type =
    int8_t;
  _move_type_type move_type;

  // setters for named parameter idiom
  Type & set__move_type(
    const int8_t & _arg)
  {
    this->move_type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t FORWARD =
    0;
  static constexpr int8_t ROTATE_LEFT =
    1;
  static constexpr int8_t ROTATE_RIGHT =
    2;

  // pointer types
  using RawPtr =
    robo_cleaner_interfaces::msg::RobotMoveType_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_cleaner_interfaces::msg::RobotMoveType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_cleaner_interfaces::msg::RobotMoveType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_cleaner_interfaces::msg::RobotMoveType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_cleaner_interfaces::msg::RobotMoveType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_cleaner_interfaces::msg::RobotMoveType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_cleaner_interfaces::msg::RobotMoveType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_cleaner_interfaces::msg::RobotMoveType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_cleaner_interfaces::msg::RobotMoveType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_cleaner_interfaces::msg::RobotMoveType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_cleaner_interfaces__msg__RobotMoveType
    std::shared_ptr<robo_cleaner_interfaces::msg::RobotMoveType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_cleaner_interfaces__msg__RobotMoveType
    std::shared_ptr<robo_cleaner_interfaces::msg::RobotMoveType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotMoveType_ & other) const
  {
    if (this->move_type != other.move_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotMoveType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotMoveType_

// alias to use template instance with default allocator
using RobotMoveType =
  robo_cleaner_interfaces::msg::RobotMoveType_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int8_t RobotMoveType_<ContainerAllocator>::FORWARD;
template<typename ContainerAllocator>
constexpr int8_t RobotMoveType_<ContainerAllocator>::ROTATE_LEFT;
template<typename ContainerAllocator>
constexpr int8_t RobotMoveType_<ContainerAllocator>::ROTATE_RIGHT;

}  // namespace msg

}  // namespace robo_cleaner_interfaces

#endif  // ROBO_CLEANER_INTERFACES__MSG__DETAIL__ROBOT_MOVE_TYPE__STRUCT_HPP_
