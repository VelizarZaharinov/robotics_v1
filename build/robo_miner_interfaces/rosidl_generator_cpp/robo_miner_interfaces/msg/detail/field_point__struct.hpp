// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robo_miner_interfaces:msg/FieldPoint.idl
// generated code does not contain a copyright notice

#ifndef ROBO_MINER_INTERFACES__MSG__DETAIL__FIELD_POINT__STRUCT_HPP_
#define ROBO_MINER_INTERFACES__MSG__DETAIL__FIELD_POINT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__robo_miner_interfaces__msg__FieldPoint __attribute__((deprecated))
#else
# define DEPRECATED__robo_miner_interfaces__msg__FieldPoint __declspec(deprecated)
#endif

namespace robo_miner_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FieldPoint_
{
  using Type = FieldPoint_<ContainerAllocator>;

  explicit FieldPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->row = 0l;
      this->col = 0l;
    }
  }

  explicit FieldPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->row = 0l;
      this->col = 0l;
    }
  }

  // field types and members
  using _row_type =
    int32_t;
  _row_type row;
  using _col_type =
    int32_t;
  _col_type col;

  // setters for named parameter idiom
  Type & set__row(
    const int32_t & _arg)
  {
    this->row = _arg;
    return *this;
  }
  Type & set__col(
    const int32_t & _arg)
  {
    this->col = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robo_miner_interfaces::msg::FieldPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_miner_interfaces::msg::FieldPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_miner_interfaces::msg::FieldPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_miner_interfaces::msg::FieldPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_miner_interfaces::msg::FieldPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_miner_interfaces::msg::FieldPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_miner_interfaces::msg::FieldPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_miner_interfaces::msg::FieldPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_miner_interfaces::msg::FieldPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_miner_interfaces::msg::FieldPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_miner_interfaces__msg__FieldPoint
    std::shared_ptr<robo_miner_interfaces::msg::FieldPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_miner_interfaces__msg__FieldPoint
    std::shared_ptr<robo_miner_interfaces::msg::FieldPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FieldPoint_ & other) const
  {
    if (this->row != other.row) {
      return false;
    }
    if (this->col != other.col) {
      return false;
    }
    return true;
  }
  bool operator!=(const FieldPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FieldPoint_

// alias to use template instance with default allocator
using FieldPoint =
  robo_miner_interfaces::msg::FieldPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robo_miner_interfaces

#endif  // ROBO_MINER_INTERFACES__MSG__DETAIL__FIELD_POINT__STRUCT_HPP_
