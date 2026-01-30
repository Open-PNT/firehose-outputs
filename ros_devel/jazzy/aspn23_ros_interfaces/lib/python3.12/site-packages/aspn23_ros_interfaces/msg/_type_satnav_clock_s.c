// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aspn23_ros_interfaces:msg/TypeSatnavClock.idl
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
#include "aspn23_ros_interfaces/msg/detail/type_satnav_clock__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_clock__struct.h"
#include "rosidl_runtime_c/visibility_control.h"

ROSIDL_GENERATOR_C_EXPORT
bool aspn23_ros_interfaces__msg__type_satnav_clock__convert_from_py(
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
        strncmp("aspn23_ros_interfaces.msg._type_satnav_clock.TypeSatnavClock",
                full_classname_dest, 60) == 0);
  }
  aspn23_ros_interfaces__msg__TypeSatnavClock *ros_message = _ros_message;
  { // t_oc
    PyObject *field = PyObject_GetAttrString(_pymsg, "t_oc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t_oc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // af_0
    PyObject *field = PyObject_GetAttrString(_pymsg, "af_0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->af_0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // af_1
    PyObject *field = PyObject_GetAttrString(_pymsg, "af_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->af_1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // af_2
    PyObject *field = PyObject_GetAttrString(_pymsg, "af_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->af_2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject *aspn23_ros_interfaces__msg__type_satnav_clock__convert_to_py(
    void *raw_ros_message) {
  /* NOTE(esteve): Call constructor of TypeSatnavClock */
  PyObject *_pymessage = NULL;
  {
    PyObject *pymessage_module =
        PyImport_ImportModule("aspn23_ros_interfaces.msg._type_satnav_clock");
    assert(pymessage_module);
    PyObject *pymessage_class =
        PyObject_GetAttrString(pymessage_module, "TypeSatnavClock");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aspn23_ros_interfaces__msg__TypeSatnavClock *ros_message =
      (aspn23_ros_interfaces__msg__TypeSatnavClock *)raw_ros_message;
  { // t_oc
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->t_oc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t_oc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // af_0
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->af_0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "af_0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // af_1
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->af_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "af_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // af_2
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->af_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "af_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
