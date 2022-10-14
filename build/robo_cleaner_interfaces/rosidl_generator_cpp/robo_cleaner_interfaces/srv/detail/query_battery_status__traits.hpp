// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robo_cleaner_interfaces:srv/QueryBatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef ROBO_CLEANER_INTERFACES__SRV__DETAIL__QUERY_BATTERY_STATUS__TRAITS_HPP_
#define ROBO_CLEANER_INTERFACES__SRV__DETAIL__QUERY_BATTERY_STATUS__TRAITS_HPP_

#include "robo_cleaner_interfaces/srv/detail/query_battery_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robo_cleaner_interfaces::srv::QueryBatteryStatus_Request>()
{
  return "robo_cleaner_interfaces::srv::QueryBatteryStatus_Request";
}

template<>
inline const char * name<robo_cleaner_interfaces::srv::QueryBatteryStatus_Request>()
{
  return "robo_cleaner_interfaces/srv/QueryBatteryStatus_Request";
}

template<>
struct has_fixed_size<robo_cleaner_interfaces::srv::QueryBatteryStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robo_cleaner_interfaces::srv::QueryBatteryStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robo_cleaner_interfaces::srv::QueryBatteryStatus_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'battery_status'
#include "robo_cleaner_interfaces/msg/detail/battery_status__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robo_cleaner_interfaces::srv::QueryBatteryStatus_Response>()
{
  return "robo_cleaner_interfaces::srv::QueryBatteryStatus_Response";
}

template<>
inline const char * name<robo_cleaner_interfaces::srv::QueryBatteryStatus_Response>()
{
  return "robo_cleaner_interfaces/srv/QueryBatteryStatus_Response";
}

template<>
struct has_fixed_size<robo_cleaner_interfaces::srv::QueryBatteryStatus_Response>
  : std::integral_constant<bool, has_fixed_size<robo_cleaner_interfaces::msg::BatteryStatus>::value> {};

template<>
struct has_bounded_size<robo_cleaner_interfaces::srv::QueryBatteryStatus_Response>
  : std::integral_constant<bool, has_bounded_size<robo_cleaner_interfaces::msg::BatteryStatus>::value> {};

template<>
struct is_message<robo_cleaner_interfaces::srv::QueryBatteryStatus_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robo_cleaner_interfaces::srv::QueryBatteryStatus>()
{
  return "robo_cleaner_interfaces::srv::QueryBatteryStatus";
}

template<>
inline const char * name<robo_cleaner_interfaces::srv::QueryBatteryStatus>()
{
  return "robo_cleaner_interfaces/srv/QueryBatteryStatus";
}

template<>
struct has_fixed_size<robo_cleaner_interfaces::srv::QueryBatteryStatus>
  : std::integral_constant<
    bool,
    has_fixed_size<robo_cleaner_interfaces::srv::QueryBatteryStatus_Request>::value &&
    has_fixed_size<robo_cleaner_interfaces::srv::QueryBatteryStatus_Response>::value
  >
{
};

template<>
struct has_bounded_size<robo_cleaner_interfaces::srv::QueryBatteryStatus>
  : std::integral_constant<
    bool,
    has_bounded_size<robo_cleaner_interfaces::srv::QueryBatteryStatus_Request>::value &&
    has_bounded_size<robo_cleaner_interfaces::srv::QueryBatteryStatus_Response>::value
  >
{
};

template<>
struct is_service<robo_cleaner_interfaces::srv::QueryBatteryStatus>
  : std::true_type
{
};

template<>
struct is_service_request<robo_cleaner_interfaces::srv::QueryBatteryStatus_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robo_cleaner_interfaces::srv::QueryBatteryStatus_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBO_CLEANER_INTERFACES__SRV__DETAIL__QUERY_BATTERY_STATUS__TRAITS_HPP_
