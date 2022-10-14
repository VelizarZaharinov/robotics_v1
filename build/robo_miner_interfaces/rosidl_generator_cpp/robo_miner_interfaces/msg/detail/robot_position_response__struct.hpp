// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robo_miner_interfaces:msg/RobotPositionResponse.idl
// generated code does not contain a copyright notice

#ifndef ROBO_MINER_INTERFACES__MSG__DETAIL__ROBOT_POSITION_RESPONSE__STRUCT_HPP_
#define ROBO_MINER_INTERFACES__MSG__DETAIL__ROBOT_POSITION_RESPONSE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__robo_miner_interfaces__msg__RobotPositionResponse __attribute__((deprecated))
#else
# define DEPRECATED__robo_miner_interfaces__msg__RobotPositionResponse __declspec(deprecated)
#endif

namespace robo_miner_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotPositionResponse_
{
  using Type = RobotPositionResponse_<ContainerAllocator>;

  explicit RobotPositionResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_reason = "";
      std::fill<typename std::array<uint8_t, 3>::iterator, uint8_t>(this->surrounding_tiles.begin(), this->surrounding_tiles.end(), 0);
      this->robot_dir = 0l;
    }
  }

  explicit RobotPositionResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_reason(_alloc),
    surrounding_tiles(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_reason = "";
      std::fill<typename std::array<uint8_t, 3>::iterator, uint8_t>(this->surrounding_tiles.begin(), this->surrounding_tiles.end(), 0);
      this->robot_dir = 0l;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _error_reason_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _error_reason_type error_reason;
  using _surrounding_tiles_type =
    std::array<uint8_t, 3>;
  _surrounding_tiles_type surrounding_tiles;
  using _robot_dir_type =
    int32_t;
  _robot_dir_type robot_dir;

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
  Type & set__surrounding_tiles(
    const std::array<uint8_t, 3> & _arg)
  {
    this->surrounding_tiles = _arg;
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
    robo_miner_interfaces::msg::RobotPositionResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_miner_interfaces::msg::RobotPositionResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_miner_interfaces::msg::RobotPositionResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_miner_interfaces::msg::RobotPositionResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_miner_interfaces::msg::RobotPositionResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_miner_interfaces::msg::RobotPositionResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_miner_interfaces::msg::RobotPositionResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_miner_interfaces::msg::RobotPositionResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_miner_interfaces::msg::RobotPositionResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_miner_interfaces::msg::RobotPositionResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_miner_interfaces__msg__RobotPositionResponse
    std::shared_ptr<robo_miner_interfaces::msg::RobotPositionResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_miner_interfaces__msg__RobotPositionResponse
    std::shared_ptr<robo_miner_interfaces::msg::RobotPositionResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotPositionResponse_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->error_reason != other.error_reason) {
      return false;
    }
    if (this->surrounding_tiles != other.surrounding_tiles) {
      return false;
    }
    if (this->robot_dir != other.robot_dir) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotPositionResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotPositionResponse_

// alias to use template instance with default allocator
using RobotPositionResponse =
  robo_miner_interfaces::msg::RobotPositionResponse_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t RobotPositionResponse_<ContainerAllocator>::DIRECTION_UP;
template<typename ContainerAllocator>
constexpr int32_t RobotPositionResponse_<ContainerAllocator>::DIRECTION_RIGHT;
template<typename ContainerAllocator>
constexpr int32_t RobotPositionResponse_<ContainerAllocator>::DIRECTION_DOWN;
template<typename ContainerAllocator>
constexpr int32_t RobotPositionResponse_<ContainerAllocator>::DIRECTION_LEFT;

}  // namespace msg

}  // namespace robo_miner_interfaces

#endif  // ROBO_MINER_INTERFACES__MSG__DETAIL__ROBOT_POSITION_RESPONSE__STRUCT_HPP_
