// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robo_cleaner_interfaces:action/RobotMove.idl
// generated code does not contain a copyright notice

#ifndef ROBO_CLEANER_INTERFACES__ACTION__DETAIL__ROBOT_MOVE__TRAITS_HPP_
#define ROBO_CLEANER_INTERFACES__ACTION__DETAIL__ROBOT_MOVE__TRAITS_HPP_

#include "robo_cleaner_interfaces/action/detail/robot_move__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'robot_move_type'
#include "robo_cleaner_interfaces/msg/detail/robot_move_type__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robo_cleaner_interfaces::action::RobotMove_Goal>()
{
  return "robo_cleaner_interfaces::action::RobotMove_Goal";
}

template<>
inline const char * name<robo_cleaner_interfaces::action::RobotMove_Goal>()
{
  return "robo_cleaner_interfaces/action/RobotMove_Goal";
}

template<>
struct has_fixed_size<robo_cleaner_interfaces::action::RobotMove_Goal>
  : std::integral_constant<bool, has_fixed_size<robo_cleaner_interfaces::msg::RobotMoveType>::value> {};

template<>
struct has_bounded_size<robo_cleaner_interfaces::action::RobotMove_Goal>
  : std::integral_constant<bool, has_bounded_size<robo_cleaner_interfaces::msg::RobotMoveType>::value> {};

template<>
struct is_message<robo_cleaner_interfaces::action::RobotMove_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robo_cleaner_interfaces::action::RobotMove_Result>()
{
  return "robo_cleaner_interfaces::action::RobotMove_Result";
}

template<>
inline const char * name<robo_cleaner_interfaces::action::RobotMove_Result>()
{
  return "robo_cleaner_interfaces/action/RobotMove_Result";
}

template<>
struct has_fixed_size<robo_cleaner_interfaces::action::RobotMove_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robo_cleaner_interfaces::action::RobotMove_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robo_cleaner_interfaces::action::RobotMove_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robo_cleaner_interfaces::action::RobotMove_Feedback>()
{
  return "robo_cleaner_interfaces::action::RobotMove_Feedback";
}

template<>
inline const char * name<robo_cleaner_interfaces::action::RobotMove_Feedback>()
{
  return "robo_cleaner_interfaces/action/RobotMove_Feedback";
}

template<>
struct has_fixed_size<robo_cleaner_interfaces::action::RobotMove_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robo_cleaner_interfaces::action::RobotMove_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robo_cleaner_interfaces::action::RobotMove_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "robo_cleaner_interfaces/action/detail/robot_move__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robo_cleaner_interfaces::action::RobotMove_SendGoal_Request>()
{
  return "robo_cleaner_interfaces::action::RobotMove_SendGoal_Request";
}

template<>
inline const char * name<robo_cleaner_interfaces::action::RobotMove_SendGoal_Request>()
{
  return "robo_cleaner_interfaces/action/RobotMove_SendGoal_Request";
}

template<>
struct has_fixed_size<robo_cleaner_interfaces::action::RobotMove_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<robo_cleaner_interfaces::action::RobotMove_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<robo_cleaner_interfaces::action::RobotMove_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<robo_cleaner_interfaces::action::RobotMove_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<robo_cleaner_interfaces::action::RobotMove_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robo_cleaner_interfaces::action::RobotMove_SendGoal_Response>()
{
  return "robo_cleaner_interfaces::action::RobotMove_SendGoal_Response";
}

template<>
inline const char * name<robo_cleaner_interfaces::action::RobotMove_SendGoal_Response>()
{
  return "robo_cleaner_interfaces/action/RobotMove_SendGoal_Response";
}

template<>
struct has_fixed_size<robo_cleaner_interfaces::action::RobotMove_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<robo_cleaner_interfaces::action::RobotMove_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<robo_cleaner_interfaces::action::RobotMove_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robo_cleaner_interfaces::action::RobotMove_SendGoal>()
{
  return "robo_cleaner_interfaces::action::RobotMove_SendGoal";
}

template<>
inline const char * name<robo_cleaner_interfaces::action::RobotMove_SendGoal>()
{
  return "robo_cleaner_interfaces/action/RobotMove_SendGoal";
}

