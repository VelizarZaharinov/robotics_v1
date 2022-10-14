// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robo_miner_interfaces:msg/UInt8MultiArray.idl
// generated code does not contain a copyright notice

#ifndef ROBO_MINER_INTERFACES__MSG__DETAIL__U_INT8_MULTI_ARRAY__STRUCT_HPP_
#define ROBO_MINER_INTERFACES__MSG__DETAIL__U_INT8_MULTI_ARRAY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__robo_miner_interfaces__msg__UInt8MultiArray __attribute__((deprecated))
#else
# define DEPRECATED__robo_miner_interfaces__msg__UInt8MultiArray __declspec(deprecated)
#endif

namespace robo_miner_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UInt8MultiArray_
{
  using Type = UInt8MultiArray_<ContainerAllocator>;

  explicit UInt8MultiArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rows = 0ul;
      this->cols = 0ul;
    }
  }

  explicit UInt8MultiArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rows = 0ul;
      this->cols = 0ul;
    }
  }

  // field types and members
  using _rows_type =
    uint32_t;
  _rows_type rows;
  using _cols_type =
    uint32_t;
  _cols_type cols;
  using _data_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__rows(
    const uint32_t & _arg)
  {
    this->rows = _arg;
    return *this;
  }
  Type & set__cols(
    const uint32_t & _arg)
  {
    this->cols = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robo_miner_interfaces::msg::UInt8MultiArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_miner_interfaces::msg::UInt8MultiArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_miner_interfaces::msg::UInt8MultiArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_miner_interfaces::msg::UInt8MultiArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_miner_interfaces::msg::UInt8MultiArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_miner_interfaces::msg::UInt8MultiArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_miner_interfaces::msg::UInt8MultiArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_miner_interfaces::msg::UInt8MultiArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_miner_interfaces::msg::UInt8MultiArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_miner_interfaces::msg::UInt8MultiArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_miner_interfaces__msg__UInt8MultiArray
    std::shared_ptr<robo_miner_interfaces::msg::UInt8MultiArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_miner_interfaces__msg__UInt8MultiArray
    std::shared_ptr<robo_miner_interfaces::msg::UInt8MultiArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UInt8MultiArray_ & other) const
  {
    if (this->rows != other.rows) {
      return false;
    }
    if (this->cols != other.cols) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const UInt8MultiArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UInt8MultiArray_

// alias to use template instance with default allocator
using UInt8MultiArray =
  robo_miner_interfaces::msg::UInt8MultiArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robo_miner_interfaces

#endif  // ROBO_MINER_INTERFACES__MSG__DETAIL__U_INT8_MULTI_ARRAY__STRUCT_HPP_
