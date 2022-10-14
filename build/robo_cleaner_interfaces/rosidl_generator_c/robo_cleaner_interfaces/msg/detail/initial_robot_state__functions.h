// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robo_cleaner_interfaces:msg/InitialRobotState.idl
// generated code does not contain a copyright notice

#ifndef ROBO_CLEANER_INTERFACES__MSG__DETAIL__INITIAL_ROBOT_STATE__FUNCTIONS_H_
#define ROBO_CLEANER_INTERFACES__MSG__DETAIL__INITIAL_ROBOT_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "robo_cleaner_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "robo_cleaner_interfaces/msg/detail/initial_robot_state__struct.h"

/// Initialize msg/InitialRobotState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robo_cleaner_interfaces__msg__InitialRobotState
 * )) before or use
 * robo_cleaner_interfaces__msg__InitialRobotState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
bool
robo_cleaner_interfaces__msg__InitialRobotState__init(robo_cleaner_interfaces__msg__InitialRobotState * msg);

/// Finalize msg/InitialRobotState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__msg__InitialRobotState__fini(robo_cleaner_interfaces__msg__InitialRobotState * msg);

/// Create msg/InitialRobotState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robo_cleaner_interfaces__msg__InitialRobotState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
robo_cleaner_interfaces__msg__InitialRobotState *
robo_cleaner_interfaces__msg__InitialRobotState__create();

/// Destroy msg/InitialRobotState message.
/**
 * It calls
 * robo_cleaner_interfaces__msg__InitialRobotState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__msg__InitialRobotState__destroy(robo_cleaner_interfaces__msg__InitialRobotState * msg);


/// Initialize array of msg/InitialRobotState messages.
/**
 * It allocates the memory for the number of elements and calls
 * robo_cleaner_interfaces__msg__InitialRobotState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
bool
robo_cleaner_interfaces__msg__InitialRobotState__Sequence__init(robo_cleaner_interfaces__msg__InitialRobotState__Sequence * array, size_t size);

/// Finalize array of msg/InitialRobotState messages.
/**
 * It calls
 * robo_cleaner_interfaces__msg__InitialRobotState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__msg__InitialRobotState__Sequence__fini(robo_cleaner_interfaces__msg__InitialRobotState__Sequence * array);

/// Create array of msg/InitialRobotState messages.
/**
 * It allocates the memory for the array and calls
 * robo_cleaner_interfaces__msg__InitialRobotState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
robo_cleaner_interfaces__msg__InitialRobotState__Sequence *
robo_cleaner_interfaces__msg__InitialRobotState__Sequence__create(size_t size);

/// Destroy array of msg/InitialRobotState messages.
/**
 * It calls
 * robo_cleaner_interfaces__msg__InitialRobotState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__msg__InitialRobotState__Sequence__destroy(robo_cleaner_interfaces__msg__InitialRobotState__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ROBO_CLEANER_INTERFACES__MSG__DETAIL__INITIAL_ROBOT_STATE__FUNCTIONS_H_
