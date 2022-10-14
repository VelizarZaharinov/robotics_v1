// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robo_cleaner_interfaces:action/RobotMove.idl
// generated code does not contain a copyright notice

#ifndef ROBO_CLEANER_INTERFACES__ACTION__DETAIL__ROBOT_MOVE__BUILDER_HPP_
#define ROBO_CLEANER_INTERFACES__ACTION__DETAIL__ROBOT_MOVE__BUILDER_HPP_

#include "robo_cleaner_interfaces/action/detail/robot_move__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robo_cleaner_interfaces
{

namespace action
{

namespace builder
{

class Init_RobotMove_Goal_robot_move_type
{
public:
  Init_RobotMove_Goal_robot_move_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robo_cleaner_interfaces::action::RobotMove_Goal robot_move_type(::robo_cleaner_interfaces::action::RobotMove_Goal::_robot_move_type_type arg)
  {
    msg_.robot_move_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_cleaner_interfaces::action::RobotMove_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_cleaner_interfaces::action::RobotMove_Goal>()
{
  return robo_cleaner_interfaces::action::builder::Init_RobotMove_Goal_robot_move_type();
}

}  // namespace robo_cleaner_interfaces


namespace robo_cleaner_interfaces
{

namespace action
{

namespace builder
{

class Init_RobotMove_Result_processed_field_marker
{
public:
  explicit Init_RobotMove_Result_processed_field_marker(::robo_cleaner_interfaces::action::RobotMove_Result & msg)
  : msg_(msg)
  {}
  ::robo_cleaner_interfaces::action::RobotMove_Result processed_field_marker(::robo_cleaner_interfaces::action::RobotMove_Result::_processed_field_marker_type arg)
  {
    msg_.processed_field_marker = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_cleaner_interfaces::action::RobotMove_Result msg_;
};

class Init_RobotMove_Result_error_reason
{
public:
  explicit Init_RobotMove_Result_error_reason(::robo_cleaner_interfaces::action::RobotMove_Result & msg)
  : msg_(msg)
  {}
  Init_RobotMove_Result_processed_field_marker error_reason(::robo_cleaner_interfaces::action::RobotMove_Result::_error_reason_type arg)
  {
    msg_.error_reason = std::move(arg);
    return Init_RobotMove_Result_processed_field_marker(msg_);
  }

private:
  ::robo_cleaner_interfaces::action::RobotMove_Result msg_;
};

class Init_RobotMove_Result_success
{
public:
  Init_RobotMove_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotMove_Result_error_reason success(::robo_cleaner_interfaces::action::RobotMove_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_RobotMove_Result_error_reason(msg_);
  }

private:
  ::robo_cleaner_interfaces::action::RobotMove_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_cleaner_interfaces::action::RobotMove_Result>()
{
  return robo_cleaner_interfaces::action::builder::Init_RobotMove_Result_success();
}

}  // namespace robo_cleaner_interfaces


namespace robo_cleaner_interfaces
{

namespace action
{

namespace builder
{

class Init_RobotMove_Feedback_progress_percent
{
public:
  explicit Init_RobotMove_Feedback_progress_percent(::robo_cleaner_interfaces::action::RobotMove_Feedback & msg)
  : msg_(msg)
  {}
  ::robo_cleaner_interfaces::action::RobotMove_Feedback progress_percent(::robo_cleaner_interfaces::action::RobotMove_Feedback::_progress_percent_type arg)
  {
    msg_.progress_percent = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_cleaner_interfaces::action::RobotMove_Feedback msg_;
};

class Init_RobotMove_Feedback_approaching_field_marker
{
public:
  Init_RobotMove_Feedback_approaching_field_marker()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotMove_Feedback_progress_percent approaching_field_marker(::robo_cleaner_interfaces::action::RobotMove_Feedback::_approaching_field_marker_type arg)
  {
    msg_.approaching_field_marker = std::move(arg);
    return Init_RobotMove_Feedback_progress_percent(msg_);
  }

private:
  ::robo_cleaner_interfaces::action::RobotMove_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_cleaner_interfaces::action::RobotMove_Feedback>()
{
  return robo_cleaner_interfaces::action::builder::Init_RobotMove_Feedback_approaching_field_marker();
}

}  // namespace robo_cleaner_interfaces


namespace robo_cleaner_interfaces
{

namespace action
{

namespace builder
{

class Init_RobotMove_SendGoal_Request_goal
{
public:
  explicit Init_RobotMove_SendGoal_Request_goal(::robo_cleaner_interfaces::action::RobotMove_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::robo_cleaner_interfaces::action::RobotMove_SendGoal_Request goal(::robo_cleaner_interfaces::action::RobotMove_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_cleaner_interfaces::action::RobotMove_SendGoal_Request msg_;
};

class Init_RobotMove_SendGoal_Request_goal_id
{
public:
  Init_RobotMove_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotMove_SendGoal_Request_goal goal_id(::robo_cleaner_interfaces::action::RobotMove_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RobotMove_SendGoal_Request_goal(msg_);
  }

private:
  ::robo_cleaner_interfaces::action::RobotMove_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_cleaner_interfaces::action::RobotMove_SendGoal_Request>()
{
  return robo_cleaner_interfaces::action::builder::Init_RobotMove_SendGoal_Request_goal_id();
}

}  // namespace robo_cleaner_interfaces


namespace robo_cleaner_interfaces
{

namespace action
{

namespace builder
{

class Init_RobotMove_SendGoal_Response_stamp
{
public:
  explicit Init_RobotMove_SendGoal_Response_stamp(::robo_cleaner_interfaces::action::RobotMove_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::robo_cleaner_interfaces::action::RobotMove_SendGoal_Response stamp(::robo_cleaner_interfaces::action::RobotMove_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_cleaner_interfaces::action::RobotMove_SendGoal_Response msg_;
};

class Init_RobotMove_SendGoal_Response_accepted
{
public:
  Init_RobotMove_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotMove_SendGoal_Response_stamp accepted(::robo_cleaner_interfaces::action::RobotMove_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_RobotMove_SendGoal_Response_stamp(msg_);
  }

private:
  ::robo_cleaner_interfaces::action::RobotMove_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_cleaner_interfaces::action::RobotMove_SendGoal_Response>()
{
  return robo_cleaner_interfaces::action::builder::Init_RobotMove_SendGoal_Response_accepted();
}

}  // namespace robo_cleaner_interfaces


namespace robo_cleaner_interfaces
{

namespace action
{

namespace builder
{

class Init_RobotMove_GetResult_Request_goal_id
{
public:
  Init_RobotMove_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robo_cleaner_interfaces::action::RobotMove_GetResult_Request goal_id(::robo_cleaner_interfaces::action::RobotMove_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_cleaner_interfaces::action::RobotMove_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_cleaner_interfaces::action::RobotMove_GetResult_Request>()
{
  return robo_cleaner_interfaces::action::builder::Init_RobotMove_GetResult_Request_goal_id();
}

}  // namespace robo_cleaner_interfaces


namespace robo_cleaner_interfaces
{

namespace action
{

namespace builder
{

class Init_RobotMove_GetResult_Response_result
{
public:
  explicit Init_RobotMove_GetResult_Response_result(::robo_cleaner_interfaces::action::RobotMove_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::robo_cleaner_interfaces::action::RobotMove_GetResult_Response result(::robo_cleaner_interfaces::action::RobotMove_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_cleaner_interfaces::action::RobotMove_GetResult_Response msg_;
};

class Init_RobotMove_GetResult_Response_status
{
public:
  Init_RobotMove_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotMove_GetResult_Response_result status(::robo_cleaner_interfaces::action::RobotMove_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RobotMove_GetResult_Response_result(msg_);
  }

private:
  ::robo_cleaner_interfaces::action::RobotMove_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_cleaner_interfaces::action::RobotMove_GetResult_Response>()
{
  return robo_cleaner_interfaces::action::builder::Init_RobotMove_GetResult_Response_status();
}

}  // namespace robo_cleaner_interfaces


namespace robo_cleaner_interfaces
{

namespace action
{

namespace builder
{

class Init_RobotMove_FeedbackMessage_feedback
{
public:
  explicit Init_RobotMove_FeedbackMessage_feedback(::robo_cleaner_interfaces::action::RobotMove_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::robo_cleaner_interfaces::action::RobotMove_FeedbackMessage feedback(::robo_cleaner_interfaces::action::RobotMove_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_cleaner_interfaces::action::RobotMove_FeedbackMessage msg_;
};

class Init_RobotMove_FeedbackMessage_goal_id
{
public:
  Init_RobotMove_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotMove_FeedbackMessage_feedback goal_id(::robo_cleaner_interfaces::action::RobotMove_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RobotMove_FeedbackMessage_feedback(msg_);
  }

private:
  ::robo_cleaner_interfaces::action::RobotMove_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_cleaner_interfaces::action::RobotMove_FeedbackMessage>()
{
  return robo_cleaner_interfaces::action::builder::Init_RobotMove_FeedbackMessage_goal_id();
}

}  // namespace robo_cleaner_interfaces

#endif  // ROBO_CLEANER_INTERFACES__ACTION__DETAIL__ROBOT_MOVE__BUILDER_HPP_
