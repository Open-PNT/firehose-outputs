// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aspn23_ros_interfaces:msg/MeasurementSatnavSubframe.idl
// generated code does not contain a copyright notice
#include "aspn23_ros_interfaces/msg/detail/measurement_satnav_subframe__functions.h"

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
// Member `satellite_system`
#include "aspn23_ros_interfaces/msg/detail/type_satnav_satellite_system__functions.h"
// Member `data_vector`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `integrity`
#include "aspn23_ros_interfaces/msg/detail/type_integrity__functions.h"

bool aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__init(
    aspn23_ros_interfaces__msg__MeasurementSatnavSubframe *msg) {
  if (!msg) {
    return false;
  }
  // header
  if (!aspn23_ros_interfaces__msg__TypeHeader__init(&msg->header)) {
    aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__fini(msg);
    return false;
  }
  // time_of_validity
  if (!aspn23_ros_interfaces__msg__TypeTimestamp__init(
          &msg->time_of_validity)) {
    aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__fini(msg);
    return false;
  }
  // gnss_message_id
  // prn
  // satellite_system
  if (!aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__init(
          &msg->satellite_system)) {
    aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__fini(msg);
    return false;
  }
  // freq_slot_id
  // num_bytes
  // data_vector
  if (!rosidl_runtime_c__int8__Sequence__init(&msg->data_vector, 0)) {
    aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__fini(msg);
    return false;
  }
  // num_integrity
  // integrity
  if (!aspn23_ros_interfaces__msg__TypeIntegrity__Sequence__init(
          &msg->integrity, 0)) {
    aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__fini(msg);
    return false;
  }
  return true;
}

void aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__fini(
    aspn23_ros_interfaces__msg__MeasurementSatnavSubframe *msg) {
  if (!msg) {
    return;
  }
  // header
  aspn23_ros_interfaces__msg__TypeHeader__fini(&msg->header);
  // time_of_validity
  aspn23_ros_interfaces__msg__TypeTimestamp__fini(&msg->time_of_validity);
  // gnss_message_id
  // prn
  // satellite_system
  aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__fini(
      &msg->satellite_system);
  // freq_slot_id
  // num_bytes
  // data_vector
  rosidl_runtime_c__int8__Sequence__fini(&msg->data_vector);
  // num_integrity
  // integrity
  aspn23_ros_interfaces__msg__TypeIntegrity__Sequence__fini(&msg->integrity);
}

bool aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__are_equal(
    const aspn23_ros_interfaces__msg__MeasurementSatnavSubframe *lhs,
    const aspn23_ros_interfaces__msg__MeasurementSatnavSubframe *rhs) {
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
  // gnss_message_id
  if (lhs->gnss_message_id != rhs->gnss_message_id) {
    return false;
  }
  // prn
  if (lhs->prn != rhs->prn) {
    return false;
  }
  // satellite_system
  if (!aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__are_equal(
          &(lhs->satellite_system), &(rhs->satellite_system))) {
    return false;
  }
  // freq_slot_id
  if (lhs->freq_slot_id != rhs->freq_slot_id) {
    return false;
  }
  // num_bytes
  if (lhs->num_bytes != rhs->num_bytes) {
    return false;
  }
  // data_vector
  if (!rosidl_runtime_c__int8__Sequence__are_equal(&(lhs->data_vector),
                                                   &(rhs->data_vector))) {
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

bool aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__copy(
    const aspn23_ros_interfaces__msg__MeasurementSatnavSubframe *input,
    aspn23_ros_interfaces__msg__MeasurementSatnavSubframe *output) {
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
  // gnss_message_id
  output->gnss_message_id = input->gnss_message_id;
  // prn
  output->prn = input->prn;
  // satellite_system
  if (!aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__copy(
          &(input->satellite_system), &(output->satellite_system))) {
    return false;
  }
  // freq_slot_id
  output->freq_slot_id = input->freq_slot_id;
  // num_bytes
  output->num_bytes = input->num_bytes;
  // data_vector
  if (!rosidl_runtime_c__int8__Sequence__copy(&(input->data_vector),
                                              &(output->data_vector))) {
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

aspn23_ros_interfaces__msg__MeasurementSatnavSubframe *
aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__create() {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__MeasurementSatnavSubframe *msg =
      (aspn23_ros_interfaces__msg__MeasurementSatnavSubframe *)
          allocator.allocate(
              sizeof(aspn23_ros_interfaces__msg__MeasurementSatnavSubframe),
              allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aspn23_ros_interfaces__msg__MeasurementSatnavSubframe));
  bool success =
      aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__destroy(
    aspn23_ros_interfaces__msg__MeasurementSatnavSubframe *msg) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}

bool aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__Sequence__init(
    aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__Sequence *array,
    size_t size) {
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__MeasurementSatnavSubframe *data = NULL;

  if (size) {
    data =
        (aspn23_ros_interfaces__msg__MeasurementSatnavSubframe *)
            allocator.zero_allocate(
                size,
                sizeof(aspn23_ros_interfaces__msg__MeasurementSatnavSubframe),
                allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success =
          aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array
      // elements
      for (; i > 0; --i) {
        aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__fini(
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

void aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__Sequence__fini(
    aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__Sequence *array) {
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__fini(
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

aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__Sequence *
aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__Sequence__create(
    size_t size) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__Sequence *array =
      (aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__Sequence *)
          allocator.allocate(
              sizeof(
                  aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__Sequence),
              allocator.state);
  if (!array) {
    return NULL;
  }
  bool success =
      aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__Sequence__init(
          array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__Sequence__destroy(
    aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__Sequence *array) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__Sequence__fini(
        array);
  }
  allocator.deallocate(array, allocator.state);
}

bool aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__Sequence__are_equal(
    const aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__Sequence *lhs,
    const aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__Sequence
        *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__are_equal(
            &(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__Sequence__copy(
    const aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__Sequence
        *input,
    aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__Sequence *output) {
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
        input->size *
        sizeof(aspn23_ros_interfaces__msg__MeasurementSatnavSubframe);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aspn23_ros_interfaces__msg__MeasurementSatnavSubframe *data =
        (aspn23_ros_interfaces__msg__MeasurementSatnavSubframe *)allocator
            .reallocate(output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__init(
              &output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity;) {
          aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__fini(
              &output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__copy(
            &(input->data[i]), &(output->data[i]))) {
      return false;
    }
  }
  return true;
}
