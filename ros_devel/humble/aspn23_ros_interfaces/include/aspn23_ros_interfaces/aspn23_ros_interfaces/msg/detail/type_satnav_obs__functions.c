// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aspn23_ros_interfaces:msg/TypeSatnavObs.idl
// generated code does not contain a copyright notice
#include "aspn23_ros_interfaces/msg/detail/type_satnav_obs__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `satellite_system`
#include "aspn23_ros_interfaces/msg/detail/type_satnav_satellite_system__functions.h"
// Member `signal_descriptor`
#include "aspn23_ros_interfaces/msg/detail/type_satnav_signal_descriptor__functions.h"
// Member `integrity`
#include "aspn23_ros_interfaces/msg/detail/type_integrity__functions.h"

bool aspn23_ros_interfaces__msg__TypeSatnavObs__init(
    aspn23_ros_interfaces__msg__TypeSatnavObs *msg) {
  if (!msg) {
    return false;
  }
  // satellite_system
  if (!aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__init(
          &msg->satellite_system)) {
    aspn23_ros_interfaces__msg__TypeSatnavObs__fini(msg);
    return false;
  }
  // signal_descriptor
  if (!aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__init(
          &msg->signal_descriptor)) {
    aspn23_ros_interfaces__msg__TypeSatnavObs__fini(msg);
    return false;
  }
  // prn
  // frequency
  // pseudorange
  // pseudorange_variance
  // pseudorange_rate_type
  // pseudorange_rate
  // pseudorange_rate_variance
  // carrier_phase
  // carrier_phase_variance
  // c_n0
  // lock_count
  // iono_correction_source
  // iono_correction_applied
  // tropo_correction_applied
  // signal_bias_correction_applied
  // num_integrity
  // integrity
  if (!aspn23_ros_interfaces__msg__TypeIntegrity__Sequence__init(
          &msg->integrity, 0)) {
    aspn23_ros_interfaces__msg__TypeSatnavObs__fini(msg);
    return false;
  }
  return true;
}

void aspn23_ros_interfaces__msg__TypeSatnavObs__fini(
    aspn23_ros_interfaces__msg__TypeSatnavObs *msg) {
  if (!msg) {
    return;
  }
  // satellite_system
  aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__fini(
      &msg->satellite_system);
  // signal_descriptor
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__fini(
      &msg->signal_descriptor);
  // prn
  // frequency
  // pseudorange
  // pseudorange_variance
  // pseudorange_rate_type
  // pseudorange_rate
  // pseudorange_rate_variance
  // carrier_phase
  // carrier_phase_variance
  // c_n0
  // lock_count
  // iono_correction_source
  // iono_correction_applied
  // tropo_correction_applied
  // signal_bias_correction_applied
  // num_integrity
  // integrity
  aspn23_ros_interfaces__msg__TypeIntegrity__Sequence__fini(&msg->integrity);
}

