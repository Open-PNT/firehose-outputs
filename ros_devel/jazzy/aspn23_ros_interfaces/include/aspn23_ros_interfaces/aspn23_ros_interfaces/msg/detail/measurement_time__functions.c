// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aspn23_ros_interfaces:msg/MeasurementTime.idl
// generated code does not contain a copyright notice
#include "aspn23_ros_interfaces/msg/detail/measurement_time__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `header`
#include "aspn23_ros_interfaces/msg/detail/type_header__functions.h"
// Member `time_of_validity`
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__functions.h"
// Member `clock_id`
// Member `elapsed_nsec`
// Member `elapsed_attosec`
// Member `covariance`
// Member `error_model_params`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `integrity`
#include "aspn23_ros_interfaces/msg/detail/type_integrity__functions.h"

bool aspn23_ros_interfaces__msg__MeasurementTime__init(
    aspn23_ros_interfaces__msg__MeasurementTime *msg) {
  if (!msg) {
    return false;
  }
  // header
  if (!aspn23_ros_interfaces__msg__TypeHeader__init(&msg->header)) {
    aspn23_ros_interfaces__msg__MeasurementTime__fini(msg);
    return false;
  }
  // time_of_validity
  if (!aspn23_ros_interfaces__msg__TypeTimestamp__init(
          &msg->time_of_validity)) {
    aspn23_ros_interfaces__msg__MeasurementTime__fini(msg);
    return false;
  }
  // time_of_validity_attosec
  // num_obs
  // clock_id
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->clock_id, 0)) {
    aspn23_ros_interfaces__msg__MeasurementTime__fini(msg);
    return false;
  }
  // elapsed_nsec
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->elapsed_nsec, 0)) {
    aspn23_ros_interfaces__msg__MeasurementTime__fini(msg);
    return false;
  }
  // elapsed_attosec
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->elapsed_attosec, 0)) {
    aspn23_ros_interfaces__msg__MeasurementTime__fini(msg);
    return false;
  }
  // digits_of_precision
  // covariance
  if (!rosidl_runtime_c__double__Sequence__init(&msg->covariance, 0)) {
    aspn23_ros_interfaces__msg__MeasurementTime__fini(msg);
    return false;
  }
  // error_model
  // num_error_model_params
  // error_model_params
  if (!rosidl_runtime_c__double__Sequence__init(&msg->error_model_params, 0)) {
    aspn23_ros_interfaces__msg__MeasurementTime__fini(msg);
    return false;
  }
  // num_integrity
  // integrity
  if (!aspn23_ros_interfaces__msg__TypeIntegrity__Sequence__init(
          &msg->integrity, 0)) {
    aspn23_ros_interfaces__msg__MeasurementTime__fini(msg);
    return false;
  }
  return true;
}

void aspn23_ros_interfaces__msg__MeasurementTime__fini(
    aspn23_ros_interfaces__msg__MeasurementTime *msg) {
  if (!msg) {
    return;
  }
  // header
  aspn23_ros_interfaces__msg__TypeHeader__fini(&msg->header);
  // time_of_validity
  aspn23_ros_interfaces__msg__TypeTimestamp__fini(&msg->time_of_validity);
  // time_of_validity_attosec
  // num_obs
  // clock_id
  rosidl_runtime_c__uint8__Sequence__fini(&msg->clock_id);
  // elapsed_nsec
  rosidl_runtime_c__int64__Sequence__fini(&msg->elapsed_nsec);
  // elapsed_attosec
  rosidl_runtime_c__int32__Sequence__fini(&msg->elapsed_attosec);
  // digits_of_precision
  // covariance
  rosidl_runtime_c__double__Sequence__fini(&msg->covariance);
  // error_model
  // num_error_model_params
  // error_model_params
  rosidl_runtime_c__double__Sequence__fini(&msg->error_model_params);
  // num_integrity
  // integrity
  aspn23_ros_interfaces__msg__TypeIntegrity__Sequence__fini(&msg->integrity);
}

