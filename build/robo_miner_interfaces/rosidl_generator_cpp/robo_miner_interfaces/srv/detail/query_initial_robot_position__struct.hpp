// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robo_miner_interfaces:srv/QueryInitialRobotPosition.idl
// generated code does not contain a copyright notice

#ifndef ROBO_MINER_INTERFACES__SRV__DETAIL__QUERY_INITIAL_ROBOT_POSITION__STRUCT_HPP_
#define ROBO_MINER_INTERFACES__SRV__DETAIL__QUERY_INITIAL_ROBOT_POSITION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__robo_miner_interfaces__srv__QueryInitialRobotPosition_Request __attribute__((deprecated))
#else
# define DEPRECATED__robo_miner_interfaces__srv__QueryInitialRobotPosition_Request __declspec(deprecated)
#endif

namespace robo_miner_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct QueryInitialRobotPosition_Request_
{
  using Type = QueryInitialRobotPosition_Request_<ContainerAllocator>;

  explicit QueryInitialRobotPosition_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit QueryInitialRobotPosition_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    robo_miner_interfaces::srv::QueryInitialRobotPosition_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_miner_interfaces::srv::QueryInitialRobotPosition_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_miner_interfaces::srv::QueryInitialRobotPosition_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_miner_interfaces::srv::QueryInitialRobotPosition_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_miner_interfaces::srv::QueryInitialRobotPosition_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_miner_interfaces::srv::QueryInitialRobotPosition_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_miner_interfaces::srv::QueryInitialRobotPosition_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_miner_interfaces::srv::QueryInitialRobotPosition_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_miner_interfaces::srv::QueryInitialRobotPosition_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_miner_interfaces::srv::QueryInitialRobotPosition_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_miner_interfaces__srv__QueryInitialRobotPosition_Request
    std::shared_ptr<robo_miner_interfaces::srv::QueryInitialRobotPosition_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_miner_interfaces__srv__QueryInitialRobotPosition_Request
    std::shared_ptr<robo_miner_interfaces::srv::QueryInitialRobotPosition_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const QueryInitialRobotPosition_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const QueryInitialRobotPosition_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct QueryInitialRobotPosition_Request_

// alias to use template instance with default allocator
using QueryInitialRobotPosition_Request =
  robo_miner_interfaces::srv::QueryInitialRobotPosition_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robo_miner_interfaces


// Include directives for member types
// Member 'robot_position_response'
#include "robo_miner_interfaces/msg/detail/robot_position_response__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robo_miner_interfaces__srv__QueryInitialRobotPosition_Response __attribute__((deprecated))
#else
# define DEPRECATED__robo_miner_interfaces__srv__QueryInitialRobotPosition_Response __declspec(deprecated)
#endif

namespace robo_miner_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct QueryInitialRobotPosition_Response_
{
  using Type = QueryInitialRobotPosition_Response_<ContainerAllocator>;

  explicit QueryInitialRobotPosition_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_position_response(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_initial_tile = 0;
    }
  }

  explicit QueryInitialRobotPosition_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_position_response(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_initial_tile = 0;
    }
  }

  // field types and members
  using _robot_position_response_type =
    robo_miner_interfaces::msg::RobotPositionResponse_<ContainerAllocator>;
  _robot_position_response_type robot_position_response;
  using _robot_initial_tile_type =
    uint8_t;
  _robot_initial_tile_type robot_initial_tile;

  // setters for named parameter idiom
  Type & set__robot_position_response(
    const robo_miner_interfaces::msg::RobotPositionResponse_<ContainerAllocator> & _arg)
  {
    this->robot_position_response = _arg;
    return *this;
  }
  Type & set__robot_initial_tile(
    const uint8_t & _arg)
  {
    this->robot_initial_tile = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robo_miner_interfaces::srv::QueryInitialRobotPosition_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_miner_interfaces::srv::QueryInitialRobotPosition_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_miner_interfaces::srv::QueryInitialRobotPosition_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_miner_interfaces::srv::QueryInitialRobotPosition_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_miner_interfaces::srv::QueryInitialRobotPosition_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_miner_interfaces::srv::QueryInitialRobotPosition_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_miner_interfaces::srv::QueryInitialRobotPosition_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_miner_interfaces::srv::QueryInitialRobotPosition_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_miner_interfaces::srv::QueryInitialRobotPosition_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_miner_interfaces::srv::QueryInitialRobotPosition_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_miner_interfaces__srv__QueryInitialRobotPosition_Response
    std::shared_ptr<robo_miner_interfaces::srv::QueryInitialRobotPosition_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_miner_interfaces__srv__QueryInitialRobotPosition_Response
    std::shared_ptr<robo_miner_interfaces::srv::QueryInitialRobotPosition_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const QueryInitialRobotPosition_Response_ & other) const
  {
    if (this->robot_position_response != other.robot_position_response) {
      return false;
    }
    if (this->robot_initial_tile != other.robot_initial_tile) {
      return false;
    }
    return true;
  }
  bool operator!=(const QueryInitialRobotPosition_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct QueryInitialRobotPosition_Response_

// alias to use template instance with default allocator
using QueryInitialRobotPosition_Response =
  robo_miner_interfaces::srv::QueryInitialRobotPosition_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robo_miner_interfaces

namespace robo_miner_interfaces
{

namespace srv
{

struct QueryInitialRobotPosition
{
  using Request = robo_miner_interfaces::srv::QueryInitialRobotPosition_Request;
  using Response = robo_miner_interfaces::srv::QueryInitialRobotPosition_Response;
};

}  // namespace srv

}  // namespace robo_miner_interfaces

#endif  // ROBO_MINER_INTERFACES__SRV__DETAIL__QUERY_INITIAL_ROBOT_POSITION__STRUCT_HPP_
