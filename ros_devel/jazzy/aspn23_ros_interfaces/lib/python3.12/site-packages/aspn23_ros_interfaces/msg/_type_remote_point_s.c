// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aspn23_ros_interfaces:msg/TypeRemotePoint.idl
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
#include "aspn23_ros_interfaces/msg/detail/type_remote_point__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_remote_point__struct.h"
#include "rosidl_runtime_c/visibility_control.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_EXPORT
bool aspn23_ros_interfaces__msg__type_remote_point__convert_from_py(
    PyObject *_pymsg, void *_ros_message) {
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
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
    assert(
        strncmp("aspn23_ros_interfaces.msg._type_remote_point.TypeRemotePoint",
                full_classname_dest, 60) == 0);
  }
  aspn23_ros_interfaces__msg__TypeRemotePoint *ros_message = _ros_message;
  { // included_terms
    PyObject *field = PyObject_GetAttrString(_pymsg, "included_terms");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->included_terms = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  { // id
    PyObject *field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  { // position_reference_frame
    PyObject *field =
        PyObject_GetAttrString(_pymsg, "position_reference_frame");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->position_reference_frame =
        (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  { // position1
    PyObject *field = PyObject_GetAttrString(_pymsg, "position1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // position2
    PyObject *field = PyObject_GetAttrString(_pymsg, "position2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // position3
    PyObject *field = PyObject_GetAttrString(_pymsg, "position3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position3 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // num_position_components
    PyObject *field = PyObject_GetAttrString(_pymsg, "num_position_components");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_position_components =
        (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  { // position_covariance
    PyObject *field = PyObject_GetAttrString(_pymsg, "position_covariance");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(double);
      if (!rosidl_runtime_c__double__Sequence__init(
              &(ros_message->position_covariance), size)) {
        PyErr_SetString(PyExc_RuntimeError,
                        "unable to create double__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      double *dest = ros_message->position_covariance.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject *seq_field = PySequence_Fast(
          field, "expected a sequence in 'position_covariance'");
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
      if (!rosidl_runtime_c__double__Sequence__init(
              &(ros_message->position_covariance), size)) {
        PyErr_SetString(PyExc_RuntimeError,
                        "unable to create double__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      double *dest = ros_message->position_covariance.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject *item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        double tmp = PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject *aspn23_ros_interfaces__msg__type_remote_point__convert_to_py(
    void *raw_ros_message) {
  /* NOTE(esteve): Call constructor of TypeRemotePoint */
  PyObject *_pymessage = NULL;
  {
    PyObject *pymessage_module =
        PyImport_ImportModule("aspn23_ros_interfaces.msg._type_remote_point");
    assert(pymessage_module);
    PyObject *pymessage_class =
        PyObject_GetAttrString(pymessage_module, "TypeRemotePoint");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aspn23_ros_interfaces__msg__TypeRemotePoint *ros_message =
      (aspn23_ros_interfaces__msg__TypeRemotePoint *)raw_ros_message;
  { // included_terms
    PyObject *field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->included_terms);
    {
      int rc = PyObject_SetAttrString(_pymessage, "included_terms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // id
    PyObject *field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // position_reference_frame
    PyObject *field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->position_reference_frame);
    {
      int rc =
          PyObject_SetAttrString(_pymessage, "position_reference_frame", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // position1
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->position1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // position2
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->position2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // position3
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->position3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // num_position_components
    PyObject *field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_position_components);
    {
      int rc =
          PyObject_SetAttrString(_pymessage, "num_position_components", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // position_covariance
    PyObject *field = NULL;
    field = PyObject_GetAttrString(_pymessage, "position_covariance");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject *itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(double)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject *pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject *ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->position_covariance.size > 0) {
      // populating the array.array using the frombytes method
      PyObject *frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      double *src = &(ros_message->position_covariance.data[0]);
      PyObject *data = PyBytes_FromStringAndSize(
          (const char *)src,
          ros_message->position_covariance.size * sizeof(double));
      assert(data != NULL);
      PyObject *ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
