// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aspn23_ros_interfaces:msg/MetadataGpsMnavEphemeris.idl
// generated code does not contain a copyright notice
#include "aspn23_ros_interfaces/msg/detail/metadata_gps_mnav_ephemeris__functions.h"

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
// Member `clock`
#include "aspn23_ros_interfaces/msg/detail/type_satnav_clock__functions.h"
// Member `orbit`
#include "aspn23_ros_interfaces/msg/detail/type_kepler_orbit__functions.h"

bool aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__init(
    aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris *msg) {
  if (!msg) {
    return false;
  }
  // info
  if (!aspn23_ros_interfaces__msg__TypeMetadataheader__init(&msg->info)) {
    aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__fini(msg);
    return false;
  }
  // time_of_validity
  if (!aspn23_ros_interfaces__msg__TypeTimestamp__init(
          &msg->time_of_validity)) {
    aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__fini(msg);
    return false;
  }
  // week_number
  // prn
  // clock
  if (!aspn23_ros_interfaces__msg__TypeSatnavClock__init(&msg->clock)) {
    aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__fini(msg);
    return false;
  }
  // orbit
  if (!aspn23_ros_interfaces__msg__TypeKeplerOrbit__init(&msg->orbit)) {
    aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__fini(msg);
    return false;
  }
  // a_dot
  // delta_af_0
  // delta_af_1
  // delta_gamma
  // delta_i
  // delta_omega
  // delta_a
  // isc_l1_m_e
  // isc_l2_m_e
  // isc_l1_m_s
  // isc_l2_m_s
  // isa_l2_py
  // isa_l1_m_e
  // isa_l2_m_e
  // isa_l1_m_s
  // isa_l2_m_s
  return true;
}

void aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__fini(
    aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris *msg) {
  if (!msg) {
    return;
  }
  // info
  aspn23_ros_interfaces__msg__TypeMetadataheader__fini(&msg->info);
  // time_of_validity
  aspn23_ros_interfaces__msg__TypeTimestamp__fini(&msg->time_of_validity);
  // week_number
  // prn
  // clock
  aspn23_ros_interfaces__msg__TypeSatnavClock__fini(&msg->clock);
  // orbit
  aspn23_ros_interfaces__msg__TypeKeplerOrbit__fini(&msg->orbit);
  // a_dot
  // delta_af_0
  // delta_af_1
  // delta_gamma
  // delta_i
  // delta_omega
  // delta_a
  // isc_l1_m_e
  // isc_l2_m_e
  // isc_l1_m_s
  // isc_l2_m_s
  // isa_l2_py
  // isa_l1_m_e
  // isa_l2_m_e
  // isa_l1_m_s
  // isa_l2_m_s
}

bool aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__are_equal(
    const aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris *lhs,
    const aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris *rhs) {
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
  // week_number
  if (lhs->week_number != rhs->week_number) {
    return false;
  }
  // prn
  if (lhs->prn != rhs->prn) {
    return false;
  }
  // clock
  if (!aspn23_ros_interfaces__msg__TypeSatnavClock__are_equal(&(lhs->clock),
                                                              &(rhs->clock))) {
    return false;
  }
  // orbit
  if (!aspn23_ros_interfaces__msg__TypeKeplerOrbit__are_equal(&(lhs->orbit),
                                                              &(rhs->orbit))) {
    return false;
  }
  // a_dot
  if (lhs->a_dot != rhs->a_dot) {
    return false;
  }
  // delta_af_0
  if (lhs->delta_af_0 != rhs->delta_af_0) {
    return false;
  }
  // delta_af_1
  if (lhs->delta_af_1 != rhs->delta_af_1) {
    return false;
  }
  // delta_gamma
  if (lhs->delta_gamma != rhs->delta_gamma) {
    return false;
  }
  // delta_i
  if (lhs->delta_i != rhs->delta_i) {
    return false;
  }
  // delta_omega
  if (lhs->delta_omega != rhs->delta_omega) {
    return false;
  }
  // delta_a
  if (lhs->delta_a != rhs->delta_a) {
    return false;
  }
  // isc_l1_m_e
  if (lhs->isc_l1_m_e != rhs->isc_l1_m_e) {
    return false;
  }
  // isc_l2_m_e
  if (lhs->isc_l2_m_e != rhs->isc_l2_m_e) {
    return false;
  }
  // isc_l1_m_s
  if (lhs->isc_l1_m_s != rhs->isc_l1_m_s) {
    return false;
  }
  // isc_l2_m_s
  if (lhs->isc_l2_m_s != rhs->isc_l2_m_s) {
    return false;
  }
  // isa_l2_py
  if (lhs->isa_l2_py != rhs->isa_l2_py) {
    return false;
  }
  // isa_l1_m_e
  if (lhs->isa_l1_m_e != rhs->isa_l1_m_e) {
    return false;
  }
  // isa_l2_m_e
  if (lhs->isa_l2_m_e != rhs->isa_l2_m_e) {
    return false;
  }
  // isa_l1_m_s
  if (lhs->isa_l1_m_s != rhs->isa_l1_m_s) {
    return false;
  }
  // isa_l2_m_s
  if (lhs->isa_l2_m_s != rhs->isa_l2_m_s) {
    return false;
  }
  return true;
}

