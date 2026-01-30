// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aspn23_ros_interfaces:msg/TypeSatnavTime.idl
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
#include "aspn23_ros_interfaces/msg/detail/type_satnav_time__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_time__struct.h"
#include "rosidl_runtime_c/visibility_control.h"

ROSIDL_GENERATOR_C_EXPORT
bool aspn23_ros_interfaces__msg__type_satnav_time__convert_from_py(
    PyObject *_pymsg, void *_ros_message) {
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
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
    assert(strncmp("aspn23_ros_interfaces.msg._type_satnav_time.TypeSatnavTime",
                   full_classname_dest, 58) == 0);
  }
  aspn23_ros_interfaces__msg__TypeSatnavTime *ros_message = _ros_message;
  { // week_number
    PyObject *field = PyObject_GetAttrString(_pymsg, "week_number");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->week_number = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  { // seconds_of_week
    PyObject *field = PyObject_GetAttrString(_pymsg, "seconds_of_week");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->seconds_of_week = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // time_reference
    PyObject *field = PyObject_GetAttrString(_pymsg, "time_reference");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time_reference = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject *aspn23_ros_interfaces__msg__type_satnav_time__convert_to_py(
    void *raw_ros_message) {
  /* NOTE(esteve): Call constructor of TypeSatnavTime */
  PyObject *_pymessage = NULL;
  {
    PyObject *pymessage_module =
        PyImport_ImportModule("aspn23_ros_interfaces.msg._type_satnav_time");
    assert(pymessage_module);
    PyObject *pymessage_class =
        PyObject_GetAttrString(pymessage_module, "TypeSatnavTime");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aspn23_ros_interfaces__msg__TypeSatnavTime *ros_message =
      (aspn23_ros_interfaces__msg__TypeSatnavTime *)raw_ros_message;
  { // week_number
    PyObject *field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->week_number);
    {
      int rc = PyObject_SetAttrString(_pymessage, "week_number", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // seconds_of_week
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->seconds_of_week);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seconds_of_week", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // time_reference
    PyObject *field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->time_reference);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_reference", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
