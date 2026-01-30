// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aspn23_ros_interfaces:msg/MetadataGlonassEphemeris.idl
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
#include "aspn23_ros_interfaces/msg/detail/metadata_glonass_ephemeris__functions.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_glonass_ephemeris__struct.h"
#include "rosidl_runtime_c/visibility_control.h"

bool aspn23_ros_interfaces__msg__type_metadataheader__convert_from_py(
    PyObject *_pymsg, void *_ros_message);
PyObject *aspn23_ros_interfaces__msg__type_metadataheader__convert_to_py(
    void *raw_ros_message);
bool aspn23_ros_interfaces__msg__type_timestamp__convert_from_py(
    PyObject *_pymsg, void *_ros_message);
PyObject *aspn23_ros_interfaces__msg__type_timestamp__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool aspn23_ros_interfaces__msg__metadata_glonass_ephemeris__convert_from_py(
    PyObject *_pymsg, void *_ros_message) {
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[79];
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
    assert(strncmp("aspn23_ros_interfaces.msg._metadata_glonass_ephemeris."
                   "MetadataGlonassEphemeris",
                   full_classname_dest, 78) == 0);
  }
  aspn23_ros_interfaces__msg__MetadataGlonassEphemeris *ros_message =
      _ros_message;
  { // info
    PyObject *field = PyObject_GetAttrString(_pymsg, "info");
    if (!field) {
      return false;
    }
    if (!aspn23_ros_interfaces__msg__type_metadataheader__convert_from_py(
            field, &ros_message->info)) {
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
  { // slot_number
    PyObject *field = PyObject_GetAttrString(_pymsg, "slot_number");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->slot_number = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  { // freq_o
    PyObject *field = PyObject_GetAttrString(_pymsg, "freq_o");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->freq_o = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  { // n_t
    PyObject *field = PyObject_GetAttrString(_pymsg, "n_t");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->n_t = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  { // t_k
    PyObject *field = PyObject_GetAttrString(_pymsg, "t_k");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t_k = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // t_b
    PyObject *field = PyObject_GetAttrString(_pymsg, "t_b");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t_b = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // gamma_n
    PyObject *field = PyObject_GetAttrString(_pymsg, "gamma_n");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gamma_n = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // tau_n
    PyObject *field = PyObject_GetAttrString(_pymsg, "tau_n");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tau_n = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // sv_pos_x
    PyObject *field = PyObject_GetAttrString(_pymsg, "sv_pos_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sv_pos_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // sv_vel_x
    PyObject *field = PyObject_GetAttrString(_pymsg, "sv_vel_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sv_vel_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // sv_accel_x
    PyObject *field = PyObject_GetAttrString(_pymsg, "sv_accel_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sv_accel_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // sv_pos_y
    PyObject *field = PyObject_GetAttrString(_pymsg, "sv_pos_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sv_pos_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // sv_vel_y
    PyObject *field = PyObject_GetAttrString(_pymsg, "sv_vel_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sv_vel_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // sv_accel_y
    PyObject *field = PyObject_GetAttrString(_pymsg, "sv_accel_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sv_accel_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // sv_pos_z
    PyObject *field = PyObject_GetAttrString(_pymsg, "sv_pos_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sv_pos_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // sv_vel_z
    PyObject *field = PyObject_GetAttrString(_pymsg, "sv_vel_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sv_vel_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // sv_accel_z
    PyObject *field = PyObject_GetAttrString(_pymsg, "sv_accel_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sv_accel_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject *aspn23_ros_interfaces__msg__metadata_glonass_ephemeris__convert_to_py(
    void *raw_ros_message) {
  /* NOTE(esteve): Call constructor of MetadataGlonassEphemeris */
  PyObject *_pymessage = NULL;
  {
    PyObject *pymessage_module = PyImport_ImportModule(
        "aspn23_ros_interfaces.msg._metadata_glonass_ephemeris");
    assert(pymessage_module);
    PyObject *pymessage_class =
        PyObject_GetAttrString(pymessage_module, "MetadataGlonassEphemeris");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aspn23_ros_interfaces__msg__MetadataGlonassEphemeris *ros_message =
      (aspn23_ros_interfaces__msg__MetadataGlonassEphemeris *)raw_ros_message;
  { // info
    PyObject *field = NULL;
    field = aspn23_ros_interfaces__msg__type_metadataheader__convert_to_py(
        &ros_message->info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "info", field);
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
  { // slot_number
    PyObject *field = NULL;
    field = PyLong_FromLong(ros_message->slot_number);
    {
      int rc = PyObject_SetAttrString(_pymessage, "slot_number", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // freq_o
    PyObject *field = NULL;
    field = PyLong_FromLong(ros_message->freq_o);
    {
      int rc = PyObject_SetAttrString(_pymessage, "freq_o", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // n_t
    PyObject *field = NULL;
    field = PyLong_FromLong(ros_message->n_t);
    {
      int rc = PyObject_SetAttrString(_pymessage, "n_t", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // t_k
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->t_k);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t_k", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // t_b
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->t_b);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t_b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // gamma_n
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->gamma_n);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gamma_n", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // tau_n
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->tau_n);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tau_n", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // sv_pos_x
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->sv_pos_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sv_pos_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // sv_vel_x
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->sv_vel_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sv_vel_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // sv_accel_x
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->sv_accel_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sv_accel_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // sv_pos_y
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->sv_pos_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sv_pos_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // sv_vel_y
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->sv_vel_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sv_vel_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // sv_accel_y
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->sv_accel_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sv_accel_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // sv_pos_z
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->sv_pos_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sv_pos_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // sv_vel_z
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->sv_vel_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sv_vel_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // sv_accel_z
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->sv_accel_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sv_accel_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