bool aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__copy(
    const aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris *input,
    aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris *output) {
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
  // week_number
  output->week_number = input->week_number;
  // prn
  output->prn = input->prn;
  // clock
  if (!aspn23_ros_interfaces__msg__TypeSatnavClock__copy(&(input->clock),
                                                         &(output->clock))) {
    return false;
  }
  // orbit
  if (!aspn23_ros_interfaces__msg__TypeKeplerOrbit__copy(&(input->orbit),
                                                         &(output->orbit))) {
    return false;
  }
  // a_dot
  output->a_dot = input->a_dot;
  // delta_af_0
  output->delta_af_0 = input->delta_af_0;
  // delta_af_1
  output->delta_af_1 = input->delta_af_1;
  // delta_gamma
  output->delta_gamma = input->delta_gamma;
  // delta_i
  output->delta_i = input->delta_i;
  // delta_omega
  output->delta_omega = input->delta_omega;
  // delta_a
  output->delta_a = input->delta_a;
  // isc_l1_m_e
  output->isc_l1_m_e = input->isc_l1_m_e;
  // isc_l2_m_e
  output->isc_l2_m_e = input->isc_l2_m_e;
  // isc_l1_m_s
  output->isc_l1_m_s = input->isc_l1_m_s;
  // isc_l2_m_s
  output->isc_l2_m_s = input->isc_l2_m_s;
  // isa_l2_py
  output->isa_l2_py = input->isa_l2_py;
  // isa_l1_m_e
  output->isa_l1_m_e = input->isa_l1_m_e;
  // isa_l2_m_e
  output->isa_l2_m_e = input->isa_l2_m_e;
  // isa_l1_m_s
  output->isa_l1_m_s = input->isa_l1_m_s;
  // isa_l2_m_s
  output->isa_l2_m_s = input->isa_l2_m_s;
  return true;
}

aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris *
aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__create(void) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris *msg =
      (aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris *)
          allocator.allocate(
              sizeof(aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris),
              allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris));
  bool success =
      aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__destroy(
    aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris *msg) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}

bool aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__Sequence__init(
    aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__Sequence *array,
    size_t size) {
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris *data = NULL;

  if (size) {
    data = (aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris *)
               allocator.zero_allocate(
                   size,
                   sizeof(aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris),
                   allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success =
          aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array
      // elements
      for (; i > 0; --i) {
        aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__fini(
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

void aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__Sequence__fini(
    aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__Sequence *array) {
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__fini(
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

aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__Sequence *
aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__Sequence__create(
    size_t size) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__Sequence *array =
      (aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__Sequence *)
          allocator.allocate(
              sizeof(
                  aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__Sequence),
              allocator.state);
  if (!array) {
    return NULL;
  }
  bool success =
      aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__Sequence__init(
          array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__Sequence__destroy(
    aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__Sequence *array) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__Sequence__are_equal(
    const aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__Sequence *lhs,
    const aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__Sequence *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__are_equal(
            &(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__Sequence__copy(
    const aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__Sequence *input,
    aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__Sequence *output) {
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
        input->size *
        sizeof(aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris *data =
        (aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris *)allocator
            .reallocate(output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__init(
              &output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity;) {
          aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__fini(
              &output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__copy(
            &(input->data[i]), &(output->data[i]))) {
      return false;
    }
  }
  return true;
}
