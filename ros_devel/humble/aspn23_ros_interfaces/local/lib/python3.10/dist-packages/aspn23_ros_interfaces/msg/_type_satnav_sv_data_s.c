// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aspn23_ros_interfaces:msg/TypeSatnavSvData.idl
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
#include "aspn23_ros_interfaces/msg/detail/type_satnav_sv_data__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_sv_data__struct.h"
#include "rosidl_runtime_c/visibility_control.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool aspn23_ros_interfaces__msg__type_satnav_satellite_system__convert_from_py(
    PyObject *_pymsg, void *_ros_message);
PyObject *
aspn23_ros_interfaces__msg__type_satnav_satellite_system__convert_to_py(
    void *raw_ros_message);
bool aspn23_ros_interfaces__msg__type_satnav_time__convert_from_py(
    PyObject *_pymsg, void *_ros_message);
PyObject *aspn23_ros_interfaces__msg__type_satnav_time__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool aspn23_ros_interfaces__msg__type_satnav_sv_data__convert_from_py(
    PyObject *_pymsg, void *_ros_message) {
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
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
            "aspn23_ros_interfaces.msg._type_satnav_sv_data.TypeSatnavSvData",
            full_classname_dest, 63) == 0);
  }
  aspn23_ros_interfaces__msg__TypeSatnavSvData *ros_message = _ros_message;
  { // prn
    PyObject *field = PyObject_GetAttrString(_pymsg, "prn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prn = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  { // satellite_system
    PyObject *field = PyObject_GetAttrString(_pymsg, "satellite_system");
    if (!field) {
      return false;
    }
    if (!aspn23_ros_interfaces__msg__type_satnav_satellite_system__convert_from_py(
            field, &ros_message->satellite_system)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  { // ephemeris_type
    PyObject *field = PyObject_GetAttrString(_pymsg, "ephemeris_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ephemeris_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  { // sv_data_time
    PyObject *field = PyObject_GetAttrString(_pymsg, "sv_data_time");
    if (!field) {
      return false;
    }
    if (!aspn23_ros_interfaces__msg__type_satnav_time__convert_from_py(
            field, &ros_message->sv_data_time)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  { // coordinate_frame
    PyObject *field = PyObject_GetAttrString(_pymsg, "coordinate_frame");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->coordinate_frame = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  { // sv_pos
    PyObject *field = PyObject_GetAttrString(_pymsg, "sv_pos");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject *seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 3;
      double *dest = ros_message->sv_pos;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  { // sv_vel
    PyObject *field = PyObject_GetAttrString(_pymsg, "sv_vel");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject *seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 3;
      double *dest = ros_message->sv_vel;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  { // sv_clock_bias
    PyObject *field = PyObject_GetAttrString(_pymsg, "sv_clock_bias");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sv_clock_bias = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // sv_clock_drift
    PyObject *field = PyObject_GetAttrString(_pymsg, "sv_clock_drift");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sv_clock_drift = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // group_delay_enum
    PyObject *field = PyObject_GetAttrString(_pymsg, "group_delay_enum");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->group_delay_enum = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  { // group_delay_vector
    PyObject *field = PyObject_GetAttrString(_pymsg, "group_delay_vector");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject *seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 4;
      float *dest = ros_message->group_delay_vector;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject *aspn23_ros_interfaces__msg__type_satnav_sv_data__convert_to_py(
    void *raw_ros_message) {
  /* NOTE(esteve): Call constructor of TypeSatnavSvData */
  PyObject *_pymessage = NULL;
  {
    PyObject *pymessage_module =
        PyImport_ImportModule("aspn23_ros_interfaces.msg._type_satnav_sv_data");
    assert(pymessage_module);
    PyObject *pymessage_class =
        PyObject_GetAttrString(pymessage_module, "TypeSatnavSvData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aspn23_ros_interfaces__msg__TypeSatnavSvData *ros_message =
      (aspn23_ros_interfaces__msg__TypeSatnavSvData *)raw_ros_message;
  { // prn
    PyObject *field = NULL;
    field = PyLong_FromLong(ros_message->prn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // satellite_system
    PyObject *field = NULL;
    field =
        aspn23_ros_interfaces__msg__type_satnav_satellite_system__convert_to_py(
            &ros_message->satellite_system);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "satellite_system", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // ephemeris_type
    PyObject *field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ephemeris_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ephemeris_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // sv_data_time
    PyObject *field = NULL;
    field = aspn23_ros_interfaces__msg__type_satnav_time__convert_to_py(
        &ros_message->sv_data_time);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sv_data_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // coordinate_frame
    PyObject *field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->coordinate_frame);
    {
      int rc = PyObject_SetAttrString(_pymessage, "coordinate_frame", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // sv_pos
    PyObject *field = NULL;
    field = PyObject_GetAttrString(_pymessage, "sv_pos");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject *seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 *dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double *src = &(ros_message->sv_pos[0]);
    memcpy(dst, src, 3 * sizeof(double));
    Py_DECREF(field);
  }
  { // sv_vel
    PyObject *field = NULL;
    field = PyObject_GetAttrString(_pymessage, "sv_vel");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject *seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 *dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double *src = &(ros_message->sv_vel[0]);
    memcpy(dst, src, 3 * sizeof(double));
    Py_DECREF(field);
  }
  { // sv_clock_bias
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->sv_clock_bias);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sv_clock_bias", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // sv_clock_drift
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->sv_clock_drift);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sv_clock_drift", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // group_delay_enum
    PyObject *field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->group_delay_enum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "group_delay_enum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // group_delay_vector
    PyObject *field = NULL;
    field = PyObject_GetAttrString(_pymessage, "group_delay_vector");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject *seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 *dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float *src = &(ros_message->group_delay_vector[0]);
    memcpy(dst, src, 4 * sizeof(float));
    Py_DECREF(field);
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
