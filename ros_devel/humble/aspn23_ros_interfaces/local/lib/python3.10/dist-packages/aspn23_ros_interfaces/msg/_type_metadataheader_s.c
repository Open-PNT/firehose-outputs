// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aspn23_ros_interfaces:msg/TypeMetadataheader.idl
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
#include "aspn23_ros_interfaces/msg/detail/type_metadataheader__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_metadataheader__struct.h"
#include "rosidl_runtime_c/visibility_control.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool aspn23_ros_interfaces__msg__type_header__convert_from_py(
    PyObject *_pymsg, void *_ros_message);
PyObject *
aspn23_ros_interfaces__msg__type_header__convert_to_py(void *raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool aspn23_ros_interfaces__msg__type_metadataheader__convert_from_py(
    PyObject *_pymsg, void *_ros_message) {
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[66];
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
        strncmp(
            "aspn23_ros_interfaces.msg._type_metadataheader.TypeMetadataheader",
            full_classname_dest, 65) == 0);
  }
  aspn23_ros_interfaces__msg__TypeMetadataheader *ros_message = _ros_message;
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
  { // sensor_description
    PyObject *field = PyObject_GetAttrString(_pymsg, "sensor_description");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject *encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->sensor_description,
                                     PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  { // delta_t_nom
    PyObject *field = PyObject_GetAttrString(_pymsg, "delta_t_nom");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_t_nom = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // timestamp_clock_id
    PyObject *field = PyObject_GetAttrString(_pymsg, "timestamp_clock_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp_clock_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  { // digits_of_precision
    PyObject *field = PyObject_GetAttrString(_pymsg, "digits_of_precision");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->digits_of_precision = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject *aspn23_ros_interfaces__msg__type_metadataheader__convert_to_py(
    void *raw_ros_message) {
  /* NOTE(esteve): Call constructor of TypeMetadataheader */
  PyObject *_pymessage = NULL;
  {
    PyObject *pymessage_module =
        PyImport_ImportModule("aspn23_ros_interfaces.msg._type_metadataheader");
    assert(pymessage_module);
    PyObject *pymessage_class =
        PyObject_GetAttrString(pymessage_module, "TypeMetadataheader");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aspn23_ros_interfaces__msg__TypeMetadataheader *ros_message =
      (aspn23_ros_interfaces__msg__TypeMetadataheader *)raw_ros_message;
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
  { // sensor_description
    PyObject *field = NULL;
    field = PyUnicode_DecodeUTF8(ros_message->sensor_description.data,
                                 strlen(ros_message->sensor_description.data),
                                 "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensor_description", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // delta_t_nom
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_t_nom);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_t_nom", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // timestamp_clock_id
    PyObject *field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->timestamp_clock_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp_clock_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // digits_of_precision
    PyObject *field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->digits_of_precision);
    {
      int rc = PyObject_SetAttrString(_pymessage, "digits_of_precision", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
