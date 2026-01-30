// generated from
// rosidl_typesupport_introspection_c/resource/idl__type_support.c.em with input
// from aspn23_ros_interfaces:msg/MeasurementTimeFrequencyDifference.idl
// generated code does not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/measurement_time_frequency_difference__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_time_frequency_difference__rosidl_typesupport_introspection_c.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_time_frequency_difference__struct.h"
#include "aspn23_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include <stddef.h>

// Include directives for member types
// Member `header`
#include "aspn23_ros_interfaces/msg/type_header.h"
// Member `header`
#include "aspn23_ros_interfaces/msg/detail/type_header__rosidl_typesupport_introspection_c.h"
// Member `time_of_validity`
#include "aspn23_ros_interfaces/msg/type_timestamp.h"
// Member `time_of_validity`
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__rosidl_typesupport_introspection_c.h"
// Member `error_model_params`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `integrity`
#include "aspn23_ros_interfaces/msg/type_integrity.h"
// Member `integrity`
#include "aspn23_ros_interfaces/msg/detail/type_integrity__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C" {
#endif

void aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__MeasurementTimeFrequencyDifference_init_function(
    void *message_memory, enum rosidl_runtime_c__message_initialization _init) {
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void)_init;
  aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__init(
      message_memory);
}

void aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__MeasurementTimeFrequencyDifference_fini_function(
    void *message_memory) {
  aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__fini(
      message_memory);
}

size_t
aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__size_function__MeasurementTimeFrequencyDifference__covariance(
    const void *untyped_member) {
  (void)untyped_member;
  return 4;
}

const void *
aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__get_const_function__MeasurementTimeFrequencyDifference__covariance(
    const void *untyped_member, size_t index) {
  const double *member = (const double *)(untyped_member);
  return &member[index];
}

void *
aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__get_function__MeasurementTimeFrequencyDifference__covariance(
    void *untyped_member, size_t index) {
  double *member = (double *)(untyped_member);
  return &member[index];
}

void aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__fetch_function__MeasurementTimeFrequencyDifference__covariance(
    const void *untyped_member, size_t index, void *untyped_value) {
  const double *item =
      ((const double *)
           aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__get_const_function__MeasurementTimeFrequencyDifference__covariance(
               untyped_member, index));
  double *value = (double *)(untyped_value);
  *value = *item;
}

void aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__assign_function__MeasurementTimeFrequencyDifference__covariance(
    void *untyped_member, size_t index, const void *untyped_value) {
  double *item =
      ((double *)
           aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__get_function__MeasurementTimeFrequencyDifference__covariance(
               untyped_member, index));
  const double *value = (const double *)(untyped_value);
  *item = *value;
}

