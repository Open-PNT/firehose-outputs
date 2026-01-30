// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aspn23_ros_interfaces:msg/MeasurementImage.idl
// generated code does not contain a copyright notice
#include "aspn23_ros_interfaces/msg/detail/measurement_image__functions.h"

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
// Member `image_data`
// Member `model_coefficients`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `integrity`
#include "aspn23_ros_interfaces/msg/detail/type_integrity__functions.h"

bool aspn23_ros_interfaces__msg__MeasurementImage__init(
    aspn23_ros_interfaces__msg__MeasurementImage *msg) {
  if (!msg) {
    return false;
  }
  // header
  if (!aspn23_ros_interfaces__msg__TypeHeader__init(&msg->header)) {
    aspn23_ros_interfaces__msg__MeasurementImage__fini(msg);
    return false;
  }
  // time_of_validity
  if (!aspn23_ros_interfaces__msg__TypeTimestamp__init(
          &msg->time_of_validity)) {
    aspn23_ros_interfaces__msg__MeasurementImage__fini(msg);
    return false;
  }
  // height
  // width
  // is_bigendian
  // image_type
  // image_data_length
  // image_data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->image_data, 0)) {
    aspn23_ros_interfaces__msg__MeasurementImage__fini(msg);
    return false;
  }
  // camera_model
  // num_model_coefficients
  // model_coefficients
  if (!rosidl_runtime_c__double__Sequence__init(&msg->model_coefficients, 0)) {
    aspn23_ros_interfaces__msg__MeasurementImage__fini(msg);
    return false;
  }
  // num_integrity
  // integrity
  if (!aspn23_ros_interfaces__msg__TypeIntegrity__Sequence__init(
          &msg->integrity, 0)) {
    aspn23_ros_interfaces__msg__MeasurementImage__fini(msg);
    return false;
  }
  return true;
}

void aspn23_ros_interfaces__msg__MeasurementImage__fini(
    aspn23_ros_interfaces__msg__MeasurementImage *msg) {
  if (!msg) {
    return;
  }
  // header
  aspn23_ros_interfaces__msg__TypeHeader__fini(&msg->header);
  // time_of_validity
  aspn23_ros_interfaces__msg__TypeTimestamp__fini(&msg->time_of_validity);
  // height
  // width
  // is_bigendian
  // image_type
  // image_data_length
  // image_data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->image_data);
  // camera_model
  // num_model_coefficients
  // model_coefficients
  rosidl_runtime_c__double__Sequence__fini(&msg->model_coefficients);
  // num_integrity
  // integrity
  aspn23_ros_interfaces__msg__TypeIntegrity__Sequence__fini(&msg->integrity);
}

