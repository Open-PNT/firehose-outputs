// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aspn23_ros_interfaces:msg/TypeDirection3DToPoint.idl
// generated code does not contain a copyright notice
#include "aspn23_ros_interfaces/msg/detail/type_direction3_d_to_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `remote_point`
#include "aspn23_ros_interfaces/msg/detail/type_remote_point__functions.h"
// Member `observation_characteristics`
#include "aspn23_ros_interfaces/msg/detail/type_image_feature__functions.h"
// Member `error_model_params`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `integrity`
#include "aspn23_ros_interfaces/msg/detail/type_integrity__functions.h"

bool aspn23_ros_interfaces__msg__TypeDirection3DToPoint__init(
    aspn23_ros_interfaces__msg__TypeDirection3DToPoint *msg) {
  if (!msg) {
    return false;
  }
  // remote_point
  if (!aspn23_ros_interfaces__msg__TypeRemotePoint__init(&msg->remote_point)) {
    aspn23_ros_interfaces__msg__TypeDirection3DToPoint__fini(msg);
    return false;
  }
  // reference_frame
  // obs
  // covariance
  // has_observation_characteristics
  // observation_characteristics
  if (!aspn23_ros_interfaces__msg__TypeImageFeature__init(
          &msg->observation_characteristics)) {
    aspn23_ros_interfaces__msg__TypeDirection3DToPoint__fini(msg);
    return false;
  }
  // error_model
  // num_error_model_params
  // error_model_params
  if (!rosidl_runtime_c__double__Sequence__init(&msg->error_model_params, 0)) {
    aspn23_ros_interfaces__msg__TypeDirection3DToPoint__fini(msg);
    return false;
  }
  // num_integrity
  // integrity
  if (!aspn23_ros_interfaces__msg__TypeIntegrity__Sequence__init(
          &msg->integrity, 0)) {
    aspn23_ros_interfaces__msg__TypeDirection3DToPoint__fini(msg);
    return false;
  }
  return true;
}

void aspn23_ros_interfaces__msg__TypeDirection3DToPoint__fini(
    aspn23_ros_interfaces__msg__TypeDirection3DToPoint *msg) {
  if (!msg) {
    return;
  }
  // remote_point
  aspn23_ros_interfaces__msg__TypeRemotePoint__fini(&msg->remote_point);
  // reference_frame
  // obs
  // covariance
  // has_observation_characteristics
  // observation_characteristics
  aspn23_ros_interfaces__msg__TypeImageFeature__fini(
      &msg->observation_characteristics);
  // error_model
  // num_error_model_params
  // error_model_params
  rosidl_runtime_c__double__Sequence__fini(&msg->error_model_params);
  // num_integrity
  // integrity
  aspn23_ros_interfaces__msg__TypeIntegrity__Sequence__fini(&msg->integrity);
}

