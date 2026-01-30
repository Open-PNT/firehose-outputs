// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aspn23_ros_interfaces:msg/MetadataGalileoEphemeris.idl
// generated code does not contain a copyright notice
#include "aspn23_ros_interfaces/msg/detail/metadata_galileo_ephemeris__functions.h"

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

bool aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__init(
    aspn23_ros_interfaces__msg__MetadataGalileoEphemeris *msg) {
  if (!msg) {
    return false;
  }
  // info
  if (!aspn23_ros_interfaces__msg__TypeMetadataheader__init(&msg->info)) {
    aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__fini(msg);
    return false;
  }
  // time_of_validity
  if (!aspn23_ros_interfaces__msg__TypeTimestamp__init(
          &msg->time_of_validity)) {
    aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__fini(msg);
    return false;
  }
  // nav_msg_type
  // prn
  // clock
  if (!aspn23_ros_interfaces__msg__TypeSatnavClock__init(&msg->clock)) {
    aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__fini(msg);
    return false;
  }
  // orbit
  if (!aspn23_ros_interfaces__msg__TypeKeplerOrbit__init(&msg->orbit)) {
    aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__fini(msg);
    return false;
  }
  // bgd
  return true;
}

void aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__fini(
    aspn23_ros_interfaces__msg__MetadataGalileoEphemeris *msg) {
  if (!msg) {
    return;
  }
  // info
  aspn23_ros_interfaces__msg__TypeMetadataheader__fini(&msg->info);
  // time_of_validity
  aspn23_ros_interfaces__msg__TypeTimestamp__fini(&msg->time_of_validity);
  // nav_msg_type
  // prn
  // clock
  aspn23_ros_interfaces__msg__TypeSatnavClock__fini(&msg->clock);
  // orbit
  aspn23_ros_interfaces__msg__TypeKeplerOrbit__fini(&msg->orbit);
  // bgd
}

bool aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__are_equal(
    const aspn23_ros_interfaces__msg__MetadataGalileoEphemeris *lhs,
    const aspn23_ros_interfaces__msg__MetadataGalileoEphemeris *rhs) {
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
  // nav_msg_type
  if (lhs->nav_msg_type != rhs->nav_msg_type) {
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
  // bgd
  if (lhs->bgd != rhs->bgd) {
    return false;
  }
  return true;
}

bool aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__copy(
    const aspn23_ros_interfaces__msg__MetadataGalileoEphemeris *input,
    aspn23_ros_interfaces__msg__MetadataGalileoEphemeris *output) {
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
  // nav_msg_type
  output->nav_msg_type = input->nav_msg_type;
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
  // bgd
  output->bgd = input->bgd;
  return true;
}

aspn23_ros_interfaces__msg__MetadataGalileoEphemeris *
aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__create(void) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__MetadataGalileoEphemeris *msg =
      (aspn23_ros_interfaces__msg__MetadataGalileoEphemeris *)
          allocator.allocate(
              sizeof(aspn23_ros_interfaces__msg__MetadataGalileoEphemeris),
              allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aspn23_ros_interfaces__msg__MetadataGalileoEphemeris));
  bool success =
      aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__destroy(
    aspn23_ros_interfaces__msg__MetadataGalileoEphemeris *msg) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}

bool aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__Sequence__init(
    aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__Sequence *array,
    size_t size) {
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__MetadataGalileoEphemeris *data = NULL;

  if (size) {
    data = (aspn23_ros_interfaces__msg__MetadataGalileoEphemeris *)
               allocator.zero_allocate(
                   size,
                   sizeof(aspn23_ros_interfaces__msg__MetadataGalileoEphemeris),
                   allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success =
          aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array
      // elements
      for (; i > 0; --i) {
        aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__fini(
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

void aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__Sequence__fini(
    aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__Sequence *array) {
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__fini(
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

aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__Sequence *
aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__Sequence__create(
    size_t size) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__Sequence *array =
      (aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__Sequence *)
          allocator.allocate(
              sizeof(
                  aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__Sequence),
              allocator.state);
  if (!array) {
    return NULL;
  }
  bool success =
      aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__Sequence__init(
          array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__Sequence__destroy(
    aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__Sequence *array) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__Sequence__are_equal(
    const aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__Sequence *lhs,
    const aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__Sequence *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__are_equal(
            &(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__Sequence__copy(
    const aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__Sequence *input,
    aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__Sequence *output) {
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
        input->size *
        sizeof(aspn23_ros_interfaces__msg__MetadataGalileoEphemeris);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aspn23_ros_interfaces__msg__MetadataGalileoEphemeris *data =
        (aspn23_ros_interfaces__msg__MetadataGalileoEphemeris *)allocator
            .reallocate(output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__init(
              &output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity;) {
          aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__fini(
              &output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__copy(
            &(input->data[i]), &(output->data[i]))) {
      return false;
    }
  }
  return true;
}