bool aspn23_ros_interfaces__msg__MeasurementTime__are_equal(
    const aspn23_ros_interfaces__msg__MeasurementTime *lhs,
    const aspn23_ros_interfaces__msg__MeasurementTime *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!aspn23_ros_interfaces__msg__TypeHeader__are_equal(&(lhs->header),
                                                         &(rhs->header))) {
    return false;
  }
  // time_of_validity
  if (!aspn23_ros_interfaces__msg__TypeTimestamp__are_equal(
          &(lhs->time_of_validity), &(rhs->time_of_validity))) {
    return false;
  }
  // time_of_validity_attosec
  if (lhs->time_of_validity_attosec != rhs->time_of_validity_attosec) {
    return false;
  }
  // num_obs
  if (lhs->num_obs != rhs->num_obs) {
    return false;
  }
  // clock_id
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(&(lhs->clock_id),
                                                    &(rhs->clock_id))) {
    return false;
  }
  // elapsed_nsec
  if (!rosidl_runtime_c__int64__Sequence__are_equal(&(lhs->elapsed_nsec),
                                                    &(rhs->elapsed_nsec))) {
    return false;
  }
  // elapsed_attosec
  if (!rosidl_runtime_c__int32__Sequence__are_equal(&(lhs->elapsed_attosec),
                                                    &(rhs->elapsed_attosec))) {
    return false;
  }
  // digits_of_precision
  if (lhs->digits_of_precision != rhs->digits_of_precision) {
    return false;
  }
  // covariance
  if (!rosidl_runtime_c__double__Sequence__are_equal(&(lhs->covariance),
                                                     &(rhs->covariance))) {
    return false;
  }
  // error_model
  if (lhs->error_model != rhs->error_model) {
    return false;
  }
  // num_error_model_params
  if (lhs->num_error_model_params != rhs->num_error_model_params) {
    return false;
  }
  // error_model_params
  if (!rosidl_runtime_c__double__Sequence__are_equal(
          &(lhs->error_model_params), &(rhs->error_model_params))) {
    return false;
  }
  // num_integrity
  if (lhs->num_integrity != rhs->num_integrity) {
    return false;
  }
  // integrity
  if (!aspn23_ros_interfaces__msg__TypeIntegrity__Sequence__are_equal(
          &(lhs->integrity), &(rhs->integrity))) {
    return false;
  }
  return true;
}

bool aspn23_ros_interfaces__msg__MeasurementTime__copy(
    const aspn23_ros_interfaces__msg__MeasurementTime *input,
    aspn23_ros_interfaces__msg__MeasurementTime *output) {
  if (!input || !output) {
    return false;
  }
  // header
  if (!aspn23_ros_interfaces__msg__TypeHeader__copy(&(input->header),
                                                    &(output->header))) {
    return false;
  }
  // time_of_validity
  if (!aspn23_ros_interfaces__msg__TypeTimestamp__copy(
          &(input->time_of_validity), &(output->time_of_validity))) {
    return false;
  }
  // time_of_validity_attosec
  output->time_of_validity_attosec = input->time_of_validity_attosec;
  // num_obs
  output->num_obs = input->num_obs;
  // clock_id
  if (!rosidl_runtime_c__uint8__Sequence__copy(&(input->clock_id),
                                               &(output->clock_id))) {
    return false;
  }
  // elapsed_nsec
  if (!rosidl_runtime_c__int64__Sequence__copy(&(input->elapsed_nsec),
                                               &(output->elapsed_nsec))) {
    return false;
  }
  // elapsed_attosec
  if (!rosidl_runtime_c__int32__Sequence__copy(&(input->elapsed_attosec),
                                               &(output->elapsed_attosec))) {
    return false;
  }
  // digits_of_precision
  output->digits_of_precision = input->digits_of_precision;
  // covariance
  if (!rosidl_runtime_c__double__Sequence__copy(&(input->covariance),
                                                &(output->covariance))) {
    return false;
  }
  // error_model
  output->error_model = input->error_model;
  // num_error_model_params
  output->num_error_model_params = input->num_error_model_params;
  // error_model_params
  if (!rosidl_runtime_c__double__Sequence__copy(
          &(input->error_model_params), &(output->error_model_params))) {
    return false;
  }
  // num_integrity
  output->num_integrity = input->num_integrity;
  // integrity
  if (!aspn23_ros_interfaces__msg__TypeIntegrity__Sequence__copy(
          &(input->integrity), &(output->integrity))) {
    return false;
  }
  return true;
}