template<>
struct has_fixed_size<robo_cleaner_interfaces::action::RobotMove_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<robo_cleaner_interfaces::action::RobotMove_SendGoal_Request>::value &&
    has_fixed_size<robo_cleaner_interfaces::action::RobotMove_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<robo_cleaner_interfaces::action::RobotMove_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<robo_cleaner_interfaces::action::RobotMove_SendGoal_Request>::value &&
    has_bounded_size<robo_cleaner_interfaces::action::RobotMove_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<robo_cleaner_interfaces::action::RobotMove_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<robo_cleaner_interfaces::action::RobotMove_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robo_cleaner_interfaces::action::RobotMove_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robo_cleaner_interfaces::action::RobotMove_GetResult_Request>()
{
  return "robo_cleaner_interfaces::action::RobotMove_GetResult_Request";
}

template<>
inline const char * name<robo_cleaner_interfaces::action::RobotMove_GetResult_Request>()
{
  return "robo_cleaner_interfaces/action/RobotMove_GetResult_Request";
}

template<>
struct has_fixed_size<robo_cleaner_interfaces::action::RobotMove_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<robo_cleaner_interfaces::action::RobotMove_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<robo_cleaner_interfaces::action::RobotMove_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "robo_cleaner_interfaces/action/detail/robot_move__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robo_cleaner_interfaces::action::RobotMove_GetResult_Response>()
{
  return "robo_cleaner_interfaces::action::RobotMove_GetResult_Response";
}

template<>
inline const char * name<robo_cleaner_interfaces::action::RobotMove_GetResult_Response>()
{
  return "robo_cleaner_interfaces/action/RobotMove_GetResult_Response";
}

template<>
struct has_fixed_size<robo_cleaner_interfaces::action::RobotMove_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<robo_cleaner_interfaces::action::RobotMove_Result>::value> {};

template<>
struct has_bounded_size<robo_cleaner_interfaces::action::RobotMove_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<robo_cleaner_interfaces::action::RobotMove_Result>::value> {};

template<>
struct is_message<robo_cleaner_interfaces::action::RobotMove_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robo_cleaner_interfaces::action::RobotMove_GetResult>()
{
  return "robo_cleaner_interfaces::action::RobotMove_GetResult";
}

template<>
inline const char * name<robo_cleaner_interfaces::action::RobotMove_GetResult>()
{
  return "robo_cleaner_interfaces/action/RobotMove_GetResult";
}

template<>
struct has_fixed_size<robo_cleaner_interfaces::action::RobotMove_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<robo_cleaner_interfaces::action::RobotMove_GetResult_Request>::value &&
    has_fixed_size<robo_cleaner_interfaces::action::RobotMove_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<robo_cleaner_interfaces::action::RobotMove_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<robo_cleaner_interfaces::action::RobotMove_GetResult_Request>::value &&
    has_bounded_size<robo_cleaner_interfaces::action::RobotMove_GetResult_Response>::value
  >
{
};

template<>
struct is_service<robo_cleaner_interfaces::action::RobotMove_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<robo_cleaner_interfaces::action::RobotMove_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robo_cleaner_interfaces::action::RobotMove_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "robo_cleaner_interfaces/action/detail/robot_move__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robo_cleaner_interfaces::action::RobotMove_FeedbackMessage>()
{
  return "robo_cleaner_interfaces::action::RobotMove_FeedbackMessage";
}

template<>
inline const char * name<robo_cleaner_interfaces::action::RobotMove_FeedbackMessage>()
{
  return "robo_cleaner_interfaces/action/RobotMove_FeedbackMessage";
}

template<>
struct has_fixed_size<robo_cleaner_interfaces::action::RobotMove_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<robo_cleaner_interfaces::action::RobotMove_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<robo_cleaner_interfaces::action::RobotMove_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<robo_cleaner_interfaces::action::RobotMove_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<robo_cleaner_interfaces::action::RobotMove_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<robo_cleaner_interfaces::action::RobotMove>
  : std::true_type
{
};

template<>
struct is_action_goal<robo_cleaner_interfaces::action::RobotMove_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<robo_cleaner_interfaces::action::RobotMove_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<robo_cleaner_interfaces::action::RobotMove_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ROBO_CLEANER_INTERFACES__ACTION__DETAIL__ROBOT_MOVE__TRAITS_HPP_
