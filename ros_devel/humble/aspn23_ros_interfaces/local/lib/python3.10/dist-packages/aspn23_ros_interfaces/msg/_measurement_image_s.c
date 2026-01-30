// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aspn23_ros_interfaces:msg/MeasurementImage.idl
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
#include "aspn23_ros_interfaces/msg/detail/measurement_image__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_image__struct.h"
#include "rosidl_runtime_c/visibility_control.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "aspn23_ros_interfaces/msg/detail/type_integrity__functions.h"
// end nested array functions include
bool aspn23_ros_interfaces__msg__type_header__convert_from_py(
    PyObject *_pymsg, void *_ros_message);
PyObject *
aspn23_ros_interfaces__msg__type_header__convert_to_py(void *raw_ros_message);
bool aspn23_ros_interfaces__msg__type_timestamp__convert_from_py(
    PyObject *_pymsg, void *_ros_message);
PyObject *aspn23_ros_interfaces__msg__type_timestamp__convert_to_py(
    void *raw_ros_message);
bool aspn23_ros_interfaces__msg__type_integrity__convert_from_py(
    PyObject *_pymsg, void *_ros_message);
PyObject *aspn23_ros_interfaces__msg__type_integrity__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool aspn23_ros_interfaces__msg__measurement_image__convert_from_py(
    PyObject *_pymsg, void *_ros_message) {
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
        strncmp("aspn23_ros_interfaces.msg._measurement_image.MeasurementImage",
                full_classname_dest, 61) == 0);
  }
  aspn23_ros_interfaces__msg__MeasurementImage *ros_message = _ros_message;
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
  { // height
    PyObject *field = PyObject_GetAttrString(_pymsg, "height");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->height = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  { // width
    PyObject *field = PyObject_GetAttrString(_pymsg, "width");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->width = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  { // is_bigendian
    PyObject *field = PyObject_GetAttrString(_pymsg, "is_bigendian");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_bigendian = (Py_True == field);
    Py_DECREF(field);
  }
  { // image_type
    PyObject *field = PyObject_GetAttrString(_pymsg, "image_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->image_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  { // image_data_length
    PyObject *field = PyObject_GetAttrString(_pymsg, "image_data_length");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->image_data_length = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  { // image_data
    PyObject *field = PyObject_GetAttrString(_pymsg, "image_data");
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
      Py_ssize_t size = view.len / sizeof(uint8_t);
      if (!rosidl_runtime_c__uint8__Sequence__init(&(ros_message->image_data),
                                                   size)) {
        PyErr_SetString(PyExc_RuntimeError,
                        "unable to create uint8__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      uint8_t *dest = ros_message->image_data.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject *seq_field =
          PySequence_Fast(field, "expected a sequence in 'image_data'");
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
      if (!rosidl_runtime_c__uint8__Sequence__init(&(ros_message->image_data),
                                                   size)) {
        PyErr_SetString(PyExc_RuntimeError,
                        "unable to create uint8__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      uint8_t *dest = ros_message->image_data.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject *item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        uint8_t tmp = (uint8_t)PyLong_AsUnsignedLong(item);

        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  { // camera_model
    PyObject *field = PyObject_GetAttrString(_pymsg, "camera_model");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->camera_model = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  { // num_model_coefficients
    PyObject *field = PyObject_GetAttrString(_pymsg, "num_model_coefficients");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_model_coefficients = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  { // model_coefficients
    PyObject *field = PyObject_GetAttrString(_pymsg, "model_coefficients");
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
              &(ros_message->model_coefficients), size)) {
        PyErr_SetString(PyExc_RuntimeError,
                        "unable to create double__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      double *dest = ros_message->model_coefficients.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject *seq_field =
          PySequence_Fast(field, "expected a sequence in 'model_coefficients'");
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
              &(ros_message->model_coefficients), size)) {
        PyErr_SetString(PyExc_RuntimeError,
                        "unable to create double__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      double *dest = ros_message->model_coefficients.data;
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
  { // num_integrity
    PyObject *field = PyObject_GetAttrString(_pymsg, "num_integrity");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_integrity = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  { // integrity
    PyObject *field = PyObject_GetAttrString(_pymsg, "integrity");
    if (!field) {
      return false;
    }
    PyObject *seq_field =
        PySequence_Fast(field, "expected a sequence in 'integrity'");
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
    if (!aspn23_ros_interfaces__msg__TypeIntegrity__Sequence__init(
            &(ros_message->integrity), size)) {
      PyErr_SetString(
          PyExc_RuntimeError,
          "unable to create "
          "aspn23_ros_interfaces__msg__TypeIntegrity__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    aspn23_ros_interfaces__msg__TypeIntegrity *dest =
        ros_message->integrity.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!aspn23_ros_interfaces__msg__type_integrity__convert_from_py(
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
PyObject *aspn23_ros_interfaces__msg__measurement_image__convert_to_py(
    void *raw_ros_message) {
  /* NOTE(esteve): Call constructor of MeasurementImage */
  PyObject *_pymessage = NULL;
  {
    PyObject *pymessage_module =
        PyImport_ImportModule("aspn23_ros_interfaces.msg._measurement_image");
    assert(pymessage_module);
    PyObject *pymessage_class =
        PyObject_GetAttrString(pymessage_module, "MeasurementImage");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aspn23_ros_interfaces__msg__MeasurementImage *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementImage *)raw_ros_message;
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
  { // height
    PyObject *field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // width
    PyObject *field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // is_bigendian
    PyObject *field = NULL;
    field = PyBool_FromLong(ros_message->is_bigendian ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_bigendian", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // image_type
    PyObject *field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->image_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "image_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // image_data_length
    PyObject *field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->image_data_length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "image_data_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // image_data
    PyObject *field = NULL;
    field = PyObject_GetAttrString(_pymessage, "image_data");
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
    if (itemsize != sizeof(uint8_t)) {
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
    if (ros_message->image_data.size > 0) {
      // populating the array.array using the frombytes method
      PyObject *frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      uint8_t *src = &(ros_message->image_data.data[0]);
      PyObject *data = PyBytes_FromStringAndSize(
          (const char *)src, ros_message->image_data.size * sizeof(uint8_t));
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
  { // camera_model
    PyObject *field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->camera_model);
    {
      int rc = PyObject_SetAttrString(_pymessage, "camera_model", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // num_model_coefficients
    PyObject *field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_model_coefficients);
    {
      int rc =
          PyObject_SetAttrString(_pymessage, "num_model_coefficients", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // model_coefficients
    PyObject *field = NULL;
    field = PyObject_GetAttrString(_pymessage, "model_coefficients");
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
    if (ros_message->model_coefficients.size > 0) {
      // populating the array.array using the frombytes method
      PyObject *frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      double *src = &(ros_message->model_coefficients.data[0]);
      PyObject *data = PyBytes_FromStringAndSize(
          (const char *)src,
          ros_message->model_coefficients.size * sizeof(double));
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
  { // num_integrity
    PyObject *field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_integrity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_integrity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // integrity
    PyObject *field = NULL;
    size_t size = ros_message->integrity.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    aspn23_ros_interfaces__msg__TypeIntegrity *item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->integrity.data[i]);
      PyObject *pyitem =
          aspn23_ros_interfaces__msg__type_integrity__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "integrity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