bool aspn23_ros_interfaces__msg__MeasurementImage__are_equal(
    const aspn23_ros_interfaces__msg__MeasurementImage *lhs,
    const aspn23_ros_interfaces__msg__MeasurementImage *rhs) {
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
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // is_bigendian
  if (lhs->is_bigendian != rhs->is_bigendian) {
    return false;
  }
  // image_type
  if (lhs->image_type != rhs->image_type) {
    return false;
  }
  // image_data_length
  if (lhs->image_data_length != rhs->image_data_length) {
    return false;
  }
  // image_data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(&(lhs->image_data),
                                                    &(rhs->image_data))) {
    return false;
  }
  // camera_model
  if (lhs->camera_model != rhs->camera_model) {
    return false;
  }
  // num_model_coefficients
  if (lhs->num_model_coefficients != rhs->num_model_coefficients) {
    return false;
  }
  // model_coefficients
  if (!rosidl_runtime_c__double__Sequence__are_equal(
          &(lhs->model_coefficients), &(rhs->model_coefficients))) {
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

bool aspn23_ros_interfaces__msg__MeasurementImage__copy(
    const aspn23_ros_interfaces__msg__MeasurementImage *input,
    aspn23_ros_interfaces__msg__MeasurementImage *output) {
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
  // height
  output->height = input->height;
  // width
  output->width = input->width;
  // is_bigendian
  output->is_bigendian = input->is_bigendian;
  // image_type
  output->image_type = input->image_type;
  // image_data_length
  output->image_data_length = input->image_data_length;
  // image_data
  if (!rosidl_runtime_c__uint8__Sequence__copy(&(input->image_data),
                                               &(output->image_data))) {
    return false;
  }
  // camera_model
  output->camera_model = input->camera_model;
  // num_model_coefficients
  output->num_model_coefficients = input->num_model_coefficients;
  // model_coefficients
  if (!rosidl_runtime_c__double__Sequence__copy(
          &(input->model_coefficients), &(output->model_coefficients))) {
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

aspn23_ros_interfaces__msg__MeasurementImage *
aspn23_ros_interfaces__msg__MeasurementImage__create(void) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__MeasurementImage *msg =
      (aspn23_ros_interfaces__msg__MeasurementImage *)allocator.allocate(
          sizeof(aspn23_ros_interfaces__msg__MeasurementImage),
          allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aspn23_ros_interfaces__msg__MeasurementImage));
  bool success = aspn23_ros_interfaces__msg__MeasurementImage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void aspn23_ros_interfaces__msg__MeasurementImage__destroy(
    aspn23_ros_interfaces__msg__MeasurementImage *msg) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aspn23_ros_interfaces__msg__MeasurementImage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}

bool aspn23_ros_interfaces__msg__MeasurementImage__Sequence__init(
    aspn23_ros_interfaces__msg__MeasurementImage__Sequence *array,
    size_t size) {
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__MeasurementImage *data = NULL;

  if (size) {
    data =
        (aspn23_ros_interfaces__msg__MeasurementImage *)allocator.zero_allocate(
            size, sizeof(aspn23_ros_interfaces__msg__MeasurementImage),
            allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success =
          aspn23_ros_interfaces__msg__MeasurementImage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array
      // elements
      for (; i > 0; --i) {
        aspn23_ros_interfaces__msg__MeasurementImage__fini(&data[i - 1]);
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

void aspn23_ros_interfaces__msg__MeasurementImage__Sequence__fini(
    aspn23_ros_interfaces__msg__MeasurementImage__Sequence *array) {
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aspn23_ros_interfaces__msg__MeasurementImage__fini(&array->data[i]);
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

aspn23_ros_interfaces__msg__MeasurementImage__Sequence *
aspn23_ros_interfaces__msg__MeasurementImage__Sequence__create(size_t size) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__MeasurementImage__Sequence *array =
      (aspn23_ros_interfaces__msg__MeasurementImage__Sequence *)
          allocator.allocate(
              sizeof(aspn23_ros_interfaces__msg__MeasurementImage__Sequence),
              allocator.state);
  if (!array) {
    return NULL;
  }
  bool success =
      aspn23_ros_interfaces__msg__MeasurementImage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void aspn23_ros_interfaces__msg__MeasurementImage__Sequence__destroy(
    aspn23_ros_interfaces__msg__MeasurementImage__Sequence *array) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aspn23_ros_interfaces__msg__MeasurementImage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool aspn23_ros_interfaces__msg__MeasurementImage__Sequence__are_equal(
    const aspn23_ros_interfaces__msg__MeasurementImage__Sequence *lhs,
    const aspn23_ros_interfaces__msg__MeasurementImage__Sequence *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aspn23_ros_interfaces__msg__MeasurementImage__are_equal(
            &(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool aspn23_ros_interfaces__msg__MeasurementImage__Sequence__copy(
    const aspn23_ros_interfaces__msg__MeasurementImage__Sequence *input,
    aspn23_ros_interfaces__msg__MeasurementImage__Sequence *output) {
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
        input->size * sizeof(aspn23_ros_interfaces__msg__MeasurementImage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aspn23_ros_interfaces__msg__MeasurementImage *data =
        (aspn23_ros_interfaces__msg__MeasurementImage *)allocator.reallocate(
            output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aspn23_ros_interfaces__msg__MeasurementImage__init(
              &output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity;) {
          aspn23_ros_interfaces__msg__MeasurementImage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aspn23_ros_interfaces__msg__MeasurementImage__copy(
            &(input->data[i]), &(output->data[i]))) {
      return false;
    }
  }
  return true;
}
