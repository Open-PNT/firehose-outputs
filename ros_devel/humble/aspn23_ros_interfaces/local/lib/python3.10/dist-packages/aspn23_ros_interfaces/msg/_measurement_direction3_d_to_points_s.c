// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aspn23_ros_interfaces:msg/MeasurementDirection3DToPoints.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
#pragma GCC diagnostic pop
#endif
#include "aspn23_ros_interfaces/msg/detail/measurement_direction3_d_to_points__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_direction3_d_to_points__struct.h"
#include "rosidl_runtime_c/visibility_control.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "aspn23_ros_interfaces/msg/detail/type_direction3_d_to_point__functions.h"
// end nested array functions include
bool aspn23_ros_interfaces__msg__type_header__convert_from_py(
    PyObject *_pymsg, void *_ros_message);
PyObject *
aspn23_ros_interfaces__msg__type_header__convert_to_py(void *raw_ros_message);
bool aspn23_ros_interfaces__msg__type_timestamp__convert_from_py(
    PyObject *_pymsg, void *_ros_message);
PyObject *aspn23_ros_interfaces__msg__type_timestamp__convert_to_py(
    void *raw_ros_message);
bool aspn23_ros_interfaces__msg__type_direction3_d_to_point__convert_from_py(
    PyObject *_pymsg, void *_ros_message);
PyObject *aspn23_ros_interfaces__msg__type_direction3_d_to_point__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool aspn23_ros_interfaces__msg__measurement_direction3_d_to_points__convert_from_py(
    PyObject *_pymsg, void *_ros_message) {
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[93];
    {
      char *class_name = NULL;
      char *module_name = NULL;
      {
        PyObject *class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject *name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject *module_attr =
              PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s",
               module_name, class_name);
    }
    assert(strncmp("aspn23_ros_interfaces.msg._measurement_direction3_d_to_"
                   "points.MeasurementDirection3DToPoints",
                   full_classname_dest, 92) == 0);
  }
  aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints *ros_message =
      _ros_message;
  { // header
    PyObject *field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!aspn23_ros_interfaces__msg__type_header__convert_from_py(
            field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  { // time_of_validity
    PyObject *field = PyObject_GetAttrString(_pymsg, "time_of_validity");
    if (!field) {
      return false;
    }
    if (!aspn23_ros_interfaces__msg__type_timestamp__convert_from_py(
            field, &ros_message->time_of_validity)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  { // num_obs
    PyObject *field = PyObject_GetAttrString(_pymsg, "num_obs");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_obs = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  { // obs
    PyObject *field = PyObject_GetAttrString(_pymsg, "obs");
    if (!field) {
      return false;
    }
    PyObject *seq_field =
        PySequence_Fast(field, "expected a sequence in 'obs'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!aspn23_ros_interfaces__msg__TypeDirection3DToPoint__Sequence__init(
            &(ros_message->obs), size)) {
      PyErr_SetString(PyExc_RuntimeError,
                      "unable to create "
                      "aspn23_ros_interfaces__msg__TypeDirection3DToPoint__"
                      "Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    aspn23_ros_interfaces__msg__TypeDirection3DToPoint *dest =
        ros_message->obs.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!aspn23_ros_interfaces__msg__type_direction3_d_to_point__convert_from_py(
              PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject *
aspn23_ros_interfaces__msg__measurement_direction3_d_to_points__convert_to_py(
    void *raw_ros_message) {
  /* NOTE(esteve): Call constructor of MeasurementDirection3DToPoints */
  PyObject *_pymessage = NULL;
  {
    PyObject *pymessage_module = PyImport_ImportModule(
        "aspn23_ros_interfaces.msg._measurement_direction3_d_to_points");
    assert(pymessage_module);
    PyObject *pymessage_class = PyObject_GetAttrString(
        pymessage_module, "MeasurementDirection3DToPoints");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints *)
          raw_ros_message;
  { // header
    PyObject *field = NULL;
    field = aspn23_ros_interfaces__msg__type_header__convert_to_py(
        &ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // time_of_validity
    PyObject *field = NULL;
    field = aspn23_ros_interfaces__msg__type_timestamp__convert_to_py(
        &ros_message->time_of_validity);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_of_validity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // num_obs
    PyObject *field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_obs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_obs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // obs
    PyObject *field = NULL;
    size_t size = ros_message->obs.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    aspn23_ros_interfaces__msg__TypeDirection3DToPoint *item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->obs.data[i]);
      PyObject *pyitem =
          aspn23_ros_interfaces__msg__type_direction3_d_to_point__convert_to_py(
              item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "obs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
