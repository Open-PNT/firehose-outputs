// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aspn23_ros_interfaces:msg/MetadataImu.idl
// generated code does not contain a copyright notice
#include "aspn23_ros_interfaces/msg/detail/metadata_imu__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `info`
#include "aspn23_ros_interfaces/msg/detail/type_metadataheader__functions.h"
// Member `time_of_validity`
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__functions.h"
// Member `mounting`
#include "aspn23_ros_interfaces/msg/detail/type_mounting__functions.h"
// Member `error_model_params`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool aspn23_ros_interfaces__msg__MetadataImu__init(
    aspn23_ros_interfaces__msg__MetadataImu *msg) {
  if (!msg) {
    return false;
  }
  // info
  if (!aspn23_ros_interfaces__msg__TypeMetadataheader__init(&msg->info)) {
    aspn23_ros_interfaces__msg__MetadataImu__fini(msg);
    return false;
  }
  // time_of_validity
  if (!aspn23_ros_interfaces__msg__TypeTimestamp__init(
          &msg->time_of_validity)) {
    aspn23_ros_interfaces__msg__MetadataImu__fini(msg);
    return false;
  }
  // mounting
  if (!aspn23_ros_interfaces__msg__TypeMounting__init(&msg->mounting)) {
    aspn23_ros_interfaces__msg__MetadataImu__fini(msg);
    return false;
  }
  // error_model
  // num_error_model_params
  // error_model_params
  if (!rosidl_runtime_c__double__Sequence__init(&msg->error_model_params, 0)) {
    aspn23_ros_interfaces__msg__MetadataImu__fini(msg);
    return false;
  }
  return true;
}

void aspn23_ros_interfaces__msg__MetadataImu__fini(
    aspn23_ros_interfaces__msg__MetadataImu *msg) {
  if (!msg) {
    return;
  }
  // info
  aspn23_ros_interfaces__msg__TypeMetadataheader__fini(&msg->info);
  // time_of_validity
  aspn23_ros_interfaces__msg__TypeTimestamp__fini(&msg->time_of_validity);
  // mounting
  aspn23_ros_interfaces__msg__TypeMounting__fini(&msg->mounting);
  // error_model
  // num_error_model_params
  // error_model_params
  rosidl_runtime_c__double__Sequence__fini(&msg->error_model_params);
}

bool aspn23_ros_interfaces__msg__MetadataImu__are_equal(
    const aspn23_ros_interfaces__msg__MetadataImu *lhs,
    const aspn23_ros_interfaces__msg__MetadataImu *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!aspn23_ros_interfaces__msg__TypeMetadataheader__are_equal(
          &(lhs->info), &(rhs->info))) {
    return false;
  }
  // time_of_validity
  if (!aspn23_ros_interfaces__msg__TypeTimestamp__are_equal(
          &(lhs->time_of_validity), &(rhs->time_of_validity))) {
    return false;
  }
  // mounting
  if (!aspn23_ros_interfaces__msg__TypeMounting__are_equal(&(lhs->mounting),
                                                           &(rhs->mounting))) {
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
  return true;
}

bool aspn23_ros_interfaces__msg__MetadataImu__copy(
    const aspn23_ros_interfaces__msg__MetadataImu *input,
    aspn23_ros_interfaces__msg__MetadataImu *output) {
  if (!input || !output) {
    return false;
  }
  // info
  if (!aspn23_ros_interfaces__msg__TypeMetadataheader__copy(&(input->info),
                                                            &(output->info))) {
    return false;
  }
  // time_of_validity
  if (!aspn23_ros_interfaces__msg__TypeTimestamp__copy(
          &(input->time_of_validity), &(output->time_of_validity))) {
    return false;
  }
  // mounting
  if (!aspn23_ros_interfaces__msg__TypeMounting__copy(&(input->mounting),
                                                      &(output->mounting))) {
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
  return true;
}

aspn23_ros_interfaces__msg__MetadataImu *
aspn23_ros_interfaces__msg__MetadataImu__create(void) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__MetadataImu *msg =
      (aspn23_ros_interfaces__msg__MetadataImu *)allocator.allocate(
          sizeof(aspn23_ros_interfaces__msg__MetadataImu), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aspn23_ros_interfaces__msg__MetadataImu));
  bool success = aspn23_ros_interfaces__msg__MetadataImu__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void aspn23_ros_interfaces__msg__MetadataImu__destroy(
    aspn23_ros_interfaces__msg__MetadataImu *msg) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aspn23_ros_interfaces__msg__MetadataImu__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}

bool aspn23_ros_interfaces__msg__MetadataImu__Sequence__init(
    aspn23_ros_interfaces__msg__MetadataImu__Sequence *array, size_t size) {
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__MetadataImu *data = NULL;

  if (size) {
    data = (aspn23_ros_interfaces__msg__MetadataImu *)allocator.zero_allocate(
        size, sizeof(aspn23_ros_interfaces__msg__MetadataImu), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aspn23_ros_interfaces__msg__MetadataImu__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array
      // elements
      for (; i > 0; --i) {
        aspn23_ros_interfaces__msg__MetadataImu__fini(&data[i - 1]);
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

void aspn23_ros_interfaces__msg__MetadataImu__Sequence__fini(
    aspn23_ros_interfaces__msg__MetadataImu__Sequence *array) {
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aspn23_ros_interfaces__msg__MetadataImu__fini(&array->data[i]);
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

aspn23_ros_interfaces__msg__MetadataImu__Sequence *
aspn23_ros_interfaces__msg__MetadataImu__Sequence__create(size_t size) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__MetadataImu__Sequence *array =
      (aspn23_ros_interfaces__msg__MetadataImu__Sequence *)allocator.allocate(
          sizeof(aspn23_ros_interfaces__msg__MetadataImu__Sequence),
          allocator.state);
  if (!array) {
    return NULL;
  }
  bool success =
      aspn23_ros_interfaces__msg__MetadataImu__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void aspn23_ros_interfaces__msg__MetadataImu__Sequence__destroy(
    aspn23_ros_interfaces__msg__MetadataImu__Sequence *array) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aspn23_ros_interfaces__msg__MetadataImu__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool aspn23_ros_interfaces__msg__MetadataImu__Sequence__are_equal(
    const aspn23_ros_interfaces__msg__MetadataImu__Sequence *lhs,
    const aspn23_ros_interfaces__msg__MetadataImu__Sequence *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aspn23_ros_interfaces__msg__MetadataImu__are_equal(&(lhs->data[i]),
                                                            &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool aspn23_ros_interfaces__msg__MetadataImu__Sequence__copy(
    const aspn23_ros_interfaces__msg__MetadataImu__Sequence *input,
    aspn23_ros_interfaces__msg__MetadataImu__Sequence *output) {
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
        input->size * sizeof(aspn23_ros_interfaces__msg__MetadataImu);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aspn23_ros_interfaces__msg__MetadataImu *data =
        (aspn23_ros_interfaces__msg__MetadataImu *)allocator.reallocate(
            output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aspn23_ros_interfaces__msg__MetadataImu__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity;) {
          aspn23_ros_interfaces__msg__MetadataImu__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aspn23_ros_interfaces__msg__MetadataImu__copy(&(input->data[i]),
                                                       &(output->data[i]))) {
      return false;
    }
  }
  return true;
}