bool aspn23_ros_interfaces__msg__TypeSatnavObs__are_equal(
    const aspn23_ros_interfaces__msg__TypeSatnavObs *lhs,
    const aspn23_ros_interfaces__msg__TypeSatnavObs *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  // satellite_system
  if (!aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__are_equal(
          &(lhs->satellite_system), &(rhs->satellite_system))) {
    return false;
  }
  // signal_descriptor
  if (!aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__are_equal(
          &(lhs->signal_descriptor), &(rhs->signal_descriptor))) {
    return false;
  }
  // prn
  if (lhs->prn != rhs->prn) {
    return false;
  }
  // frequency
  if (lhs->frequency != rhs->frequency) {
    return false;
  }
  // pseudorange
  if (lhs->pseudorange != rhs->pseudorange) {
    return false;
  }
  // pseudorange_variance
  if (lhs->pseudorange_variance != rhs->pseudorange_variance) {
    return false;
  }
  // pseudorange_rate_type
  if (lhs->pseudorange_rate_type != rhs->pseudorange_rate_type) {
    return false;
  }
  // pseudorange_rate
  if (lhs->pseudorange_rate != rhs->pseudorange_rate) {
    return false;
  }
  // pseudorange_rate_variance
  if (lhs->pseudorange_rate_variance != rhs->pseudorange_rate_variance) {
    return false;
  }
  // carrier_phase
  if (lhs->carrier_phase != rhs->carrier_phase) {
    return false;
  }
  // carrier_phase_variance
  if (lhs->carrier_phase_variance != rhs->carrier_phase_variance) {
    return false;
  }
  // c_n0
  if (lhs->c_n0 != rhs->c_n0) {
    return false;
  }
  // lock_count
  if (lhs->lock_count != rhs->lock_count) {
    return false;
  }
  // iono_correction_source
  if (lhs->iono_correction_source != rhs->iono_correction_source) {
    return false;
  }
  // iono_correction_applied
  if (lhs->iono_correction_applied != rhs->iono_correction_applied) {
    return false;
  }
  // tropo_correction_applied
  if (lhs->tropo_correction_applied != rhs->tropo_correction_applied) {
    return false;
  }
  // signal_bias_correction_applied
  if (lhs->signal_bias_correction_applied !=
      rhs->signal_bias_correction_applied) {
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

bool aspn23_ros_interfaces__msg__TypeSatnavObs__copy(
    const aspn23_ros_interfaces__msg__TypeSatnavObs *input,
    aspn23_ros_interfaces__msg__TypeSatnavObs *output) {
  if (!input || !output) {
    return false;
  }
  // satellite_system
  if (!aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__copy(
          &(input->satellite_system), &(output->satellite_system))) {
    return false;
  }
  // signal_descriptor
  if (!aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__copy(
          &(input->signal_descriptor), &(output->signal_descriptor))) {
    return false;
  }
  // prn
  output->prn = input->prn;
  // frequency
  output->frequency = input->frequency;
  // pseudorange
  output->pseudorange = input->pseudorange;
  // pseudorange_variance
  output->pseudorange_variance = input->pseudorange_variance;
  // pseudorange_rate_type
  output->pseudorange_rate_type = input->pseudorange_rate_type;
  // pseudorange_rate
  output->pseudorange_rate = input->pseudorange_rate;
  // pseudorange_rate_variance
  output->pseudorange_rate_variance = input->pseudorange_rate_variance;
  // carrier_phase
  output->carrier_phase = input->carrier_phase;
  // carrier_phase_variance
  output->carrier_phase_variance = input->carrier_phase_variance;
  // c_n0
  output->c_n0 = input->c_n0;
  // lock_count
  output->lock_count = input->lock_count;
  // iono_correction_source
  output->iono_correction_source = input->iono_correction_source;
  // iono_correction_applied
  output->iono_correction_applied = input->iono_correction_applied;
  // tropo_correction_applied
  output->tropo_correction_applied = input->tropo_correction_applied;
  // signal_bias_correction_applied
  output->signal_bias_correction_applied =
      input->signal_bias_correction_applied;
  // num_integrity
  output->num_integrity = input->num_integrity;
  // integrity
  if (!aspn23_ros_interfaces__msg__TypeIntegrity__Sequence__copy(
          &(input->integrity), &(output->integrity))) {
    return false;
  }
  return true;
}

aspn23_ros_interfaces__msg__TypeSatnavObs *
aspn23_ros_interfaces__msg__TypeSatnavObs__create() {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__TypeSatnavObs *msg =
      (aspn23_ros_interfaces__msg__TypeSatnavObs *)allocator.allocate(
          sizeof(aspn23_ros_interfaces__msg__TypeSatnavObs), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aspn23_ros_interfaces__msg__TypeSatnavObs));
  bool success = aspn23_ros_interfaces__msg__TypeSatnavObs__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void aspn23_ros_interfaces__msg__TypeSatnavObs__destroy(
    aspn23_ros_interfaces__msg__TypeSatnavObs *msg) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aspn23_ros_interfaces__msg__TypeSatnavObs__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}

bool aspn23_ros_interfaces__msg__TypeSatnavObs__Sequence__init(
    aspn23_ros_interfaces__msg__TypeSatnavObs__Sequence *array, size_t size) {
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__TypeSatnavObs *data = NULL;

  if (size) {
    data = (aspn23_ros_interfaces__msg__TypeSatnavObs *)allocator.zero_allocate(
        size, sizeof(aspn23_ros_interfaces__msg__TypeSatnavObs),
        allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aspn23_ros_interfaces__msg__TypeSatnavObs__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array
      // elements
      for (; i > 0; --i) {
        aspn23_ros_interfaces__msg__TypeSatnavObs__fini(&data[i - 1]);
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

void aspn23_ros_interfaces__msg__TypeSatnavObs__Sequence__fini(
    aspn23_ros_interfaces__msg__TypeSatnavObs__Sequence *array) {
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aspn23_ros_interfaces__msg__TypeSatnavObs__fini(&array->data[i]);
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

aspn23_ros_interfaces__msg__TypeSatnavObs__Sequence *
aspn23_ros_interfaces__msg__TypeSatnavObs__Sequence__create(size_t size) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__TypeSatnavObs__Sequence *array =
      (aspn23_ros_interfaces__msg__TypeSatnavObs__Sequence *)allocator.allocate(
          sizeof(aspn23_ros_interfaces__msg__TypeSatnavObs__Sequence),
          allocator.state);
  if (!array) {
    return NULL;
  }
  bool success =
      aspn23_ros_interfaces__msg__TypeSatnavObs__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void aspn23_ros_interfaces__msg__TypeSatnavObs__Sequence__destroy(
    aspn23_ros_interfaces__msg__TypeSatnavObs__Sequence *array) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aspn23_ros_interfaces__msg__TypeSatnavObs__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool aspn23_ros_interfaces__msg__TypeSatnavObs__Sequence__are_equal(
    const aspn23_ros_interfaces__msg__TypeSatnavObs__Sequence *lhs,
    const aspn23_ros_interfaces__msg__TypeSatnavObs__Sequence *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aspn23_ros_interfaces__msg__TypeSatnavObs__are_equal(
            &(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool aspn23_ros_interfaces__msg__TypeSatnavObs__Sequence__copy(
    const aspn23_ros_interfaces__msg__TypeSatnavObs__Sequence *input,
    aspn23_ros_interfaces__msg__TypeSatnavObs__Sequence *output) {
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
        input->size * sizeof(aspn23_ros_interfaces__msg__TypeSatnavObs);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aspn23_ros_interfaces__msg__TypeSatnavObs *data =
        (aspn23_ros_interfaces__msg__TypeSatnavObs *)allocator.reallocate(
            output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aspn23_ros_interfaces__msg__TypeSatnavObs__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity;) {
          aspn23_ros_interfaces__msg__TypeSatnavObs__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aspn23_ros_interfaces__msg__TypeSatnavObs__copy(&(input->data[i]),
                                                         &(output->data[i]))) {
      return false;
    }
  }
  return true;
}
