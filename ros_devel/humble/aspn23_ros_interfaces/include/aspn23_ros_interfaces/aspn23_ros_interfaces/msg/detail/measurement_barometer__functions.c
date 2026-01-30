// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aspn23_ros_interfaces:msg/MeasurementBarometer.idl
// generated code does not contain a copyright notice
#include "aspn23_ros_interfaces/msg/detail/measurement_barometer__functions.h"

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
// Member `error_model_params`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `integrity`
#include "aspn23_ros_interfaces/msg/detail/type_integrity__functions.h"

bool aspn23_ros_interfaces__msg__MeasurementBarometer__init(
    aspn23_ros_interfaces__msg__MeasurementBarometer *msg) {
  if (!msg) {
    return false;
  }
  // header
  if (!aspn23_ros_interfaces__msg__TypeHeader__init(&msg->header)) {
    aspn23_ros_interfaces__msg__MeasurementBarometer__fini(msg);
    return false;
  }
  // time_of_validity
  if (!aspn23_ros_interfaces__msg__TypeTimestamp__init(
          &msg->time_of_validity)) {
    aspn23_ros_interfaces__msg__MeasurementBarometer__fini(msg);
    return false;
  }
  // pressure
  // variance
  // error_model
  // num_error_model_params
  // error_model_params
  if (!rosidl_runtime_c__double__Sequence__init(&msg->error_model_params, 0)) {
    aspn23_ros_interfaces__msg__MeasurementBarometer__fini(msg);
    return false;
  }
  // num_integrity
  // integrity
  if (!aspn23_ros_interfaces__msg__TypeIntegrity__Sequence__init(
          &msg->integrity, 0)) {
    aspn23_ros_interfaces__msg__MeasurementBarometer__fini(msg);
    return false;
  }
  return true;
}

void aspn23_ros_interfaces__msg__MeasurementBarometer__fini(
    aspn23_ros_interfaces__msg__MeasurementBarometer *msg) {
  if (!msg) {
    return;
  }
  // header
  aspn23_ros_interfaces__msg__TypeHeader__fini(&msg->header);
  // time_of_validity
  aspn23_ros_interfaces__msg__TypeTimestamp__fini(&msg->time_of_validity);
  // pressure
  // variance
  // error_model
  // num_error_model_params
  // error_model_params
  rosidl_runtime_c__double__Sequence__fini(&msg->error_model_params);
  // num_integrity
  // integrity
  aspn23_ros_interfaces__msg__TypeIntegrity__Sequence__fini(&msg->integrity);
}

bool aspn23_ros_interfaces__msg__MeasurementBarometer__are_equal(
    const aspn23_ros_interfaces__msg__MeasurementBarometer *lhs,
    const aspn23_ros_interfaces__msg__MeasurementBarometer *rhs) {
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
  // pressure
  if (lhs->pressure != rhs->pressure) {
    return false;
  }
  // variance
  if (lhs->variance != rhs->variance) {
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

bool aspn23_ros_interfaces__msg__MeasurementBarometer__copy(
    const aspn23_ros_interfaces__msg__MeasurementBarometer *input,
    aspn23_ros_interfaces__msg__MeasurementBarometer *output) {
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
  // pressure
  output->pressure = input->pressure;
  // variance
  output->variance = input->variance;
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

aspn23_ros_interfaces__msg__MeasurementBarometer *
aspn23_ros_interfaces__msg__MeasurementBarometer__create() {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__MeasurementBarometer *msg =
      (aspn23_ros_interfaces__msg__MeasurementBarometer *)allocator.allocate(
          sizeof(aspn23_ros_interfaces__msg__MeasurementBarometer),
          allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aspn23_ros_interfaces__msg__MeasurementBarometer));
  bool success = aspn23_ros_interfaces__msg__MeasurementBarometer__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void aspn23_ros_interfaces__msg__MeasurementBarometer__destroy(
    aspn23_ros_interfaces__msg__MeasurementBarometer *msg) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aspn23_ros_interfaces__msg__MeasurementBarometer__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}

bool aspn23_ros_interfaces__msg__MeasurementBarometer__Sequence__init(
    aspn23_ros_interfaces__msg__MeasurementBarometer__Sequence *array,
    size_t size) {
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__MeasurementBarometer *data = NULL;

  if (size) {
    data =
        (aspn23_ros_interfaces__msg__MeasurementBarometer *)
            allocator.zero_allocate(
                size, sizeof(aspn23_ros_interfaces__msg__MeasurementBarometer),
                allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success =
          aspn23_ros_interfaces__msg__MeasurementBarometer__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array
      // elements
      for (; i > 0; --i) {
        aspn23_ros_interfaces__msg__MeasurementBarometer__fini(&data[i - 1]);
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

void aspn23_ros_interfaces__msg__MeasurementBarometer__Sequence__fini(
    aspn23_ros_interfaces__msg__MeasurementBarometer__Sequence *array) {
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aspn23_ros_interfaces__msg__MeasurementBarometer__fini(&array->data[i]);
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

aspn23_ros_interfaces__msg__MeasurementBarometer__Sequence *
aspn23_ros_interfaces__msg__MeasurementBarometer__Sequence__create(
    size_t size) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__MeasurementBarometer__Sequence *array =
      (aspn23_ros_interfaces__msg__MeasurementBarometer__Sequence *)
          allocator.allocate(
              sizeof(
                  aspn23_ros_interfaces__msg__MeasurementBarometer__Sequence),
              allocator.state);
  if (!array) {
    return NULL;
  }
  bool success =
      aspn23_ros_interfaces__msg__MeasurementBarometer__Sequence__init(array,
                                                                       size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void aspn23_ros_interfaces__msg__MeasurementBarometer__Sequence__destroy(
    aspn23_ros_interfaces__msg__MeasurementBarometer__Sequence *array) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aspn23_ros_interfaces__msg__MeasurementBarometer__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool aspn23_ros_interfaces__msg__MeasurementBarometer__Sequence__are_equal(
    const aspn23_ros_interfaces__msg__MeasurementBarometer__Sequence *lhs,
    const aspn23_ros_interfaces__msg__MeasurementBarometer__Sequence *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aspn23_ros_interfaces__msg__MeasurementBarometer__are_equal(
            &(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool aspn23_ros_interfaces__msg__MeasurementBarometer__Sequence__copy(
    const aspn23_ros_interfaces__msg__MeasurementBarometer__Sequence *input,
    aspn23_ros_interfaces__msg__MeasurementBarometer__Sequence *output) {
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
        input->size * sizeof(aspn23_ros_interfaces__msg__MeasurementBarometer);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aspn23_ros_interfaces__msg__MeasurementBarometer *data =
        (aspn23_ros_interfaces__msg__MeasurementBarometer *)allocator
            .reallocate(output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aspn23_ros_interfaces__msg__MeasurementBarometer__init(
              &output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity;) {
          aspn23_ros_interfaces__msg__MeasurementBarometer__fini(
              &output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aspn23_ros_interfaces__msg__MeasurementBarometer__copy(
            &(input->data[i]), &(output->data[i]))) {
      return false;
    }
  }
  return true;
}
