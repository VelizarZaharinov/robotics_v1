// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robo_miner_interfaces:msg/FieldPoint.idl
// generated code does not contain a copyright notice

#ifndef ROBO_MINER_INTERFACES__MSG__DETAIL__FIELD_POINT__FUNCTIONS_H_
#define ROBO_MINER_INTERFACES__MSG__DETAIL__FIELD_POINT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "robo_miner_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "robo_miner_interfaces/msg/detail/field_point__struct.h"

/// Initialize msg/FieldPoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robo_miner_interfaces__msg__FieldPoint
 * )) before or use
 * robo_miner_interfaces__msg__FieldPoint__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_miner_interfaces
bool
robo_miner_interfaces__msg__FieldPoint__init(robo_miner_interfaces__msg__FieldPoint * msg);

/// Finalize msg/FieldPoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_miner_interfaces
void
robo_miner_interfaces__msg__FieldPoint__fini(robo_miner_interfaces__msg__FieldPoint * msg);

/// Create msg/FieldPoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robo_miner_interfaces__msg__FieldPoint__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_miner_interfaces
robo_miner_interfaces__msg__FieldPoint *
robo_miner_interfaces__msg__FieldPoint__create();

/// Destroy msg/FieldPoint message.
/**
 * It calls
 * robo_miner_interfaces__msg__FieldPoint__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_miner_interfaces
void
robo_miner_interfaces__msg__FieldPoint__destroy(robo_miner_interfaces__msg__FieldPoint * msg);


/// Initialize array of msg/FieldPoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * robo_miner_interfaces__msg__FieldPoint__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_miner_interfaces
bool
robo_miner_interfaces__msg__FieldPoint__Sequence__init(robo_miner_interfaces__msg__FieldPoint__Sequence * array, size_t size);

/// Finalize array of msg/FieldPoint messages.
/**
 * It calls
 * robo_miner_interfaces__msg__FieldPoint__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_miner_interfaces
void
robo_miner_interfaces__msg__FieldPoint__Sequence__fini(robo_miner_interfaces__msg__FieldPoint__Sequence * array);

/// Create array of msg/FieldPoint messages.
/**
 * It allocates the memory for the array and calls
 * robo_miner_interfaces__msg__FieldPoint__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_miner_interfaces
robo_miner_interfaces__msg__FieldPoint__Sequence *
robo_miner_interfaces__msg__FieldPoint__Sequence__create(size_t size);

/// Destroy array of msg/FieldPoint messages.
/**
 * It calls
 * robo_miner_interfaces__msg__FieldPoint__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_miner_interfaces
void
robo_miner_interfaces__msg__FieldPoint__Sequence__destroy(robo_miner_interfaces__msg__FieldPoint__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ROBO_MINER_INTERFACES__MSG__DETAIL__FIELD_POINT__FUNCTIONS_H_
