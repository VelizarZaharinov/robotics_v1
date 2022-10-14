// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from urscript_interfaces:srv/UrScript.idl
// generated code does not contain a copyright notice

#ifndef URSCRIPT_INTERFACES__SRV__DETAIL__UR_SCRIPT__FUNCTIONS_H_
#define URSCRIPT_INTERFACES__SRV__DETAIL__UR_SCRIPT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "urscript_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "urscript_interfaces/srv/detail/ur_script__struct.h"

/// Initialize srv/UrScript message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * urscript_interfaces__srv__UrScript_Request
 * )) before or use
 * urscript_interfaces__srv__UrScript_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_urscript_interfaces
bool
urscript_interfaces__srv__UrScript_Request__init(urscript_interfaces__srv__UrScript_Request * msg);

/// Finalize srv/UrScript message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_urscript_interfaces
void
urscript_interfaces__srv__UrScript_Request__fini(urscript_interfaces__srv__UrScript_Request * msg);

/// Create srv/UrScript message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * urscript_interfaces__srv__UrScript_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_urscript_interfaces
urscript_interfaces__srv__UrScript_Request *
urscript_interfaces__srv__UrScript_Request__create();

/// Destroy srv/UrScript message.
/**
 * It calls
 * urscript_interfaces__srv__UrScript_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_urscript_interfaces
void
urscript_interfaces__srv__UrScript_Request__destroy(urscript_interfaces__srv__UrScript_Request * msg);


/// Initialize array of srv/UrScript messages.
/**
 * It allocates the memory for the number of elements and calls
 * urscript_interfaces__srv__UrScript_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_urscript_interfaces
bool
urscript_interfaces__srv__UrScript_Request__Sequence__init(urscript_interfaces__srv__UrScript_Request__Sequence * array, size_t size);

/// Finalize array of srv/UrScript messages.
/**
 * It calls
 * urscript_interfaces__srv__UrScript_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_urscript_interfaces
void
urscript_interfaces__srv__UrScript_Request__Sequence__fini(urscript_interfaces__srv__UrScript_Request__Sequence * array);

/// Create array of srv/UrScript messages.
/**
 * It allocates the memory for the array and calls
 * urscript_interfaces__srv__UrScript_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_urscript_interfaces
urscript_interfaces__srv__UrScript_Request__Sequence *
urscript_interfaces__srv__UrScript_Request__Sequence__create(size_t size);

/// Destroy array of srv/UrScript messages.
/**
 * It calls
 * urscript_interfaces__srv__UrScript_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_urscript_interfaces
void
urscript_interfaces__srv__UrScript_Request__Sequence__destroy(urscript_interfaces__srv__UrScript_Request__Sequence * array);

/// Initialize srv/UrScript message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * urscript_interfaces__srv__UrScript_Response
 * )) before or use
 * urscript_interfaces__srv__UrScript_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_urscript_interfaces
bool
urscript_interfaces__srv__UrScript_Response__init(urscript_interfaces__srv__UrScript_Response * msg);

/// Finalize srv/UrScript message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_urscript_interfaces
void
urscript_interfaces__srv__UrScript_Response__fini(urscript_interfaces__srv__UrScript_Response * msg);

/// Create srv/UrScript message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * urscript_interfaces__srv__UrScript_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_urscript_interfaces
urscript_interfaces__srv__UrScript_Response *
urscript_interfaces__srv__UrScript_Response__create();

/// Destroy srv/UrScript message.
/**
 * It calls
 * urscript_interfaces__srv__UrScript_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_urscript_interfaces
void
urscript_interfaces__srv__UrScript_Response__destroy(urscript_interfaces__srv__UrScript_Response * msg);


/// Initialize array of srv/UrScript messages.
/**
 * It allocates the memory for the number of elements and calls
 * urscript_interfaces__srv__UrScript_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_urscript_interfaces
bool
urscript_interfaces__srv__UrScript_Response__Sequence__init(urscript_interfaces__srv__UrScript_Response__Sequence * array, size_t size);

/// Finalize array of srv/UrScript messages.
/**
 * It calls
 * urscript_interfaces__srv__UrScript_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_urscript_interfaces
void
urscript_interfaces__srv__UrScript_Response__Sequence__fini(urscript_interfaces__srv__UrScript_Response__Sequence * array);

/// Create array of srv/UrScript messages.
/**
 * It allocates the memory for the array and calls
 * urscript_interfaces__srv__UrScript_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_urscript_interfaces
urscript_interfaces__srv__UrScript_Response__Sequence *
urscript_interfaces__srv__UrScript_Response__Sequence__create(size_t size);

/// Destroy array of srv/UrScript messages.
/**
 * It calls
 * urscript_interfaces__srv__UrScript_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_urscript_interfaces
void
urscript_interfaces__srv__UrScript_Response__Sequence__destroy(urscript_interfaces__srv__UrScript_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // URSCRIPT_INTERFACES__SRV__DETAIL__UR_SCRIPT__FUNCTIONS_H_
