// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robo_cleaner_interfaces:action/RobotMove.idl
// generated code does not contain a copyright notice

#ifndef ROBO_CLEANER_INTERFACES__ACTION__DETAIL__ROBOT_MOVE__STRUCT_HPP_
#define ROBO_CLEANER_INTERFACES__ACTION__DETAIL__ROBOT_MOVE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'robot_move_type'
#include "robo_cleaner_interfaces/msg/detail/robot_move_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robo_cleaner_interfaces__action__RobotMove_Goal __attribute__((deprecated))
#else
# define DEPRECATED__robo_cleaner_interfaces__action__RobotMove_Goal __declspec(deprecated)
#endif

namespace robo_cleaner_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RobotMove_Goal_
{
  using Type = RobotMove_Goal_<ContainerAllocator>;

  explicit RobotMove_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_move_type(_init)
  {
    (void)_init;
  }

  explicit RobotMove_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_move_type(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _robot_move_type_type =
    robo_cleaner_interfaces::msg::RobotMoveType_<ContainerAllocator>;
  _robot_move_type_type robot_move_type;

  // setters for named parameter idiom
  Type & set__robot_move_type(
    const robo_cleaner_interfaces::msg::RobotMoveType_<ContainerAllocator> & _arg)
  {
    this->robot_move_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robo_cleaner_interfaces::action::RobotMove_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_cleaner_interfaces::action::RobotMove_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_cleaner_interfaces::action::RobotMove_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_cleaner_interfaces::action::RobotMove_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_cleaner_interfaces::action::RobotMove_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_cleaner_interfaces::action::RobotMove_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_cleaner_interfaces::action::RobotMove_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_cleaner_interfaces::action::RobotMove_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_cleaner_interfaces::action::RobotMove_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_cleaner_interfaces::action::RobotMove_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_cleaner_interfaces__action__RobotMove_Goal
    std::shared_ptr<robo_cleaner_interfaces::action::RobotMove_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_cleaner_interfaces__action__RobotMove_Goal
    std::shared_ptr<robo_cleaner_interfaces::action::RobotMove_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotMove_Goal_ & other) const
  {
    if (this->robot_move_type != other.robot_move_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotMove_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotMove_Goal_

// alias to use template instance with default allocator
using RobotMove_Goal =
  robo_cleaner_interfaces::action::RobotMove_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robo_cleaner_interfaces


#ifndef _WIN32
# define DEPRECATED__robo_cleaner_interfaces__action__RobotMove_Result __attribute__((deprecated))
#else
# define DEPRECATED__robo_cleaner_interfaces__action__RobotMove_Result __declspec(deprecated)
#endif

namespace robo_cleaner_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RobotMove_Result_
{
  using Type = RobotMove_Result_<ContainerAllocator>;

  explicit RobotMove_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_reason = "";
      this->processed_field_marker = 0;
    }
  }

  explicit RobotMove_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_reason = "";
      this->processed_field_marker = 0;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _error_reason_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _error_reason_type error_reason;
  using _processed_field_marker_type =
    uint8_t;
  _processed_field_marker_type processed_field_marker;

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
  Type & set__processed_field_marker(
    const uint8_t & _arg)
  {
    this->processed_field_marker = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robo_cleaner_interfaces::action::RobotMove_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_cleaner_interfaces::action::RobotMove_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_cleaner_interfaces::action::RobotMove_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_cleaner_interfaces::action::RobotMove_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_cleaner_interfaces::action::RobotMove_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_cleaner_interfaces::action::RobotMove_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_cleaner_interfaces::action::RobotMove_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_cleaner_interfaces::action::RobotMove_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_cleaner_interfaces::action::RobotMove_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_cleaner_interfaces::action::RobotMove_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_cleaner_interfaces__action__RobotMove_Result
    std::shared_ptr<robo_cleaner_interfaces::action::RobotMove_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_cleaner_interfaces__action__RobotMove_Result
    std::shared_ptr<robo_cleaner_interfaces::action::RobotMove_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotMove_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->error_reason != other.error_reason) {
      return false;
    }
    if (this->processed_field_marker != other.processed_field_marker) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotMove_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotMove_Result_

// alias to use template instance with default allocator
using RobotMove_Result =
  robo_cleaner_interfaces::action::RobotMove_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robo_cleaner_interfaces


#ifndef _WIN32
# define DEPRECATED__robo_cleaner_interfaces__action__RobotMove_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__robo_cleaner_interfaces__action__RobotMove_Feedback __declspec(deprecated)
#endif

namespace robo_cleaner_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RobotMove_Feedback_
{
  using Type = RobotMove_Feedback_<ContainerAllocator>;

  explicit RobotMove_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->approaching_field_marker = 0;
      this->progress_percent = 0l;
    }
  }

  explicit RobotMove_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->approaching_field_marker = 0;
      this->progress_percent = 0l;
    }
  }

  // field types and members
  using _approaching_field_marker_type =
    uint8_t;
  _approaching_field_marker_type approaching_field_marker;
  using _progress_percent_type =
    int32_t;
  _progress_percent_type progress_percent;

  // setters for named parameter idiom
  Type & set__approaching_field_marker(
    const uint8_t & _arg)
  {
    this->approaching_field_marker = _arg;
    return *this;
  }
  Type & set__progress_percent(
    const int32_t & _arg)
  {
    this->progress_percent = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robo_cleaner_interfaces::action::RobotMove_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_cleaner_interfaces::action::RobotMove_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_cleaner_interfaces::action::RobotMove_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_cleaner_interfaces::action::RobotMove_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_cleaner_interfaces::action::RobotMove_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_cleaner_interfaces::action::RobotMove_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_cleaner_interfaces::action::RobotMove_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_cleaner_interfaces::action::RobotMove_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_cleaner_interfaces::action::RobotMove_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_cleaner_interfaces::action::RobotMove_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_cleaner_interfaces__action__RobotMove_Feedback
    std::shared_ptr<robo_cleaner_interfaces::action::RobotMove_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_cleaner_interfaces__action__RobotMove_Feedback
    std::shared_ptr<robo_cleaner_interfaces::action::RobotMove_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotMove_Feedback_ & other) const
  {
    if (this->approaching_field_marker != other.approaching_field_marker) {
      return false;
    }
    if (this->progress_percent != other.progress_percent) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotMove_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotMove_Feedback_

// alias to use template instance with default allocator
using RobotMove_Feedback =
  robo_cleaner_interfaces::action::RobotMove_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robo_cleaner_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "robo_cleaner_interfaces/action/detail/robot_move__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robo_cleaner_interfaces__action__RobotMove_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__robo_cleaner_interfaces__action__RobotMove_SendGoal_Request __declspec(deprecated)
#endif

namespace robo_cleaner_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RobotMove_SendGoal_Request_
{
  using Type = RobotMove_SendGoal_Request_<ContainerAllocator>;

  explicit RobotMove_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit RobotMove_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    robo_cleaner_interfaces::action::RobotMove_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const robo_cleaner_interfaces::action::RobotMove_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robo_cleaner_interfaces::action::RobotMove_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_cleaner_interfaces::action::RobotMove_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_cleaner_interfaces::action::RobotMove_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_cleaner_interfaces::action::RobotMove_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_cleaner_interfaces::action::RobotMove_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_cleaner_interfaces::action::RobotMove_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_cleaner_interfaces::action::RobotMove_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_cleaner_interfaces::action::RobotMove_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_cleaner_interfaces::action::RobotMove_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_cleaner_interfaces::action::RobotMove_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_cleaner_interfaces__action__RobotMove_SendGoal_Request
    std::shared_ptr<robo_cleaner_interfaces::action::RobotMove_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_cleaner_interfaces__action__RobotMove_SendGoal_Request
    std::shared_ptr<robo_cleaner_interfaces::action::RobotMove_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotMove_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotMove_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotMove_SendGoal_Request_

// alias to use template instance with default allocator
using RobotMove_SendGoal_Request =
  robo_cleaner_interfaces::action::RobotMove_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robo_cleaner_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robo_cleaner_interfaces__action__RobotMove_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__robo_cleaner_interfaces__action__RobotMove_SendGoal_Response __declspec(deprecated)
#endif

namespace robo_cleaner_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RobotMove_SendGoal_Response_
{
  using Type = RobotMove_SendGoal_Response_<ContainerAllocator>;

  explicit RobotMove_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit RobotMove_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robo_cleaner_interfaces::action::RobotMove_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_cleaner_interfaces::action::RobotMove_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_cleaner_interfaces::action::RobotMove_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_cleaner_interfaces::action::RobotMove_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_cleaner_interfaces::action::RobotMove_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_cleaner_interfaces::action::RobotMove_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_cleaner_interfaces::action::RobotMove_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_cleaner_interfaces::action::RobotMove_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_cleaner_interfaces::action::RobotMove_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_cleaner_interfaces::action::RobotMove_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_cleaner_interfaces__action__RobotMove_SendGoal_Response
    std::shared_ptr<robo_cleaner_interfaces::action::RobotMove_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_cleaner_interfaces__action__RobotMove_SendGoal_Response
    std::shared_ptr<robo_cleaner_interfaces::action::RobotMove_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotMove_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotMove_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotMove_SendGoal_Response_

// alias to use template instance with default allocator
using RobotMove_SendGoal_Response =
  robo_cleaner_interfaces::action::RobotMove_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robo_cleaner_interfaces

namespace robo_cleaner_interfaces
{

namespace action
{

struct RobotMove_SendGoal
{
  using Request = robo_cleaner_interfaces::action::RobotMove_SendGoal_Request;
  using Response = robo_cleaner_interfaces::action::RobotMove_SendGoal_Response;
};

}  // namespace action

}  // namespace robo_cleaner_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robo_cleaner_interfaces__action__RobotMove_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__robo_cleaner_interfaces__action__RobotMove_GetResult_Request __declspec(deprecated)
#endif

namespace robo_cleaner_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RobotMove_GetResult_Request_
{
  using Type = RobotMove_GetResult_Request_<ContainerAllocator>;

  explicit RobotMove_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit RobotMove_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robo_cleaner_interfaces::action::RobotMove_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_cleaner_interfaces::action::RobotMove_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_cleaner_interfaces::action::RobotMove_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_cleaner_interfaces::action::RobotMove_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_cleaner_interfaces::action::RobotMove_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_cleaner_interfaces::action::RobotMove_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_cleaner_interfaces::action::RobotMove_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_cleaner_interfaces::action::RobotMove_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_cleaner_interfaces::action::RobotMove_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_cleaner_interfaces::action::RobotMove_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_cleaner_interfaces__action__RobotMove_GetResult_Request
    std::shared_ptr<robo_cleaner_interfaces::action::RobotMove_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_cleaner_interfaces__action__RobotMove_GetResult_Request
    std::shared_ptr<robo_cleaner_interfaces::action::RobotMove_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotMove_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotMove_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotMove_GetResult_Request_

// alias to use template instance with default allocator
using RobotMove_GetResult_Request =
  robo_cleaner_interfaces::action::RobotMove_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robo_cleaner_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "robo_cleaner_interfaces/action/detail/robot_move__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robo_cleaner_interfaces__action__RobotMove_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__robo_cleaner_interfaces__action__RobotMove_GetResult_Response __declspec(deprecated)
#endif

namespace robo_cleaner_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RobotMove_GetResult_Response_
{
  using Type = RobotMove_GetResult_Response_<ContainerAllocator>;

  explicit RobotMove_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit RobotMove_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    robo_cleaner_interfaces::action::RobotMove_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const robo_cleaner_interfaces::action::RobotMove_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robo_cleaner_interfaces::action::RobotMove_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_cleaner_interfaces::action::RobotMove_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_cleaner_interfaces::action::RobotMove_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_cleaner_interfaces::action::RobotMove_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_cleaner_interfaces::action::RobotMove_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_cleaner_interfaces::action::RobotMove_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_cleaner_interfaces::action::RobotMove_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_cleaner_interfaces::action::RobotMove_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_cleaner_interfaces::action::RobotMove_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_cleaner_interfaces::action::RobotMove_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_cleaner_interfaces__action__RobotMove_GetResult_Response
    std::shared_ptr<robo_cleaner_interfaces::action::RobotMove_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_cleaner_interfaces__action__RobotMove_GetResult_Response
    std::shared_ptr<robo_cleaner_interfaces::action::RobotMove_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotMove_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotMove_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotMove_GetResult_Response_

// alias to use template instance with default allocator
using RobotMove_GetResult_Response =
  robo_cleaner_interfaces::action::RobotMove_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robo_cleaner_interfaces

namespace robo_cleaner_interfaces
{

namespace action
{

struct RobotMove_GetResult
{
  using Request = robo_cleaner_interfaces::action::RobotMove_GetResult_Request;
  using Response = robo_cleaner_interfaces::action::RobotMove_GetResult_Response;
};

}  // namespace action

}  // namespace robo_cleaner_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "robo_cleaner_interfaces/action/detail/robot_move__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robo_cleaner_interfaces__action__RobotMove_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__robo_cleaner_interfaces__action__RobotMove_FeedbackMessage __declspec(deprecated)
#endif

namespace robo_cleaner_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RobotMove_FeedbackMessage_
{
  using Type = RobotMove_FeedbackMessage_<ContainerAllocator>;

  explicit RobotMove_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit RobotMove_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    robo_cleaner_interfaces::action::RobotMove_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const robo_cleaner_interfaces::action::RobotMove_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robo_cleaner_interfaces::action::RobotMove_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_cleaner_interfaces::action::RobotMove_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_cleaner_interfaces::action::RobotMove_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_cleaner_interfaces::action::RobotMove_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_cleaner_interfaces::action::RobotMove_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_cleaner_interfaces::action::RobotMove_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_cleaner_interfaces::action::RobotMove_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_cleaner_interfaces::action::RobotMove_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_cleaner_interfaces::action::RobotMove_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_cleaner_interfaces::action::RobotMove_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_cleaner_interfaces__action__RobotMove_FeedbackMessage
    std::shared_ptr<robo_cleaner_interfaces::action::RobotMove_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_cleaner_interfaces__action__RobotMove_FeedbackMessage
    std::shared_ptr<robo_cleaner_interfaces::action::RobotMove_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotMove_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotMove_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotMove_FeedbackMessage_

// alias to use template instance with default allocator
using RobotMove_FeedbackMessage =
  robo_cleaner_interfaces::action::RobotMove_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robo_cleaner_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace robo_cleaner_interfaces
{

namespace action
{

struct RobotMove
{
  /// The goal message defined in the action definition.
  using Goal = robo_cleaner_interfaces::action::RobotMove_Goal;
  /// The result message defined in the action definition.
  using Result = robo_cleaner_interfaces::action::RobotMove_Result;
  /// The feedback message defined in the action definition.
  using Feedback = robo_cleaner_interfaces::action::RobotMove_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = robo_cleaner_interfaces::action::RobotMove_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = robo_cleaner_interfaces::action::RobotMove_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = robo_cleaner_interfaces::action::RobotMove_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct RobotMove RobotMove;

}  // namespace action

}  // namespace robo_cleaner_interfaces

#endif  // ROBO_CLEANER_INTERFACES__ACTION__DETAIL__ROBOT_MOVE__STRUCT_HPP_
