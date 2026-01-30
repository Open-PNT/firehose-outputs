// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aspn23_ros_interfaces:msg/TypeSatnavSvData.idl
// generated code does not contain a copyright notice
#include "aspn23_ros_interfaces/msg/detail/type_satnav_sv_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `satellite_system`
#include "aspn23_ros_interfaces/msg/detail/type_satnav_satellite_system__functions.h"
// Member `sv_data_time`
#include "aspn23_ros_interfaces/msg/detail/type_satnav_time__functions.h"

bool aspn23_ros_interfaces__msg__TypeSatnavSvData__init(
    aspn23_ros_interfaces__msg__TypeSatnavSvData *msg) {
  if (!msg) {
    return false;
  }
  // prn
  // satellite_system
  if (!aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__init(
          &msg->satellite_system)) {
    aspn23_ros_interfaces__msg__TypeSatnavSvData__fini(msg);
    return false;
  }
  // ephemeris_type
  // sv_data_time
  if (!aspn23_ros_interfaces__msg__TypeSatnavTime__init(&msg->sv_data_time)) {
    aspn23_ros_interfaces__msg__TypeSatnavSvData__fini(msg);
    return false;
  }
  // coordinate_frame
  // sv_pos
  // sv_vel
  // sv_clock_bias
  // sv_clock_drift
  // group_delay_enum
  // group_delay_vector
  return true;
}

void aspn23_ros_interfaces__msg__TypeSatnavSvData__fini(
    aspn23_ros_interfaces__msg__TypeSatnavSvData *msg) {
  if (!msg) {
    return;
  }
  // prn
  // satellite_system
  aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__fini(
      &msg->satellite_system);
  // ephemeris_type
  // sv_data_time
  aspn23_ros_interfaces__msg__TypeSatnavTime__fini(&msg->sv_data_time);
  // coordinate_frame
  // sv_pos
  // sv_vel
  // sv_clock_bias
  // sv_clock_drift
  // group_delay_enum
  // group_delay_vector
}

bool aspn23_ros_interfaces__msg__TypeSatnavSvData__are_equal(
    const aspn23_ros_interfaces__msg__TypeSatnavSvData *lhs,
    const aspn23_ros_interfaces__msg__TypeSatnavSvData *rhs) {
  if (!lhs || !rhs) {
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
  // ephemeris_type
  if (lhs->ephemeris_type != rhs->ephemeris_type) {
    return false;
  }
  // sv_data_time
  if (!aspn23_ros_interfaces__msg__TypeSatnavTime__are_equal(
          &(lhs->sv_data_time), &(rhs->sv_data_time))) {
    return false;
  }
  // coordinate_frame
  if (lhs->coordinate_frame != rhs->coordinate_frame) {
    return false;
  }
  // sv_pos
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->sv_pos[i] != rhs->sv_pos[i]) {
      return false;
    }
  }
  // sv_vel
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->sv_vel[i] != rhs->sv_vel[i]) {
      return false;
    }
  }
  // sv_clock_bias
  if (lhs->sv_clock_bias != rhs->sv_clock_bias) {
    return false;
  }
  // sv_clock_drift
  if (lhs->sv_clock_drift != rhs->sv_clock_drift) {
    return false;
  }
  // group_delay_enum
  if (lhs->group_delay_enum != rhs->group_delay_enum) {
    return false;
  }
  // group_delay_vector
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->group_delay_vector[i] != rhs->group_delay_vector[i]) {
      return false;
    }
  }
  return true;
}

bool aspn23_ros_interfaces__msg__TypeSatnavSvData__copy(
    const aspn23_ros_interfaces__msg__TypeSatnavSvData *input,
    aspn23_ros_interfaces__msg__TypeSatnavSvData *output) {
  if (!input || !output) {
    return false;
  }
  // prn
  output->prn = input->prn;
  // satellite_system
  if (!aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__copy(
          &(input->satellite_system), &(output->satellite_system))) {
    return false;
  }
  // ephemeris_type
  output->ephemeris_type = input->ephemeris_type;
  // sv_data_time
  if (!aspn23_ros_interfaces__msg__TypeSatnavTime__copy(
          &(input->sv_data_time), &(output->sv_data_time))) {
    return false;
  }
  // coordinate_frame
  output->coordinate_frame = input->coordinate_frame;
  // sv_pos
  for (size_t i = 0; i < 3; ++i) {
    output->sv_pos[i] = input->sv_pos[i];
  }
  // sv_vel
  for (size_t i = 0; i < 3; ++i) {
    output->sv_vel[i] = input->sv_vel[i];
  }
  // sv_clock_bias
  output->sv_clock_bias = input->sv_clock_bias;
  // sv_clock_drift
  output->sv_clock_drift = input->sv_clock_drift;
  // group_delay_enum
  output->group_delay_enum = input->group_delay_enum;
  // group_delay_vector
  for (size_t i = 0; i < 4; ++i) {
    output->group_delay_vector[i] = input->group_delay_vector[i];
  }
  return true;
}

