// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robo_cleaner_interfaces:srv/QueryInitialRobotState.idl
// generated code does not contain a copyright notice

#ifndef ROBO_CLEANER_INTERFACES__SRV__DETAIL__QUERY_INITIAL_ROBOT_STATE__FUNCTIONS_H_
#define ROBO_CLEANER_INTERFACES__SRV__DETAIL__QUERY_INITIAL_ROBOT_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "robo_cleaner_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "robo_cleaner_interfaces/srv/detail/query_initial_robot_state__struct.h"

/// Initialize srv/QueryInitialRobotState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robo_cleaner_interfaces__srv__QueryInitialRobotState_Request
 * )) before or use
 * robo_cleaner_interfaces__srv__QueryInitialRobotState_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
bool
robo_cleaner_interfaces__srv__QueryInitialRobotState_Request__init(robo_cleaner_interfaces__srv__QueryInitialRobotState_Request * msg);

/// Finalize srv/QueryInitialRobotState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__srv__QueryInitialRobotState_Request__fini(robo_cleaner_interfaces__srv__QueryInitialRobotState_Request * msg);

/// Create srv/QueryInitialRobotState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robo_cleaner_interfaces__srv__QueryInitialRobotState_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
robo_cleaner_interfaces__srv__QueryInitialRobotState_Request *
robo_cleaner_interfaces__srv__QueryInitialRobotState_Request__create();

/// Destroy srv/QueryInitialRobotState message.
/**
 * It calls
 * robo_cleaner_interfaces__srv__QueryInitialRobotState_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__srv__QueryInitialRobotState_Request__destroy(robo_cleaner_interfaces__srv__QueryInitialRobotState_Request * msg);


/// Initialize array of srv/QueryInitialRobotState messages.
/**
 * It allocates the memory for the number of elements and calls
 * robo_cleaner_interfaces__srv__QueryInitialRobotState_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
bool
robo_cleaner_interfaces__srv__QueryInitialRobotState_Request__Sequence__init(robo_cleaner_interfaces__srv__QueryInitialRobotState_Request__Sequence * array, size_t size);

/// Finalize array of srv/QueryInitialRobotState messages.
/**
 * It calls
 * robo_cleaner_interfaces__srv__QueryInitialRobotState_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__srv__QueryInitialRobotState_Request__Sequence__fini(robo_cleaner_interfaces__srv__QueryInitialRobotState_Request__Sequence * array);

/// Create array of srv/QueryInitialRobotState messages.
/**
 * It allocates the memory for the array and calls
 * robo_cleaner_interfaces__srv__QueryInitialRobotState_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
robo_cleaner_interfaces__srv__QueryInitialRobotState_Request__Sequence *
robo_cleaner_interfaces__srv__QueryInitialRobotState_Request__Sequence__create(size_t size);

/// Destroy array of srv/QueryInitialRobotState messages.
/**
 * It calls
 * robo_cleaner_interfaces__srv__QueryInitialRobotState_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__srv__QueryInitialRobotState_Request__Sequence__destroy(robo_cleaner_interfaces__srv__QueryInitialRobotState_Request__Sequence * array);

/// Initialize srv/QueryInitialRobotState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robo_cleaner_interfaces__srv__QueryInitialRobotState_Response
 * )) before or use
 * robo_cleaner_interfaces__srv__QueryInitialRobotState_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
bool
robo_cleaner_interfaces__srv__QueryInitialRobotState_Response__init(robo_cleaner_interfaces__srv__QueryInitialRobotState_Response * msg);

/// Finalize srv/QueryInitialRobotState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__srv__QueryInitialRobotState_Response__fini(robo_cleaner_interfaces__srv__QueryInitialRobotState_Response * msg);

/// Create srv/QueryInitialRobotState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robo_cleaner_interfaces__srv__QueryInitialRobotState_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
robo_cleaner_interfaces__srv__QueryInitialRobotState_Response *
robo_cleaner_interfaces__srv__QueryInitialRobotState_Response__create();

/// Destroy srv/QueryInitialRobotState message.
/**
 * It calls
 * robo_cleaner_interfaces__srv__QueryInitialRobotState_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__srv__QueryInitialRobotState_Response__destroy(robo_cleaner_interfaces__srv__QueryInitialRobotState_Response * msg);


/// Initialize array of srv/QueryInitialRobotState messages.
/**
 * It allocates the memory for the number of elements and calls
 * robo_cleaner_interfaces__srv__QueryInitialRobotState_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
bool
robo_cleaner_interfaces__srv__QueryInitialRobotState_Response__Sequence__init(robo_cleaner_interfaces__srv__QueryInitialRobotState_Response__Sequence * array, size_t size);

/// Finalize array of srv/QueryInitialRobotState messages.
/**
 * It calls
 * robo_cleaner_interfaces__srv__QueryInitialRobotState_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__srv__QueryInitialRobotState_Response__Sequence__fini(robo_cleaner_interfaces__srv__QueryInitialRobotState_Response__Sequence * array);

/// Create array of srv/QueryInitialRobotState messages.
/**
 * It allocates the memory for the array and calls
 * robo_cleaner_interfaces__srv__QueryInitialRobotState_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
robo_cleaner_interfaces__srv__QueryInitialRobotState_Response__Sequence *
robo_cleaner_interfaces__srv__QueryInitialRobotState_Response__Sequence__create(size_t size);

/// Destroy array of srv/QueryInitialRobotState messages.
/**
 * It calls
 * robo_cleaner_interfaces__srv__QueryInitialRobotState_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__srv__QueryInitialRobotState_Response__Sequence__destroy(robo_cleaner_interfaces__srv__QueryInitialRobotState_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ROBO_CLEANER_INTERFACES__SRV__DETAIL__QUERY_INITIAL_ROBOT_STATE__FUNCTIONS_H_
