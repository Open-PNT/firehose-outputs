// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from
// aspn23_ros_interfaces:msg/MeasurementPositionVelocityAttitude.idl generated
// code does not contain a copyright notice
#include "aspn23_ros_interfaces/msg/detail/measurement_position_velocity_attitude__functions.h"

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
// Member `covariance`
// Member `error_model_params`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `integrity`
#include "aspn23_ros_interfaces/msg/detail/type_integrity__functions.h"

bool aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__init(
    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude *msg) {
  if (!msg) {
    return false;
  }
  // header
  if (!aspn23_ros_interfaces__msg__TypeHeader__init(&msg->header)) {
    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__fini(msg);
    return false;
  }
  // time_of_validity
  if (!aspn23_ros_interfaces__msg__TypeTimestamp__init(
          &msg->time_of_validity)) {
    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__fini(msg);
    return false;
  }
  // reference_frame
  // p1
  // p2
  // p3
  // v1
  // v2
  // v3
  // quaternion
  // num_meas
  // covariance
  if (!rosidl_runtime_c__double__Sequence__init(&msg->covariance, 0)) {
    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__fini(msg);
    return false;
  }
  // error_model
  // num_error_model_params
  // error_model_params
  if (!rosidl_runtime_c__double__Sequence__init(&msg->error_model_params, 0)) {
    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__fini(msg);
    return false;
  }
  // num_integrity
  // integrity
  if (!aspn23_ros_interfaces__msg__TypeIntegrity__Sequence__init(
          &msg->integrity, 0)) {
    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__fini(msg);
    return false;
  }
  return true;
}

void aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__fini(
    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude *msg) {
  if (!msg) {
    return;
  }
  // header
  aspn23_ros_interfaces__msg__TypeHeader__fini(&msg->header);
  // time_of_validity
  aspn23_ros_interfaces__msg__TypeTimestamp__fini(&msg->time_of_validity);
  // reference_frame
  // p1
  // p2
  // p3
  // v1
  // v2
  // v3
  // quaternion
  // num_meas
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

bool aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__are_equal(
    const aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude *lhs,
    const aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude
        *rhs) {
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
  // reference_frame
  if (lhs->reference_frame != rhs->reference_frame) {
    return false;
  }
  // p1
  if (lhs->p1 != rhs->p1) {
    return false;
  }
  // p2
  if (lhs->p2 != rhs->p2) {
    return false;
  }
  // p3
  if (lhs->p3 != rhs->p3) {
    return false;
  }
  // v1
  if (lhs->v1 != rhs->v1) {
    return false;
  }
  // v2
  if (lhs->v2 != rhs->v2) {
    return false;
  }
  // v3
  if (lhs->v3 != rhs->v3) {
    return false;
  }
  // quaternion
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->quaternion[i] != rhs->quaternion[i]) {
      return false;
    }
  }
  // num_meas
  if (lhs->num_meas != rhs->num_meas) {
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

bool aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__copy(
    const aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude
        *input,
    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude *output) {
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
  // reference_frame
  output->reference_frame = input->reference_frame;
  // p1
  output->p1 = input->p1;
  // p2
  output->p2 = input->p2;
  // p3
  output->p3 = input->p3;
  // v1
  output->v1 = input->v1;
  // v2
  output->v2 = input->v2;
  // v3
  output->v3 = input->v3;
  // quaternion
  for (size_t i = 0; i < 4; ++i) {
    output->quaternion[i] = input->quaternion[i];
  }
  // num_meas
  output->num_meas = input->num_meas;
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

aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude *
aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__create(void) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude *msg =
      (aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude *)
          allocator.allocate(
              sizeof(
                  aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude),
              allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(
      msg, 0,
      sizeof(aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude));
  bool success =
      aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__init(
          msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__destroy(
    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude *msg) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}

bool aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__Sequence__init(
    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__Sequence
        *array,
    size_t size) {
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude *data = NULL;

  if (size) {
    data =
        (aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude *)
            allocator.zero_allocate(
                size,
                sizeof(
                    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude),
                allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success =
          aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__init(
              &data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array
      // elements
      for (; i > 0; --i) {
        aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__fini(
            &data[i - 1]);
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

void aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__Sequence__fini(
    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__Sequence
        *array) {
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__fini(
          &array->data[i]);
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

aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__Sequence *
aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__Sequence__create(
    size_t size) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__Sequence *array =
      (aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__Sequence
           *)
          allocator.allocate(
              sizeof(
                  aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__Sequence),
              allocator.state);
  if (!array) {
    return NULL;
  }
  bool success =
      aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__Sequence__init(
          array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__Sequence__destroy(
    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__Sequence
        *array) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__Sequence__fini(
        array);
  }
  allocator.deallocate(array, allocator.state);
}

bool aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__Sequence__are_equal(
    const aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__Sequence
        *lhs,
    const aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__Sequence
        *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__are_equal(
            &(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__Sequence__copy(
    const aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__Sequence
        *input,
    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__Sequence
        *output) {
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
        input->size *
        sizeof(aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude *data =
        (aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude *)
            allocator.reallocate(output->data, allocation_size,
                                 allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__init(
              &output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity;) {
          aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__fini(
              &output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__copy(
            &(input->data[i]), &(output->data[i]))) {
      return false;
    }
  }
  return true;
}