aspn23_ros_interfaces__msg__TypeSatnavSvData *
aspn23_ros_interfaces__msg__TypeSatnavSvData__create() {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__TypeSatnavSvData *msg =
      (aspn23_ros_interfaces__msg__TypeSatnavSvData *)allocator.allocate(
          sizeof(aspn23_ros_interfaces__msg__TypeSatnavSvData),
          allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aspn23_ros_interfaces__msg__TypeSatnavSvData));
  bool success = aspn23_ros_interfaces__msg__TypeSatnavSvData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void aspn23_ros_interfaces__msg__TypeSatnavSvData__destroy(
    aspn23_ros_interfaces__msg__TypeSatnavSvData *msg) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aspn23_ros_interfaces__msg__TypeSatnavSvData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}

bool aspn23_ros_interfaces__msg__TypeSatnavSvData__Sequence__init(
    aspn23_ros_interfaces__msg__TypeSatnavSvData__Sequence *array,
    size_t size) {
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__TypeSatnavSvData *data = NULL;

  if (size) {
    data =
        (aspn23_ros_interfaces__msg__TypeSatnavSvData *)allocator.zero_allocate(
            size, sizeof(aspn23_ros_interfaces__msg__TypeSatnavSvData),
            allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success =
          aspn23_ros_interfaces__msg__TypeSatnavSvData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array
      // elements
      for (; i > 0; --i) {
        aspn23_ros_interfaces__msg__TypeSatnavSvData__fini(&data[i - 1]);
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

void aspn23_ros_interfaces__msg__TypeSatnavSvData__Sequence__fini(
    aspn23_ros_interfaces__msg__TypeSatnavSvData__Sequence *array) {
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aspn23_ros_interfaces__msg__TypeSatnavSvData__fini(&array->data[i]);
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

aspn23_ros_interfaces__msg__TypeSatnavSvData__Sequence *
aspn23_ros_interfaces__msg__TypeSatnavSvData__Sequence__create(size_t size) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__TypeSatnavSvData__Sequence *array =
      (aspn23_ros_interfaces__msg__TypeSatnavSvData__Sequence *)
          allocator.allocate(
              sizeof(aspn23_ros_interfaces__msg__TypeSatnavSvData__Sequence),
              allocator.state);
  if (!array) {
    return NULL;
  }
  bool success =
      aspn23_ros_interfaces__msg__TypeSatnavSvData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void aspn23_ros_interfaces__msg__TypeSatnavSvData__Sequence__destroy(
    aspn23_ros_interfaces__msg__TypeSatnavSvData__Sequence *array) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aspn23_ros_interfaces__msg__TypeSatnavSvData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool aspn23_ros_interfaces__msg__TypeSatnavSvData__Sequence__are_equal(
    const aspn23_ros_interfaces__msg__TypeSatnavSvData__Sequence *lhs,
    const aspn23_ros_interfaces__msg__TypeSatnavSvData__Sequence *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aspn23_ros_interfaces__msg__TypeSatnavSvData__are_equal(
            &(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool aspn23_ros_interfaces__msg__TypeSatnavSvData__Sequence__copy(
    const aspn23_ros_interfaces__msg__TypeSatnavSvData__Sequence *input,
    aspn23_ros_interfaces__msg__TypeSatnavSvData__Sequence *output) {
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
        input->size * sizeof(aspn23_ros_interfaces__msg__TypeSatnavSvData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aspn23_ros_interfaces__msg__TypeSatnavSvData *data =
        (aspn23_ros_interfaces__msg__TypeSatnavSvData *)allocator.reallocate(
            output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aspn23_ros_interfaces__msg__TypeSatnavSvData__init(
              &output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity;) {
          aspn23_ros_interfaces__msg__TypeSatnavSvData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aspn23_ros_interfaces__msg__TypeSatnavSvData__copy(
            &(input->data[i]), &(output->data[i]))) {
      return false;
    }
  }
  return true;
}
