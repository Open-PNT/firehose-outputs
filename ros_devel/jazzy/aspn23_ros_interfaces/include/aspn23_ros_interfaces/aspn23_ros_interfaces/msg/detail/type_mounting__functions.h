// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from aspn23_ros_interfaces:msg/TypeMounting.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/type_mounting.h"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_MOUNTING__FUNCTIONS_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_MOUNTING__FUNCTIONS_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "aspn23_ros_interfaces/msg/rosidl_generator_c__visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"

#include "aspn23_ros_interfaces/msg/detail/type_mounting__struct.h"

/// Initialize msg/TypeMounting message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * aspn23_ros_interfaces__msg__TypeMounting
 * )) before or use
 * aspn23_ros_interfaces__msg__TypeMounting__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces bool
aspn23_ros_interfaces__msg__TypeMounting__init(
    aspn23_ros_interfaces__msg__TypeMounting *msg);

/// Finalize msg/TypeMounting message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces void
aspn23_ros_interfaces__msg__TypeMounting__fini(
    aspn23_ros_interfaces__msg__TypeMounting *msg);

/// Create msg/TypeMounting message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * aspn23_ros_interfaces__msg__TypeMounting__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces aspn23_ros_interfaces__msg__TypeMounting *
aspn23_ros_interfaces__msg__TypeMounting__create(void);

/// Destroy msg/TypeMounting message.
/**
 * It calls
 * aspn23_ros_interfaces__msg__TypeMounting__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces void
aspn23_ros_interfaces__msg__TypeMounting__destroy(
    aspn23_ros_interfaces__msg__TypeMounting *msg);

/// Check for msg/TypeMounting message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces bool
aspn23_ros_interfaces__msg__TypeMounting__are_equal(
    const aspn23_ros_interfaces__msg__TypeMounting *lhs,
    const aspn23_ros_interfaces__msg__TypeMounting *rhs);

/// Copy a msg/TypeMounting message.
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
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces bool
aspn23_ros_interfaces__msg__TypeMounting__copy(
    const aspn23_ros_interfaces__msg__TypeMounting *input,
    aspn23_ros_interfaces__msg__TypeMounting *output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces const rosidl_type_hash_t *
aspn23_ros_interfaces__msg__TypeMounting__get_type_hash(
    const rosidl_message_type_support_t *type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces const rosidl_runtime_c__type_description__TypeDescription *
aspn23_ros_interfaces__msg__TypeMounting__get_type_description(
    const rosidl_message_type_support_t *type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces const rosidl_runtime_c__type_description__TypeSource *
aspn23_ros_interfaces__msg__TypeMounting__get_individual_type_description_source(
    const rosidl_message_type_support_t *type_support);

/// Retrieve pointer to the recursive raw sources that defined the description
/// of this type.
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces const rosidl_runtime_c__type_description__TypeSource__Sequence *
aspn23_ros_interfaces__msg__TypeMounting__get_type_description_sources(
    const rosidl_message_type_support_t *type_support);

/// Initialize array of msg/TypeMounting messages.
/**
 * It allocates the memory for the number of elements and calls
 * aspn23_ros_interfaces__msg__TypeMounting__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces bool
aspn23_ros_interfaces__msg__TypeMounting__Sequence__init(
    aspn23_ros_interfaces__msg__TypeMounting__Sequence *array, size_t size);

/// Finalize array of msg/TypeMounting messages.
/**
 * It calls
 * aspn23_ros_interfaces__msg__TypeMounting__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces void
aspn23_ros_interfaces__msg__TypeMounting__Sequence__fini(
    aspn23_ros_interfaces__msg__TypeMounting__Sequence *array);

/// Create array of msg/TypeMounting messages.
/**
 * It allocates the memory for the array and calls
 * aspn23_ros_interfaces__msg__TypeMounting__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces aspn23_ros_interfaces__msg__TypeMounting__Sequence *
aspn23_ros_interfaces__msg__TypeMounting__Sequence__create(size_t size);

/// Destroy array of msg/TypeMounting messages.
/**
 * It calls
 * aspn23_ros_interfaces__msg__TypeMounting__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces void
aspn23_ros_interfaces__msg__TypeMounting__Sequence__destroy(
    aspn23_ros_interfaces__msg__TypeMounting__Sequence *array);

/// Check for msg/TypeMounting message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality
 * operator. \param[in] rhs The message array on the right hand size of the
 * equality operator. \return true if message arrays are equal in size and
 * content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces bool
aspn23_ros_interfaces__msg__TypeMounting__Sequence__are_equal(
    const aspn23_ros_interfaces__msg__TypeMounting__Sequence *lhs,
    const aspn23_ros_interfaces__msg__TypeMounting__Sequence *rhs);

/// Copy an array of msg/TypeMounting messages.
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
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces bool
aspn23_ros_interfaces__msg__TypeMounting__Sequence__copy(
    const aspn23_ros_interfaces__msg__TypeMounting__Sequence *input,
    aspn23_ros_interfaces__msg__TypeMounting__Sequence *output);

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_MOUNTING__FUNCTIONS_H_
