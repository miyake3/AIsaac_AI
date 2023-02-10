// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robocup_ssl_msgs:msg/Vector2.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__VECTOR2__STRUCT_H_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__VECTOR2__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Vector2 in the package robocup_ssl_msgs.
typedef struct robocup_ssl_msgs__msg__Vector2
{
  float x;
  float y;
} robocup_ssl_msgs__msg__Vector2;

// Struct for a sequence of robocup_ssl_msgs__msg__Vector2.
typedef struct robocup_ssl_msgs__msg__Vector2__Sequence
{
  robocup_ssl_msgs__msg__Vector2 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocup_ssl_msgs__msg__Vector2__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__VECTOR2__STRUCT_H_