bool aspn23_ros_interfaces__msg__TypeDirection3DToPoint__are_equal(
    const aspn23_ros_interfaces__msg__TypeDirection3DToPoint *lhs,
    const aspn23_ros_interfaces__msg__TypeDirection3DToPoint *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  // remote_point
  if (!aspn23_ros_interfaces__msg__TypeRemotePoint__are_equal(
          &(lhs->remote_point), &(rhs->remote_point))) {
    return false;
  }
  // reference_frame
  if (lhs->reference_frame != rhs->reference_frame) {
    return false;
  }
  // obs
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->obs[i] != rhs->obs[i]) {
      return false;
    }
  }
  // covariance
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->covariance[i] != rhs->covariance[i]) {
      return false;
    }
  }
  // has_observation_characteristics
  if (lhs->has_observation_characteristics !=
      rhs->has_observation_characteristics) {
    return false;
  }
  // observation_characteristics
  if (!aspn23_ros_interfaces__msg__TypeImageFeature__are_equal(
          &(lhs->observation_characteristics),
          &(rhs->observation_characteristics))) {
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

bool aspn23_ros_interfaces__msg__TypeDirection3DToPoint__copy(
    const aspn23_ros_interfaces__msg__TypeDirection3DToPoint *input,
    aspn23_ros_interfaces__msg__TypeDirection3DToPoint *output) {
  if (!input || !output) {
    return false;
  }
  // remote_point
  if (!aspn23_ros_interfaces__msg__TypeRemotePoint__copy(
          &(input->remote_point), &(output->remote_point))) {
    return false;
  }
  // reference_frame
  output->reference_frame = input->reference_frame;
  // obs
  for (size_t i = 0; i < 2; ++i) {
    output->obs[i] = input->obs[i];
  }
  // covariance
  for (size_t i = 0; i < 4; ++i) {
    output->covariance[i] = input->covariance[i];
  }
  // has_observation_characteristics
  output->has_observation_characteristics =
      input->has_observation_characteristics;
  // observation_characteristics
  if (!aspn23_ros_interfaces__msg__TypeImageFeature__copy(
          &(input->observation_characteristics),
          &(output->observation_characteristics))) {
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

aspn23_ros_interfaces__msg__TypeDirection3DToPoint *
aspn23_ros_interfaces__msg__TypeDirection3DToPoint__create(void) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__TypeDirection3DToPoint *msg =
      (aspn23_ros_interfaces__msg__TypeDirection3DToPoint *)allocator.allocate(
          sizeof(aspn23_ros_interfaces__msg__TypeDirection3DToPoint),
          allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aspn23_ros_interfaces__msg__TypeDirection3DToPoint));
  bool success = aspn23_ros_interfaces__msg__TypeDirection3DToPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void aspn23_ros_interfaces__msg__TypeDirection3DToPoint__destroy(
    aspn23_ros_interfaces__msg__TypeDirection3DToPoint *msg) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aspn23_ros_interfaces__msg__TypeDirection3DToPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}

bool aspn23_ros_interfaces__msg__TypeDirection3DToPoint__Sequence__init(
    aspn23_ros_interfaces__msg__TypeDirection3DToPoint__Sequence *array,
    size_t size) {
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__TypeDirection3DToPoint *data = NULL;

  if (size) {
    data = (aspn23_ros_interfaces__msg__TypeDirection3DToPoint *)
               allocator.zero_allocate(
                   size,
                   sizeof(aspn23_ros_interfaces__msg__TypeDirection3DToPoint),
                   allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success =
          aspn23_ros_interfaces__msg__TypeDirection3DToPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array
      // elements
      for (; i > 0; --i) {
        aspn23_ros_interfaces__msg__TypeDirection3DToPoint__fini(&data[i - 1]);
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

void aspn23_ros_interfaces__msg__TypeDirection3DToPoint__Sequence__fini(
    aspn23_ros_interfaces__msg__TypeDirection3DToPoint__Sequence *array) {
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aspn23_ros_interfaces__msg__TypeDirection3DToPoint__fini(&array->data[i]);
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

aspn23_ros_interfaces__msg__TypeDirection3DToPoint__Sequence *
aspn23_ros_interfaces__msg__TypeDirection3DToPoint__Sequence__create(
    size_t size) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__TypeDirection3DToPoint__Sequence *array =
      (aspn23_ros_interfaces__msg__TypeDirection3DToPoint__Sequence *)
          allocator.allocate(
              sizeof(
                  aspn23_ros_interfaces__msg__TypeDirection3DToPoint__Sequence),
              allocator.state);
  if (!array) {
    return NULL;
  }
  bool success =
      aspn23_ros_interfaces__msg__TypeDirection3DToPoint__Sequence__init(array,
                                                                         size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void aspn23_ros_interfaces__msg__TypeDirection3DToPoint__Sequence__destroy(
    aspn23_ros_interfaces__msg__TypeDirection3DToPoint__Sequence *array) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aspn23_ros_interfaces__msg__TypeDirection3DToPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool aspn23_ros_interfaces__msg__TypeDirection3DToPoint__Sequence__are_equal(
    const aspn23_ros_interfaces__msg__TypeDirection3DToPoint__Sequence *lhs,
    const aspn23_ros_interfaces__msg__TypeDirection3DToPoint__Sequence *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aspn23_ros_interfaces__msg__TypeDirection3DToPoint__are_equal(
            &(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool aspn23_ros_interfaces__msg__TypeDirection3DToPoint__Sequence__copy(
    const aspn23_ros_interfaces__msg__TypeDirection3DToPoint__Sequence *input,
    aspn23_ros_interfaces__msg__TypeDirection3DToPoint__Sequence *output) {
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
        input->size *
        sizeof(aspn23_ros_interfaces__msg__TypeDirection3DToPoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aspn23_ros_interfaces__msg__TypeDirection3DToPoint *data =
        (aspn23_ros_interfaces__msg__TypeDirection3DToPoint *)allocator
            .reallocate(output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aspn23_ros_interfaces__msg__TypeDirection3DToPoint__init(
              &output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity;) {
          aspn23_ros_interfaces__msg__TypeDirection3DToPoint__fini(
              &output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aspn23_ros_interfaces__msg__TypeDirection3DToPoint__copy(
            &(input->data[i]), &(output->data[i]))) {
      return false;
    }
  }
  return true;
}
