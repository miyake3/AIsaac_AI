// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robocup_ssl_msgs:msg/Vector2f.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__VECTOR2F__FUNCTIONS_H_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__VECTOR2F__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "robocup_ssl_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "robocup_ssl_msgs/msg/detail/vector2f__struct.h"

/// Initialize msg/Vector2f message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robocup_ssl_msgs__msg__Vector2f
 * )) before or use
 * robocup_ssl_msgs__msg__Vector2f__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robocup_ssl_msgs
bool
robocup_ssl_msgs__msg__Vector2f__init(robocup_ssl_msgs__msg__Vector2f * msg);

/// Finalize msg/Vector2f message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocup_ssl_msgs
void
robocup_ssl_msgs__msg__Vector2f__fini(robocup_ssl_msgs__msg__Vector2f * msg);

/// Create msg/Vector2f message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robocup_ssl_msgs__msg__Vector2f__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robocup_ssl_msgs
robocup_ssl_msgs__msg__Vector2f *
robocup_ssl_msgs__msg__Vector2f__create();

/// Destroy msg/Vector2f message.
/**
 * It calls
 * robocup_ssl_msgs__msg__Vector2f__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocup_ssl_msgs
void
robocup_ssl_msgs__msg__Vector2f__destroy(robocup_ssl_msgs__msg__Vector2f * msg);

/// Check for msg/Vector2f message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocup_ssl_msgs
bool
robocup_ssl_msgs__msg__Vector2f__are_equal(const robocup_ssl_msgs__msg__Vector2f * lhs, const robocup_ssl_msgs__msg__Vector2f * rhs);

/// Copy a msg/Vector2f message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocup_ssl_msgs
bool
robocup_ssl_msgs__msg__Vector2f__copy(
  const robocup_ssl_msgs__msg__Vector2f * input,
  robocup_ssl_msgs__msg__Vector2f * output);

/// Initialize array of msg/Vector2f messages.
/**
 * It allocates the memory for the number of elements and calls
 * robocup_ssl_msgs__msg__Vector2f__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocup_ssl_msgs
bool
robocup_ssl_msgs__msg__Vector2f__Sequence__init(robocup_ssl_msgs__msg__Vector2f__Sequence * array, size_t size);

/// Finalize array of msg/Vector2f messages.
/**
 * It calls
 * robocup_ssl_msgs__msg__Vector2f__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocup_ssl_msgs
void
robocup_ssl_msgs__msg__Vector2f__Sequence__fini(robocup_ssl_msgs__msg__Vector2f__Sequence * array);

/// Create array of msg/Vector2f messages.
/**
 * It allocates the memory for the array and calls
 * robocup_ssl_msgs__msg__Vector2f__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robocup_ssl_msgs
robocup_ssl_msgs__msg__Vector2f__Sequence *
robocup_ssl_msgs__msg__Vector2f__Sequence__create(size_t size);

/// Destroy array of msg/Vector2f messages.
/**
 * It calls
 * robocup_ssl_msgs__msg__Vector2f__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocup_ssl_msgs
void
robocup_ssl_msgs__msg__Vector2f__Sequence__destroy(robocup_ssl_msgs__msg__Vector2f__Sequence * array);

/// Check for msg/Vector2f message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocup_ssl_msgs
bool
robocup_ssl_msgs__msg__Vector2f__Sequence__are_equal(const robocup_ssl_msgs__msg__Vector2f__Sequence * lhs, const robocup_ssl_msgs__msg__Vector2f__Sequence * rhs);

/// Copy an array of msg/Vector2f messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocup_ssl_msgs
bool
robocup_ssl_msgs__msg__Vector2f__Sequence__copy(
  const robocup_ssl_msgs__msg__Vector2f__Sequence * input,
  robocup_ssl_msgs__msg__Vector2f__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__VECTOR2F__FUNCTIONS_H_