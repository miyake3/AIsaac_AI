// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from robocup_ssl_msgs:msg/BallModelChipFixedLoss.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__BALL_MODEL_CHIP_FIXED_LOSS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__BALL_MODEL_CHIP_FIXED_LOSS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "robocup_ssl_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "robocup_ssl_msgs/msg/detail/ball_model_chip_fixed_loss__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace robocup_ssl_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robocup_ssl_msgs
cdr_serialize(
  const robocup_ssl_msgs::msg::BallModelChipFixedLoss & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robocup_ssl_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robocup_ssl_msgs::msg::BallModelChipFixedLoss & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robocup_ssl_msgs
get_serialized_size(
  const robocup_ssl_msgs::msg::BallModelChipFixedLoss & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robocup_ssl_msgs
max_serialized_size_BallModelChipFixedLoss(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace robocup_ssl_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robocup_ssl_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robocup_ssl_msgs, msg, BallModelChipFixedLoss)();

#ifdef __cplusplus
}
#endif

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__BALL_MODEL_CHIP_FIXED_LOSS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_