// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aspn23_ros_interfaces:msg/TypeKeplerOrbit.idl
// generated code does not contain a copyright notice
#include "aspn23_ros_interfaces/msg/detail/type_kepler_orbit__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool aspn23_ros_interfaces__msg__TypeKeplerOrbit__init(
    aspn23_ros_interfaces__msg__TypeKeplerOrbit *msg) {
  if (!msg) {
    return false;
  }
  // m_0
  // delta_n
  // e
  // sqrt_a
  // omega_0
  // i_0
  // i_dot
  // omega
  // omega_dot
  // c_uc
  // c_us
  // c_rc
  // c_rs
  // c_ic
  // c_is
  // t_oe
  return true;
}

void aspn23_ros_interfaces__msg__TypeKeplerOrbit__fini(
    aspn23_ros_interfaces__msg__TypeKeplerOrbit *msg) {
  if (!msg) {
    return;
  }
  // m_0
  // delta_n
  // e
  // sqrt_a
  // omega_0
  // i_0
  // i_dot
  // omega
  // omega_dot
  // c_uc
  // c_us
  // c_rc
  // c_rs
  // c_ic
  // c_is
  // t_oe
}

bool aspn23_ros_interfaces__msg__TypeKeplerOrbit__are_equal(
    const aspn23_ros_interfaces__msg__TypeKeplerOrbit *lhs,
    const aspn23_ros_interfaces__msg__TypeKeplerOrbit *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  // m_0
  if (lhs->m_0 != rhs->m_0) {
    return false;
  }
  // delta_n
  if (lhs->delta_n != rhs->delta_n) {
    return false;
  }
  // e
  if (lhs->e != rhs->e) {
    return false;
  }
  // sqrt_a
  if (lhs->sqrt_a != rhs->sqrt_a) {
    return false;
  }
  // omega_0
  if (lhs->omega_0 != rhs->omega_0) {
    return false;
  }
  // i_0
  if (lhs->i_0 != rhs->i_0) {
    return false;
  }
  // i_dot
  if (lhs->i_dot != rhs->i_dot) {
    return false;
  }
  // omega
  if (lhs->omega != rhs->omega) {
    return false;
  }
  // omega_dot
  if (lhs->omega_dot != rhs->omega_dot) {
    return false;
  }
  // c_uc
  if (lhs->c_uc != rhs->c_uc) {
    return false;
  }
  // c_us
  if (lhs->c_us != rhs->c_us) {
    return false;
  }
  // c_rc
  if (lhs->c_rc != rhs->c_rc) {
    return false;
  }
  // c_rs
  if (lhs->c_rs != rhs->c_rs) {
    return false;
  }
  // c_ic
  if (lhs->c_ic != rhs->c_ic) {
    return false;
  }
  // c_is
  if (lhs->c_is != rhs->c_is) {
    return false;
  }
  // t_oe
  if (lhs->t_oe != rhs->t_oe) {
    return false;
  }
  return true;
}

bool aspn23_ros_interfaces__msg__TypeKeplerOrbit__copy(
    const aspn23_ros_interfaces__msg__TypeKeplerOrbit *input,
    aspn23_ros_interfaces__msg__TypeKeplerOrbit *output) {
  if (!input || !output) {
    return false;
  }
  // m_0
  output->m_0 = input->m_0;
  // delta_n
  output->delta_n = input->delta_n;
  // e
  output->e = input->e;
  // sqrt_a
  output->sqrt_a = input->sqrt_a;
  // omega_0
  output->omega_0 = input->omega_0;
  // i_0
  output->i_0 = input->i_0;
  // i_dot
  output->i_dot = input->i_dot;
  // omega
  output->omega = input->omega;
  // omega_dot
  output->omega_dot = input->omega_dot;
  // c_uc
  output->c_uc = input->c_uc;
  // c_us
  output->c_us = input->c_us;
  // c_rc
  output->c_rc = input->c_rc;
  // c_rs
  output->c_rs = input->c_rs;
  // c_ic
  output->c_ic = input->c_ic;
  // c_is
  output->c_is = input->c_is;
  // t_oe
  output->t_oe = input->t_oe;
  return true;
}

