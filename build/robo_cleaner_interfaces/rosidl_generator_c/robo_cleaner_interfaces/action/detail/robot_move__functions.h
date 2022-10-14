// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robo_cleaner_interfaces:action/RobotMove.idl
// generated code does not contain a copyright notice

#ifndef ROBO_CLEANER_INTERFACES__ACTION__DETAIL__ROBOT_MOVE__FUNCTIONS_H_
#define ROBO_CLEANER_INTERFACES__ACTION__DETAIL__ROBOT_MOVE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "robo_cleaner_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "robo_cleaner_interfaces/action/detail/robot_move__struct.h"

/// Initialize action/RobotMove message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robo_cleaner_interfaces__action__RobotMove_Goal
 * )) before or use
 * robo_cleaner_interfaces__action__RobotMove_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
bool
robo_cleaner_interfaces__action__RobotMove_Goal__init(robo_cleaner_interfaces__action__RobotMove_Goal * msg);

/// Finalize action/RobotMove message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__action__RobotMove_Goal__fini(robo_cleaner_interfaces__action__RobotMove_Goal * msg);

/// Create action/RobotMove message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robo_cleaner_interfaces__action__RobotMove_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
robo_cleaner_interfaces__action__RobotMove_Goal *
robo_cleaner_interfaces__action__RobotMove_Goal__create();