size_t
aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__size_function__MeasurementTimeFrequencyDifference__error_model_params(
    const void *untyped_member) {
  const rosidl_runtime_c__double__Sequence *member =
      (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void *
aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__get_const_function__MeasurementTimeFrequencyDifference__error_model_params(
    const void *untyped_member, size_t index) {
  const rosidl_runtime_c__double__Sequence *member =
      (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void *
aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__get_function__MeasurementTimeFrequencyDifference__error_model_params(
    void *untyped_member, size_t index) {
  rosidl_runtime_c__double__Sequence *member =
      (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__fetch_function__MeasurementTimeFrequencyDifference__error_model_params(
    const void *untyped_member, size_t index, void *untyped_value) {
  const double *item =
      ((const double *)
           aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__get_const_function__MeasurementTimeFrequencyDifference__error_model_params(
               untyped_member, index));
  double *value = (double *)(untyped_value);
  *value = *item;
}

void aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__assign_function__MeasurementTimeFrequencyDifference__error_model_params(
    void *untyped_member, size_t index, const void *untyped_value) {
  double *item =
      ((double *)
           aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__get_function__MeasurementTimeFrequencyDifference__error_model_params(
               untyped_member, index));
  const double *value = (const double *)(untyped_value);
  *item = *value;
}

bool aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__resize_function__MeasurementTimeFrequencyDifference__error_model_params(
    void *untyped_member, size_t size) {
  rosidl_runtime_c__double__Sequence *member =
      (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t
aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__size_function__MeasurementTimeFrequencyDifference__integrity(
    const void *untyped_member) {
  const aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *member =
      (const aspn23_ros_interfaces__msg__TypeIntegrity__Sequence
           *)(untyped_member);
  return member->size;
}

const void *
aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__get_const_function__MeasurementTimeFrequencyDifference__integrity(
    const void *untyped_member, size_t index) {
  const aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *member =
      (const aspn23_ros_interfaces__msg__TypeIntegrity__Sequence
           *)(untyped_member);
  return &member->data[index];
}

void *
aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__get_function__MeasurementTimeFrequencyDifference__integrity(
    void *untyped_member, size_t index) {
  aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *member =
      (aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *)(untyped_member);
  return &member->data[index];
}

void aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__fetch_function__MeasurementTimeFrequencyDifference__integrity(
    const void *untyped_member, size_t index, void *untyped_value) {
  const aspn23_ros_interfaces__msg__TypeIntegrity *item =
      ((const aspn23_ros_interfaces__msg__TypeIntegrity *)
           aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__get_const_function__MeasurementTimeFrequencyDifference__integrity(
               untyped_member, index));
  aspn23_ros_interfaces__msg__TypeIntegrity *value =
      (aspn23_ros_interfaces__msg__TypeIntegrity *)(untyped_value);
  *value = *item;
}

void aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__assign_function__MeasurementTimeFrequencyDifference__integrity(
    void *untyped_member, size_t index, const void *untyped_value) {
  aspn23_ros_interfaces__msg__TypeIntegrity *item =
      ((aspn23_ros_interfaces__msg__TypeIntegrity *)
           aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__get_function__MeasurementTimeFrequencyDifference__integrity(
               untyped_member, index));
  const aspn23_ros_interfaces__msg__TypeIntegrity *value =
      (const aspn23_ros_interfaces__msg__TypeIntegrity *)(untyped_value);
  *item = *value;
}

bool aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__resize_function__MeasurementTimeFrequencyDifference__integrity(
    void *untyped_member, size_t size) {
  aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *member =
      (aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *)(untyped_member);
  aspn23_ros_interfaces__msg__TypeIntegrity__Sequence__fini(member);
  return aspn23_ros_interfaces__msg__TypeIntegrity__Sequence__init(member,
                                                                   size);
}

static rosidl_typesupport_introspection_c__MessageMember aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__MeasurementTimeFrequencyDifference_message_member_array
    [15] = {
        {
            "header",                                             // name
            rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE, // type
            0,     // upper bound of string
            NULL,  // members of sub message (initialized later)
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(
                aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference,
                header), // bytes offset in struct
            NULL,        // default value
            NULL,        // size() function pointer
            NULL,        // get_const(index) function pointer
            NULL,        // get(index) function pointer
            NULL,        // fetch(index, &value) function pointer
            NULL,        // assign(index, value) function pointer
            NULL         // resize(index) function pointer
        },
        {
            "time_of_validity",                                   // name
            rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE, // type
            0,     // upper bound of string
            NULL,  // members of sub message (initialized later)
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(
                aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference,
                time_of_validity), // bytes offset in struct
            NULL,                  // default value
            NULL,                  // size() function pointer
            NULL,                  // get_const(index) function pointer
            NULL,                  // get(index) function pointer
            NULL,                  // fetch(index, &value) function pointer
            NULL,                  // assign(index, value) function pointer
            NULL                   // resize(index) function pointer
        },
        {
            "time_of_validity_attosec",                         // name
            rosidl_typesupport_introspection_c__ROS_TYPE_INT32, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(
                aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference,
                time_of_validity_attosec), // bytes offset in struct
            NULL,                          // default value
            NULL,                          // size() function pointer
            NULL,                          // get_const(index) function pointer
            NULL,                          // get(index) function pointer
            NULL, // fetch(index, &value) function pointer
            NULL, // assign(index, value) function pointer
            NULL  // resize(index) function pointer
        },
        {
            "clock_id1",                                        // name
            rosidl_typesupport_introspection_c__ROS_TYPE_UINT8, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(
                aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference,
                clock_id1), // bytes offset in struct
            NULL,           // default value
            NULL,           // size() function pointer
            NULL,           // get_const(index) function pointer
            NULL,           // get(index) function pointer
            NULL,           // fetch(index, &value) function pointer
            NULL,           // assign(index, value) function pointer
            NULL            // resize(index) function pointer
        },
        {
            "clock_id2",                                        // name
            rosidl_typesupport_introspection_c__ROS_TYPE_UINT8, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(
                aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference,
                clock_id2), // bytes offset in struct
            NULL,           // default value
            NULL,           // size() function pointer
            NULL,           // get_const(index) function pointer
            NULL,           // get(index) function pointer
            NULL,           // fetch(index, &value) function pointer
            NULL,           // assign(index, value) function pointer
            NULL            // resize(index) function pointer
        },
        {
            "time_diff_nsec",                                   // name
            rosidl_typesupport_introspection_c__ROS_TYPE_INT64, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(
                aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference,
                time_diff_nsec), // bytes offset in struct
            NULL,                // default value
            NULL,                // size() function pointer
            NULL,                // get_const(index) function pointer
            NULL,                // get(index) function pointer
            NULL,                // fetch(index, &value) function pointer
            NULL,                // assign(index, value) function pointer
            NULL                 // resize(index) function pointer
        },
        {
            "time_diff_attosec",                                // name
            rosidl_typesupport_introspection_c__ROS_TYPE_INT32, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(
                aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference,
                time_diff_attosec), // bytes offset in struct
            NULL,                   // default value
            NULL,                   // size() function pointer
            NULL,                   // get_const(index) function pointer
            NULL,                   // get(index) function pointer
            NULL,                   // fetch(index, &value) function pointer
            NULL,                   // assign(index, value) function pointer
            NULL                    // resize(index) function pointer
        },
        {
            "digits_of_precision",                              // name
            rosidl_typesupport_introspection_c__ROS_TYPE_UINT8, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(
                aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference,
                digits_of_precision), // bytes offset in struct
            NULL,                     // default value
            NULL,                     // size() function pointer
            NULL,                     // get_const(index) function pointer
            NULL,                     // get(index) function pointer
            NULL,                     // fetch(index, &value) function pointer
            NULL,                     // assign(index, value) function pointer
            NULL                      // resize(index) function pointer
        },
        {
            "freq_diff",                                         // name
            rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(
                aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference,
                freq_diff), // bytes offset in struct
            NULL,           // default value
            NULL,           // size() function pointer
            NULL,           // get_const(index) function pointer
            NULL,           // get(index) function pointer
            NULL,           // fetch(index, &value) function pointer
            NULL,           // assign(index, value) function pointer
            NULL            // resize(index) function pointer
        },
        {
            "covariance",                                        // name
            rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            true,  // is array
            4,     // array size
            false, // is upper bound
            offsetof(
                aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference,
                covariance), // bytes offset in struct
            NULL,            // default value
            aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__size_function__MeasurementTimeFrequencyDifference__covariance, // size() function pointer
            aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__get_const_function__MeasurementTimeFrequencyDifference__covariance, // get_const(index) function pointer
            aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__get_function__MeasurementTimeFrequencyDifference__covariance, // get(index) function pointer
            aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__fetch_function__MeasurementTimeFrequencyDifference__covariance, // fetch(index, &value) function pointer
            aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__assign_function__MeasurementTimeFrequencyDifference__covariance, // assign(index, value) function pointer
            NULL // resize(index) function pointer
        },
        {
            "error_model",                                      // name
            rosidl_typesupport_introspection_c__ROS_TYPE_UINT8, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(
                aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference,
                error_model), // bytes offset in struct
            NULL,             // default value
            NULL,             // size() function pointer
            NULL,             // get_const(index) function pointer
            NULL,             // get(index) function pointer
            NULL,             // fetch(index, &value) function pointer
            NULL,             // assign(index, value) function pointer
            NULL              // resize(index) function pointer
        },
        {
            "num_error_model_params",                            // name
            rosidl_typesupport_introspection_c__ROS_TYPE_UINT16, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(
                aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference,
                num_error_model_params), // bytes offset in struct
            NULL,                        // default value
            NULL,                        // size() function pointer
            NULL,                        // get_const(index) function pointer
            NULL,                        // get(index) function pointer
            NULL, // fetch(index, &value) function pointer
            NULL, // assign(index, value) function pointer
            NULL  // resize(index) function pointer
        },
        {
            "error_model_params",                                // name
            rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            true,  // is array
            0,     // array size
            false, // is upper bound
            offsetof(
                aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference,
                error_model_params), // bytes offset in struct
            NULL,                    // default value
            aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__size_function__MeasurementTimeFrequencyDifference__error_model_params, // size() function pointer
            aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__get_const_function__MeasurementTimeFrequencyDifference__error_model_params, // get_const(index) function pointer
            aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__get_function__MeasurementTimeFrequencyDifference__error_model_params, // get(index) function pointer
            aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__fetch_function__MeasurementTimeFrequencyDifference__error_model_params, // fetch(index, &value) function pointer
            aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__assign_function__MeasurementTimeFrequencyDifference__error_model_params, // assign(index, value) function pointer
            aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__resize_function__MeasurementTimeFrequencyDifference__error_model_params // resize(index) function pointer
        },
        {
            "num_integrity",                                    // name
            rosidl_typesupport_introspection_c__ROS_TYPE_UINT8, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(
                aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference,
                num_integrity), // bytes offset in struct
            NULL,               // default value
            NULL,               // size() function pointer
            NULL,               // get_const(index) function pointer
            NULL,               // get(index) function pointer
            NULL,               // fetch(index, &value) function pointer
            NULL,               // assign(index, value) function pointer
            NULL                // resize(index) function pointer
        },
        {
            "integrity",                                          // name
            rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE, // type
            0,     // upper bound of string
            NULL,  // members of sub message (initialized later)
            true,  // is array
            0,     // array size
            false, // is upper bound
            offsetof(
                aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference,
                integrity), // bytes offset in struct
            NULL,           // default value
            aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__size_function__MeasurementTimeFrequencyDifference__integrity, // size() function pointer
            aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__get_const_function__MeasurementTimeFrequencyDifference__integrity, // get_const(index) function pointer
            aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__get_function__MeasurementTimeFrequencyDifference__integrity, // get(index) function pointer
            aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__fetch_function__MeasurementTimeFrequencyDifference__integrity, // fetch(index, &value) function pointer
            aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__assign_function__MeasurementTimeFrequencyDifference__integrity, // assign(index, value) function pointer
            aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__resize_function__MeasurementTimeFrequencyDifference__integrity // resize(index) function pointer
        }};

static const rosidl_typesupport_introspection_c__MessageMembers
    aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__MeasurementTimeFrequencyDifference_message_members =
        {
            "aspn23_ros_interfaces__msg",         // message namespace
            "MeasurementTimeFrequencyDifference", // message name
            15,                                   // number of fields
            sizeof(
                aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference),
            aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__MeasurementTimeFrequencyDifference_message_member_array, // message members
            aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__MeasurementTimeFrequencyDifference_init_function, // function to initialize message memory (memory has to be allocated)
            aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__MeasurementTimeFrequencyDifference_fini_function // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t
    aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__MeasurementTimeFrequencyDifference_message_type_support_handle =
        {
            0,
            &aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__MeasurementTimeFrequencyDifference_message_members,
            get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aspn23_ros_interfaces const
    rosidl_message_type_support_t *
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
        MeasurementTimeFrequencyDifference)() {
  aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__MeasurementTimeFrequencyDifference_message_member_array
      [0]
          .members_ = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
      TypeHeader)();
  aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__MeasurementTimeFrequencyDifference_message_member_array
      [1]
          .members_ = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
      TypeTimestamp)();
  aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__MeasurementTimeFrequencyDifference_message_member_array
      [14]
          .members_ = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
      TypeIntegrity)();
  if (!aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__MeasurementTimeFrequencyDifference_message_type_support_handle
           .typesupport_identifier) {
    aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__MeasurementTimeFrequencyDifference_message_type_support_handle
        .typesupport_identifier =
        rosidl_typesupport_introspection_c__identifier;
  }
  return &aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__rosidl_typesupport_introspection_c__MeasurementTimeFrequencyDifference_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
