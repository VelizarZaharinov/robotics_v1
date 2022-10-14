// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robo_miner_interfaces:srv/RobotMove.idl
// generated code does not contain a copyright notice

#ifndef ROBO_MINER_INTERFACES__SRV__DETAIL__ROBOT_MOVE__STRUCT_HPP_
#define ROBO_MINER_INTERFACES__SRV__DETAIL__ROBOT_MOVE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'robot_move_type'
#include "robo_miner_interfaces/msg/detail/robot_move_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robo_miner_interfaces__srv__RobotMove_Request __attribute__((deprecated))
#else
# define DEPRECATED__robo_miner_interfaces__srv__RobotMove_Request __declspec(deprecated)
#endif

namespace robo_miner_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RobotMove_Request_
{
  using Type = RobotMove_Request_<ContainerAllocator>;

  explicit RobotMove_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_move_type(_init)
  {
    (void)_init;
  }

  explicit RobotMove_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_move_type(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _robot_move_type_type =
    robo_miner_interfaces::msg::RobotMoveType_<ContainerAllocator>;
  _robot_move_type_type robot_move_type;

  // setters for named parameter idiom
  Type & set__robot_move_type(
    const robo_miner_interfaces::msg::RobotMoveType_<ContainerAllocator> & _arg)
  {
    this->robot_move_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robo_miner_interfaces::srv::RobotMove_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_miner_interfaces::srv::RobotMove_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_miner_interfaces::srv::RobotMove_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_miner_interfaces::srv::RobotMove_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_miner_interfaces::srv::RobotMove_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_miner_interfaces::srv::RobotMove_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_miner_interfaces::srv::RobotMove_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_miner_interfaces::srv::RobotMove_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_miner_interfaces::srv::RobotMove_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_miner_interfaces::srv::RobotMove_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_miner_interfaces__srv__RobotMove_Request
    std::shared_ptr<robo_miner_interfaces::srv::RobotMove_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_miner_interfaces__srv__RobotMove_Request
    std::shared_ptr<robo_miner_interfaces::srv::RobotMove_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotMove_Request_ & other) const
  {
    if (this->robot_move_type != other.robot_move_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotMove_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotMove_Request_

// alias to use template instance with default allocator
using RobotMove_Request =
  robo_miner_interfaces::srv::RobotMove_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robo_miner_interfaces


// Include directives for member types
// Member 'robot_position_response'
#include "robo_miner_interfaces/msg/detail/robot_position_response__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robo_miner_interfaces__srv__RobotMove_Response __attribute__((deprecated))
#else
# define DEPRECATED__robo_miner_interfaces__srv__RobotMove_Response __declspec(deprecated)
#endif

namespace robo_miner_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RobotMove_Response_
{
  using Type = RobotMove_Response_<ContainerAllocator>;

  explicit RobotMove_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_position_response(_init)
  {
    (void)_init;
  }

  explicit RobotMove_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_position_response(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _robot_position_response_type =
    robo_miner_interfaces::msg::RobotPositionResponse_<ContainerAllocator>;
  _robot_position_response_type robot_position_response;

  // setters for named parameter idiom
  Type & set__robot_position_response(
    const robo_miner_interfaces::msg::RobotPositionResponse_<ContainerAllocator> & _arg)
  {
    this->robot_position_response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robo_miner_interfaces::srv::RobotMove_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_miner_interfaces::srv::RobotMove_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_miner_interfaces::srv::RobotMove_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_miner_interfaces::srv::RobotMove_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_miner_interfaces::srv::RobotMove_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_miner_interfaces::srv::RobotMove_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_miner_interfaces::srv::RobotMove_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_miner_interfaces::srv::RobotMove_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_miner_interfaces::srv::RobotMove_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_miner_interfaces::srv::RobotMove_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_miner_interfaces__srv__RobotMove_Response
    std::shared_ptr<robo_miner_interfaces::srv::RobotMove_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_miner_interfaces__srv__RobotMove_Response
    std::shared_ptr<robo_miner_interfaces::srv::RobotMove_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotMove_Response_ & other) const
  {
    if (this->robot_position_response != other.robot_position_response) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotMove_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotMove_Response_

// alias to use template instance with default allocator
using RobotMove_Response =
  robo_miner_interfaces::srv::RobotMove_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robo_miner_interfaces

namespace robo_miner_interfaces
{

namespace srv
{

struct RobotMove
{
  using Request = robo_miner_interfaces::srv::RobotMove_Request;
  using Response = robo_miner_interfaces::srv::RobotMove_Response;
};

}  // namespace srv

}  // namespace robo_miner_interfaces

#endif  // ROBO_MINER_INTERFACES__SRV__DETAIL__ROBOT_MOVE__STRUCT_HPP_
