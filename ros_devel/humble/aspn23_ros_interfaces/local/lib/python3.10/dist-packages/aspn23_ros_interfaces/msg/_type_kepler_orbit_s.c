// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aspn23_ros_interfaces:msg/TypeKeplerOrbit.idl
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
#include "aspn23_ros_interfaces/msg/detail/type_kepler_orbit__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_kepler_orbit__struct.h"
#include "rosidl_runtime_c/visibility_control.h"

ROSIDL_GENERATOR_C_EXPORT
bool aspn23_ros_interfaces__msg__type_kepler_orbit__convert_from_py(
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
        strncmp("aspn23_ros_interfaces.msg._type_kepler_orbit.TypeKeplerOrbit",
                full_classname_dest, 60) == 0);
  }
  aspn23_ros_interfaces__msg__TypeKeplerOrbit *ros_message = _ros_message;
  { // m_0
    PyObject *field = PyObject_GetAttrString(_pymsg, "m_0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->m_0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // delta_n
    PyObject *field = PyObject_GetAttrString(_pymsg, "delta_n");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_n = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // e
    PyObject *field = PyObject_GetAttrString(_pymsg, "e");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->e = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // sqrt_a
    PyObject *field = PyObject_GetAttrString(_pymsg, "sqrt_a");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sqrt_a = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // omega_0
    PyObject *field = PyObject_GetAttrString(_pymsg, "omega_0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->omega_0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // i_0
    PyObject *field = PyObject_GetAttrString(_pymsg, "i_0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->i_0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // i_dot
    PyObject *field = PyObject_GetAttrString(_pymsg, "i_dot");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->i_dot = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // omega
    PyObject *field = PyObject_GetAttrString(_pymsg, "omega");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->omega = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // omega_dot
    PyObject *field = PyObject_GetAttrString(_pymsg, "omega_dot");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->omega_dot = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // c_uc
    PyObject *field = PyObject_GetAttrString(_pymsg, "c_uc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->c_uc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // c_us
    PyObject *field = PyObject_GetAttrString(_pymsg, "c_us");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->c_us = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // c_rc
    PyObject *field = PyObject_GetAttrString(_pymsg, "c_rc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->c_rc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // c_rs
    PyObject *field = PyObject_GetAttrString(_pymsg, "c_rs");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->c_rs = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // c_ic
    PyObject *field = PyObject_GetAttrString(_pymsg, "c_ic");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->c_ic = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // c_is
    PyObject *field = PyObject_GetAttrString(_pymsg, "c_is");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->c_is = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // t_oe
    PyObject *field = PyObject_GetAttrString(_pymsg, "t_oe");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t_oe = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject *aspn23_ros_interfaces__msg__type_kepler_orbit__convert_to_py(
    void *raw_ros_message) {
  /* NOTE(esteve): Call constructor of TypeKeplerOrbit */
  PyObject *_pymessage = NULL;
  {
    PyObject *pymessage_module =
        PyImport_ImportModule("aspn23_ros_interfaces.msg._type_kepler_orbit");
    assert(pymessage_module);
    PyObject *pymessage_class =
        PyObject_GetAttrString(pymessage_module, "TypeKeplerOrbit");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aspn23_ros_interfaces__msg__TypeKeplerOrbit *ros_message =
      (aspn23_ros_interfaces__msg__TypeKeplerOrbit *)raw_ros_message;
  { // m_0
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->m_0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m_0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // delta_n
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_n);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_n", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // e
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->e);
    {
      int rc = PyObject_SetAttrString(_pymessage, "e", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // sqrt_a
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->sqrt_a);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sqrt_a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // omega_0
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->omega_0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "omega_0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // i_0
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->i_0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "i_0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // i_dot
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->i_dot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "i_dot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // omega
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->omega);
    {
      int rc = PyObject_SetAttrString(_pymessage, "omega", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // omega_dot
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->omega_dot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "omega_dot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // c_uc
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->c_uc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "c_uc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // c_us
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->c_us);
    {
      int rc = PyObject_SetAttrString(_pymessage, "c_us", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // c_rc
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->c_rc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "c_rc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // c_rs
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->c_rs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "c_rs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // c_ic
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->c_ic);
    {
      int rc = PyObject_SetAttrString(_pymessage, "c_ic", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // c_is
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->c_is);
    {
      int rc = PyObject_SetAttrString(_pymessage, "c_is", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // t_oe
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->t_oe);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t_oe", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