/// Destroy action/RobotMove message.
/**
 * It calls
 * robo_cleaner_interfaces__action__RobotMove_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__action__RobotMove_Goal__destroy(robo_cleaner_interfaces__action__RobotMove_Goal * msg);


/// Initialize array of action/RobotMove messages.
/**
 * It allocates the memory for the number of elements and calls
 * robo_cleaner_interfaces__action__RobotMove_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
bool
robo_cleaner_interfaces__action__RobotMove_Goal__Sequence__init(robo_cleaner_interfaces__action__RobotMove_Goal__Sequence * array, size_t size);

/// Finalize array of action/RobotMove messages.
/**
 * It calls
 * robo_cleaner_interfaces__action__RobotMove_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__action__RobotMove_Goal__Sequence__fini(robo_cleaner_interfaces__action__RobotMove_Goal__Sequence * array);

/// Create array of action/RobotMove messages.
/**
 * It allocates the memory for the array and calls
 * robo_cleaner_interfaces__action__RobotMove_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
robo_cleaner_interfaces__action__RobotMove_Goal__Sequence *
robo_cleaner_interfaces__action__RobotMove_Goal__Sequence__create(size_t size);

/// Destroy array of action/RobotMove messages.
/**
 * It calls
 * robo_cleaner_interfaces__action__RobotMove_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__action__RobotMove_Goal__Sequence__destroy(robo_cleaner_interfaces__action__RobotMove_Goal__Sequence * array);

/// Initialize action/RobotMove message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robo_cleaner_interfaces__action__RobotMove_Result
 * )) before or use
 * robo_cleaner_interfaces__action__RobotMove_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
bool
robo_cleaner_interfaces__action__RobotMove_Result__init(robo_cleaner_interfaces__action__RobotMove_Result * msg);

/// Finalize action/RobotMove message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__action__RobotMove_Result__fini(robo_cleaner_interfaces__action__RobotMove_Result * msg);

/// Create action/RobotMove message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robo_cleaner_interfaces__action__RobotMove_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
robo_cleaner_interfaces__action__RobotMove_Result *
robo_cleaner_interfaces__action__RobotMove_Result__create();

/// Destroy action/RobotMove message.
/**
 * It calls
 * robo_cleaner_interfaces__action__RobotMove_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__action__RobotMove_Result__destroy(robo_cleaner_interfaces__action__RobotMove_Result * msg);


/// Initialize array of action/RobotMove messages.
/**
 * It allocates the memory for the number of elements and calls
 * robo_cleaner_interfaces__action__RobotMove_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
bool
robo_cleaner_interfaces__action__RobotMove_Result__Sequence__init(robo_cleaner_interfaces__action__RobotMove_Result__Sequence * array, size_t size);

/// Finalize array of action/RobotMove messages.
/**
 * It calls
 * robo_cleaner_interfaces__action__RobotMove_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__action__RobotMove_Result__Sequence__fini(robo_cleaner_interfaces__action__RobotMove_Result__Sequence * array);

/// Create array of action/RobotMove messages.
/**
 * It allocates the memory for the array and calls
 * robo_cleaner_interfaces__action__RobotMove_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
robo_cleaner_interfaces__action__RobotMove_Result__Sequence *
robo_cleaner_interfaces__action__RobotMove_Result__Sequence__create(size_t size);

/// Destroy array of action/RobotMove messages.
/**
 * It calls
 * robo_cleaner_interfaces__action__RobotMove_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__action__RobotMove_Result__Sequence__destroy(robo_cleaner_interfaces__action__RobotMove_Result__Sequence * array);

/// Initialize action/RobotMove message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robo_cleaner_interfaces__action__RobotMove_Feedback
 * )) before or use
 * robo_cleaner_interfaces__action__RobotMove_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
bool
robo_cleaner_interfaces__action__RobotMove_Feedback__init(robo_cleaner_interfaces__action__RobotMove_Feedback * msg);

/// Finalize action/RobotMove message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__action__RobotMove_Feedback__fini(robo_cleaner_interfaces__action__RobotMove_Feedback * msg);

/// Create action/RobotMove message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robo_cleaner_interfaces__action__RobotMove_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
robo_cleaner_interfaces__action__RobotMove_Feedback *
robo_cleaner_interfaces__action__RobotMove_Feedback__create();

/// Destroy action/RobotMove message.
/**
 * It calls
 * robo_cleaner_interfaces__action__RobotMove_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__action__RobotMove_Feedback__destroy(robo_cleaner_interfaces__action__RobotMove_Feedback * msg);


/// Initialize array of action/RobotMove messages.
/**
 * It allocates the memory for the number of elements and calls
 * robo_cleaner_interfaces__action__RobotMove_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
bool
robo_cleaner_interfaces__action__RobotMove_Feedback__Sequence__init(robo_cleaner_interfaces__action__RobotMove_Feedback__Sequence * array, size_t size);

/// Finalize array of action/RobotMove messages.
/**
 * It calls
 * robo_cleaner_interfaces__action__RobotMove_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__action__RobotMove_Feedback__Sequence__fini(robo_cleaner_interfaces__action__RobotMove_Feedback__Sequence * array);

/// Create array of action/RobotMove messages.
/**
 * It allocates the memory for the array and calls
 * robo_cleaner_interfaces__action__RobotMove_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
robo_cleaner_interfaces__action__RobotMove_Feedback__Sequence *
robo_cleaner_interfaces__action__RobotMove_Feedback__Sequence__create(size_t size);

/// Destroy array of action/RobotMove messages.
/**
 * It calls
 * robo_cleaner_interfaces__action__RobotMove_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__action__RobotMove_Feedback__Sequence__destroy(robo_cleaner_interfaces__action__RobotMove_Feedback__Sequence * array);

/// Initialize action/RobotMove message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robo_cleaner_interfaces__action__RobotMove_SendGoal_Request
 * )) before or use
 * robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
bool
robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__init(robo_cleaner_interfaces__action__RobotMove_SendGoal_Request * msg);

/// Finalize action/RobotMove message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__fini(robo_cleaner_interfaces__action__RobotMove_SendGoal_Request * msg);

/// Create action/RobotMove message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
robo_cleaner_interfaces__action__RobotMove_SendGoal_Request *
robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__create();

/// Destroy action/RobotMove message.
/**
 * It calls
 * robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__destroy(robo_cleaner_interfaces__action__RobotMove_SendGoal_Request * msg);


/// Initialize array of action/RobotMove messages.
/**
 * It allocates the memory for the number of elements and calls
 * robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
bool
robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__Sequence__init(robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/RobotMove messages.
/**
 * It calls
 * robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__Sequence__fini(robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__Sequence * array);

/// Create array of action/RobotMove messages.
/**
 * It allocates the memory for the array and calls
 * robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__Sequence *
robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/RobotMove messages.
/**
 * It calls
 * robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__Sequence__destroy(robo_cleaner_interfaces__action__RobotMove_SendGoal_Request__Sequence * array);

/// Initialize action/RobotMove message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robo_cleaner_interfaces__action__RobotMove_SendGoal_Response
 * )) before or use
 * robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
bool
robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__init(robo_cleaner_interfaces__action__RobotMove_SendGoal_Response * msg);

/// Finalize action/RobotMove message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__fini(robo_cleaner_interfaces__action__RobotMove_SendGoal_Response * msg);

/// Create action/RobotMove message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
robo_cleaner_interfaces__action__RobotMove_SendGoal_Response *
robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__create();

/// Destroy action/RobotMove message.
/**
 * It calls
 * robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__destroy(robo_cleaner_interfaces__action__RobotMove_SendGoal_Response * msg);


/// Initialize array of action/RobotMove messages.
/**
 * It allocates the memory for the number of elements and calls
 * robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
bool
robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__Sequence__init(robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/RobotMove messages.
/**
 * It calls
 * robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__Sequence__fini(robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__Sequence * array);

/// Create array of action/RobotMove messages.
/**
 * It allocates the memory for the array and calls
 * robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__Sequence *
robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/RobotMove messages.
/**
 * It calls
 * robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__Sequence__destroy(robo_cleaner_interfaces__action__RobotMove_SendGoal_Response__Sequence * array);

/// Initialize action/RobotMove message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robo_cleaner_interfaces__action__RobotMove_GetResult_Request
 * )) before or use
 * robo_cleaner_interfaces__action__RobotMove_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
bool
robo_cleaner_interfaces__action__RobotMove_GetResult_Request__init(robo_cleaner_interfaces__action__RobotMove_GetResult_Request * msg);

/// Finalize action/RobotMove message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__action__RobotMove_GetResult_Request__fini(robo_cleaner_interfaces__action__RobotMove_GetResult_Request * msg);

/// Create action/RobotMove message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robo_cleaner_interfaces__action__RobotMove_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
robo_cleaner_interfaces__action__RobotMove_GetResult_Request *
robo_cleaner_interfaces__action__RobotMove_GetResult_Request__create();

/// Destroy action/RobotMove message.
/**
 * It calls
 * robo_cleaner_interfaces__action__RobotMove_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__action__RobotMove_GetResult_Request__destroy(robo_cleaner_interfaces__action__RobotMove_GetResult_Request * msg);


/// Initialize array of action/RobotMove messages.
/**
 * It allocates the memory for the number of elements and calls
 * robo_cleaner_interfaces__action__RobotMove_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
bool
robo_cleaner_interfaces__action__RobotMove_GetResult_Request__Sequence__init(robo_cleaner_interfaces__action__RobotMove_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/RobotMove messages.
/**
 * It calls
 * robo_cleaner_interfaces__action__RobotMove_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__action__RobotMove_GetResult_Request__Sequence__fini(robo_cleaner_interfaces__action__RobotMove_GetResult_Request__Sequence * array);

/// Create array of action/RobotMove messages.
/**
 * It allocates the memory for the array and calls
 * robo_cleaner_interfaces__action__RobotMove_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
robo_cleaner_interfaces__action__RobotMove_GetResult_Request__Sequence *
robo_cleaner_interfaces__action__RobotMove_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/RobotMove messages.
/**
 * It calls
 * robo_cleaner_interfaces__action__RobotMove_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__action__RobotMove_GetResult_Request__Sequence__destroy(robo_cleaner_interfaces__action__RobotMove_GetResult_Request__Sequence * array);

/// Initialize action/RobotMove message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robo_cleaner_interfaces__action__RobotMove_GetResult_Response
 * )) before or use
 * robo_cleaner_interfaces__action__RobotMove_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
bool
robo_cleaner_interfaces__action__RobotMove_GetResult_Response__init(robo_cleaner_interfaces__action__RobotMove_GetResult_Response * msg);

/// Finalize action/RobotMove message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__action__RobotMove_GetResult_Response__fini(robo_cleaner_interfaces__action__RobotMove_GetResult_Response * msg);

/// Create action/RobotMove message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robo_cleaner_interfaces__action__RobotMove_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
robo_cleaner_interfaces__action__RobotMove_GetResult_Response *
robo_cleaner_interfaces__action__RobotMove_GetResult_Response__create();

/// Destroy action/RobotMove message.
/**
 * It calls
 * robo_cleaner_interfaces__action__RobotMove_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__action__RobotMove_GetResult_Response__destroy(robo_cleaner_interfaces__action__RobotMove_GetResult_Response * msg);


/// Initialize array of action/RobotMove messages.
/**
 * It allocates the memory for the number of elements and calls
 * robo_cleaner_interfaces__action__RobotMove_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
bool
robo_cleaner_interfaces__action__RobotMove_GetResult_Response__Sequence__init(robo_cleaner_interfaces__action__RobotMove_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/RobotMove messages.
/**
 * It calls
 * robo_cleaner_interfaces__action__RobotMove_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__action__RobotMove_GetResult_Response__Sequence__fini(robo_cleaner_interfaces__action__RobotMove_GetResult_Response__Sequence * array);

/// Create array of action/RobotMove messages.
/**
 * It allocates the memory for the array and calls
 * robo_cleaner_interfaces__action__RobotMove_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
robo_cleaner_interfaces__action__RobotMove_GetResult_Response__Sequence *
robo_cleaner_interfaces__action__RobotMove_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/RobotMove messages.
/**
 * It calls
 * robo_cleaner_interfaces__action__RobotMove_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__action__RobotMove_GetResult_Response__Sequence__destroy(robo_cleaner_interfaces__action__RobotMove_GetResult_Response__Sequence * array);

/// Initialize action/RobotMove message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robo_cleaner_interfaces__action__RobotMove_FeedbackMessage
 * )) before or use
 * robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
bool
robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__init(robo_cleaner_interfaces__action__RobotMove_FeedbackMessage * msg);

/// Finalize action/RobotMove message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__fini(robo_cleaner_interfaces__action__RobotMove_FeedbackMessage * msg);

/// Create action/RobotMove message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
robo_cleaner_interfaces__action__RobotMove_FeedbackMessage *
robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__create();

/// Destroy action/RobotMove message.
/**
 * It calls
 * robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__destroy(robo_cleaner_interfaces__action__RobotMove_FeedbackMessage * msg);


/// Initialize array of action/RobotMove messages.
/**
 * It allocates the memory for the number of elements and calls
 * robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
bool
robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__Sequence__init(robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/RobotMove messages.
/**
 * It calls
 * robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__Sequence__fini(robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__Sequence * array);

/// Create array of action/RobotMove messages.
/**
 * It allocates the memory for the array and calls
 * robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__Sequence *
robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/RobotMove messages.
/**
 * It calls
 * robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_cleaner_interfaces
void
robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__Sequence__destroy(robo_cleaner_interfaces__action__RobotMove_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ROBO_CLEANER_INTERFACES__ACTION__DETAIL__ROBOT_MOVE__FUNCTIONS_H_