aspn23_ros_interfaces__msg__TypeKeplerOrbit *
aspn23_ros_interfaces__msg__TypeKeplerOrbit__create() {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__TypeKeplerOrbit *msg =
      (aspn23_ros_interfaces__msg__TypeKeplerOrbit *)allocator.allocate(
          sizeof(aspn23_ros_interfaces__msg__TypeKeplerOrbit), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aspn23_ros_interfaces__msg__TypeKeplerOrbit));
  bool success = aspn23_ros_interfaces__msg__TypeKeplerOrbit__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void aspn23_ros_interfaces__msg__TypeKeplerOrbit__destroy(
    aspn23_ros_interfaces__msg__TypeKeplerOrbit *msg) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aspn23_ros_interfaces__msg__TypeKeplerOrbit__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}

bool aspn23_ros_interfaces__msg__TypeKeplerOrbit__Sequence__init(
    aspn23_ros_interfaces__msg__TypeKeplerOrbit__Sequence *array, size_t size) {
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__TypeKeplerOrbit *data = NULL;

  if (size) {
    data =
        (aspn23_ros_interfaces__msg__TypeKeplerOrbit *)allocator.zero_allocate(
            size, sizeof(aspn23_ros_interfaces__msg__TypeKeplerOrbit),
            allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success =
          aspn23_ros_interfaces__msg__TypeKeplerOrbit__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array
      // elements
      for (; i > 0; --i) {
        aspn23_ros_interfaces__msg__TypeKeplerOrbit__fini(&data[i - 1]);
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

void aspn23_ros_interfaces__msg__TypeKeplerOrbit__Sequence__fini(
    aspn23_ros_interfaces__msg__TypeKeplerOrbit__Sequence *array) {
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aspn23_ros_interfaces__msg__TypeKeplerOrbit__fini(&array->data[i]);
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

aspn23_ros_interfaces__msg__TypeKeplerOrbit__Sequence *
aspn23_ros_interfaces__msg__TypeKeplerOrbit__Sequence__create(size_t size) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__TypeKeplerOrbit__Sequence *array =
      (aspn23_ros_interfaces__msg__TypeKeplerOrbit__Sequence *)
          allocator.allocate(
              sizeof(aspn23_ros_interfaces__msg__TypeKeplerOrbit__Sequence),
              allocator.state);
  if (!array) {
    return NULL;
  }
  bool success =
      aspn23_ros_interfaces__msg__TypeKeplerOrbit__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void aspn23_ros_interfaces__msg__TypeKeplerOrbit__Sequence__destroy(
    aspn23_ros_interfaces__msg__TypeKeplerOrbit__Sequence *array) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aspn23_ros_interfaces__msg__TypeKeplerOrbit__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool aspn23_ros_interfaces__msg__TypeKeplerOrbit__Sequence__are_equal(
    const aspn23_ros_interfaces__msg__TypeKeplerOrbit__Sequence *lhs,
    const aspn23_ros_interfaces__msg__TypeKeplerOrbit__Sequence *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aspn23_ros_interfaces__msg__TypeKeplerOrbit__are_equal(
            &(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool aspn23_ros_interfaces__msg__TypeKeplerOrbit__Sequence__copy(
    const aspn23_ros_interfaces__msg__TypeKeplerOrbit__Sequence *input,
    aspn23_ros_interfaces__msg__TypeKeplerOrbit__Sequence *output) {
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
        input->size * sizeof(aspn23_ros_interfaces__msg__TypeKeplerOrbit);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aspn23_ros_interfaces__msg__TypeKeplerOrbit *data =
        (aspn23_ros_interfaces__msg__TypeKeplerOrbit *)allocator.reallocate(
            output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aspn23_ros_interfaces__msg__TypeKeplerOrbit__init(
              &output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity;) {
          aspn23_ros_interfaces__msg__TypeKeplerOrbit__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aspn23_ros_interfaces__msg__TypeKeplerOrbit__copy(
            &(input->data[i]), &(output->data[i]))) {
      return false;
    }
  }
  return true;
}