aspn23_ros_interfaces__msg__MeasurementTime *
aspn23_ros_interfaces__msg__MeasurementTime__create(void) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__MeasurementTime *msg =
      (aspn23_ros_interfaces__msg__MeasurementTime *)allocator.allocate(
          sizeof(aspn23_ros_interfaces__msg__MeasurementTime), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aspn23_ros_interfaces__msg__MeasurementTime));
  bool success = aspn23_ros_interfaces__msg__MeasurementTime__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void aspn23_ros_interfaces__msg__MeasurementTime__destroy(
    aspn23_ros_interfaces__msg__MeasurementTime *msg) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aspn23_ros_interfaces__msg__MeasurementTime__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}

bool aspn23_ros_interfaces__msg__MeasurementTime__Sequence__init(
    aspn23_ros_interfaces__msg__MeasurementTime__Sequence *array, size_t size) {
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__MeasurementTime *data = NULL;

  if (size) {
    data =
        (aspn23_ros_interfaces__msg__MeasurementTime *)allocator.zero_allocate(
            size, sizeof(aspn23_ros_interfaces__msg__MeasurementTime),
            allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success =
          aspn23_ros_interfaces__msg__MeasurementTime__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array
      // elements
      for (; i > 0; --i) {
        aspn23_ros_interfaces__msg__MeasurementTime__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void aspn23_ros_interfaces__msg__MeasurementTime__Sequence__fini(
    aspn23_ros_interfaces__msg__MeasurementTime__Sequence *array) {
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aspn23_ros_interfaces__msg__MeasurementTime__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

aspn23_ros_interfaces__msg__MeasurementTime__Sequence *
aspn23_ros_interfaces__msg__MeasurementTime__Sequence__create(size_t size) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__MeasurementTime__Sequence *array =
      (aspn23_ros_interfaces__msg__MeasurementTime__Sequence *)
          allocator.allocate(
              sizeof(aspn23_ros_interfaces__msg__MeasurementTime__Sequence),
              allocator.state);
  if (!array) {
    return NULL;
  }
  bool success =
      aspn23_ros_interfaces__msg__MeasurementTime__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void aspn23_ros_interfaces__msg__MeasurementTime__Sequence__destroy(
    aspn23_ros_interfaces__msg__MeasurementTime__Sequence *array) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aspn23_ros_interfaces__msg__MeasurementTime__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool aspn23_ros_interfaces__msg__MeasurementTime__Sequence__are_equal(
    const aspn23_ros_interfaces__msg__MeasurementTime__Sequence *lhs,
    const aspn23_ros_interfaces__msg__MeasurementTime__Sequence *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aspn23_ros_interfaces__msg__MeasurementTime__are_equal(
            &(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool aspn23_ros_interfaces__msg__MeasurementTime__Sequence__copy(
    const aspn23_ros_interfaces__msg__MeasurementTime__Sequence *input,
    aspn23_ros_interfaces__msg__MeasurementTime__Sequence *output) {
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
        input->size * sizeof(aspn23_ros_interfaces__msg__MeasurementTime);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aspn23_ros_interfaces__msg__MeasurementTime *data =
        (aspn23_ros_interfaces__msg__MeasurementTime *)allocator.reallocate(
            output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aspn23_ros_interfaces__msg__MeasurementTime__init(
              &output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity;) {
          aspn23_ros_interfaces__msg__MeasurementTime__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aspn23_ros_interfaces__msg__MeasurementTime__copy(
            &(input->data[i]), &(output->data[i]))) {
      return false;
    }
  }
  return true;
}
