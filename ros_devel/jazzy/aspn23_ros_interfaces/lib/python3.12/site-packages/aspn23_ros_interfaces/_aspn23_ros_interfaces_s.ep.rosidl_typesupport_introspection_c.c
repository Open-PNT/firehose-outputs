// generated from
// rosidl_generator_py/resource/_idl_pkg_typesupport_entry_point.c.em generated
// code does not contain a copyright notice
#include <Python.h>

static PyMethodDef aspn23_ros_interfaces__methods[] = {
    {NULL, NULL, 0, NULL} /* sentinel */
};

static struct PyModuleDef aspn23_ros_interfaces__module = {
    PyModuleDef_HEAD_INIT,
    "_aspn23_ros_interfaces_support",
    "_aspn23_ros_interfaces_doc",
    -1, /* -1 means that the module keeps state in global variables */
    aspn23_ros_interfaces__methods,
    NULL,
    NULL,
    NULL,
    NULL,
};

#include "aspn23_ros_interfaces/msg/detail/type_direction2_d_to_point__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_direction2_d_to_point__struct.h"
#include "aspn23_ros_interfaces/msg/detail/type_direction2_d_to_point__type_support.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/visibility_control.h"
#include <stdbool.h>
#include <stdint.h>

static void *
aspn23_ros_interfaces__msg__type_direction2_d_to_point__create_ros_message(
    void) {
  return aspn23_ros_interfaces__msg__TypeDirection2DToPoint__create();
}

static void
aspn23_ros_interfaces__msg__type_direction2_d_to_point__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__TypeDirection2DToPoint *ros_message =
      (aspn23_ros_interfaces__msg__TypeDirection2DToPoint *)raw_ros_message;
  aspn23_ros_interfaces__msg__TypeDirection2DToPoint__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__type_direction2_d_to_point__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__type_direction2_d_to_point__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                TypeDirection2DToPoint);

int8_t _register_msg_type__msg__type_direction2_d_to_point(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__type_direction2_d_to_point__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "create_ros_message_msg__msg__type_direction2_d_to_point",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__type_direction2_d_to_point__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "destroy_ros_message_msg__msg__type_direction2_d_to_point",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__type_direction2_d_to_point__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_from_py_msg__msg__type_direction2_d_to_point",
      pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__type_direction2_d_to_point__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_to_py_msg__msg__type_direction2_d_to_point",
                           pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(
                        aspn23_ros_interfaces, msg, TypeDirection2DToPoint),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "type_support_msg__msg__type_direction2_d_to_point",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/type_direction3_d_to_point__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_direction3_d_to_point__struct.h"
#include "aspn23_ros_interfaces/msg/detail/type_direction3_d_to_point__type_support.h"

static void *
aspn23_ros_interfaces__msg__type_direction3_d_to_point__create_ros_message(
    void) {
  return aspn23_ros_interfaces__msg__TypeDirection3DToPoint__create();
}

static void
aspn23_ros_interfaces__msg__type_direction3_d_to_point__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__TypeDirection3DToPoint *ros_message =
      (aspn23_ros_interfaces__msg__TypeDirection3DToPoint *)raw_ros_message;
  aspn23_ros_interfaces__msg__TypeDirection3DToPoint__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__type_direction3_d_to_point__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__type_direction3_d_to_point__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                TypeDirection3DToPoint);

int8_t _register_msg_type__msg__type_direction3_d_to_point(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__type_direction3_d_to_point__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "create_ros_message_msg__msg__type_direction3_d_to_point",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__type_direction3_d_to_point__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "destroy_ros_message_msg__msg__type_direction3_d_to_point",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__type_direction3_d_to_point__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_from_py_msg__msg__type_direction3_d_to_point",
      pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__type_direction3_d_to_point__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_to_py_msg__msg__type_direction3_d_to_point",
                           pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(
                        aspn23_ros_interfaces, msg, TypeDirection3DToPoint),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "type_support_msg__msg__type_direction3_d_to_point",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/type_header__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_header__struct.h"
#include "aspn23_ros_interfaces/msg/detail/type_header__type_support.h"

static void *aspn23_ros_interfaces__msg__type_header__create_ros_message(void) {
  return aspn23_ros_interfaces__msg__TypeHeader__create();
}

static void aspn23_ros_interfaces__msg__type_header__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__TypeHeader *ros_message =
      (aspn23_ros_interfaces__msg__TypeHeader *)raw_ros_message;
  aspn23_ros_interfaces__msg__TypeHeader__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__type_header__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *
aspn23_ros_interfaces__msg__type_header__convert_to_py(void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg, TypeHeader);

int8_t _register_msg_type__msg__type_header(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__type_header__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule, "create_ros_message_msg__msg__type_header",
                           pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__type_header__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err =
      PyModule_AddObject(pymodule, "destroy_ros_message_msg__msg__type_header",
                         pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__type_header__convert_from_py, NULL,
      NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule, "convert_from_py_msg__msg__type_header",
                           pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__type_header__convert_to_py, NULL,
      NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule, "convert_to_py_msg__msg__type_header",
                           pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces,
                                                        msg, TypeHeader),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule, "type_support_msg__msg__type_header",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/type_image_feature__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_image_feature__struct.h"
#include "aspn23_ros_interfaces/msg/detail/type_image_feature__type_support.h"

static void *
aspn23_ros_interfaces__msg__type_image_feature__create_ros_message(void) {
  return aspn23_ros_interfaces__msg__TypeImageFeature__create();
}

static void aspn23_ros_interfaces__msg__type_image_feature__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__TypeImageFeature *ros_message =
      (aspn23_ros_interfaces__msg__TypeImageFeature *)raw_ros_message;
  aspn23_ros_interfaces__msg__TypeImageFeature__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__type_image_feature__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__type_image_feature__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg, TypeImageFeature);

int8_t _register_msg_type__msg__type_image_feature(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__type_image_feature__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "create_ros_message_msg__msg__type_image_feature",
                           pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__type_image_feature__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "destroy_ros_message_msg__msg__type_image_feature",
                           pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__type_image_feature__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_from_py_msg__msg__type_image_feature",
                           pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__type_image_feature__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err =
      PyModule_AddObject(pymodule, "convert_to_py_msg__msg__type_image_feature",
                         pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces,
                                                        msg, TypeImageFeature),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err =
      PyModule_AddObject(pymodule, "type_support_msg__msg__type_image_feature",
                         pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/type_integrity__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_integrity__struct.h"
#include "aspn23_ros_interfaces/msg/detail/type_integrity__type_support.h"

static void *
aspn23_ros_interfaces__msg__type_integrity__create_ros_message(void) {
  return aspn23_ros_interfaces__msg__TypeIntegrity__create();
}

static void aspn23_ros_interfaces__msg__type_integrity__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__TypeIntegrity *ros_message =
      (aspn23_ros_interfaces__msg__TypeIntegrity *)raw_ros_message;
  aspn23_ros_interfaces__msg__TypeIntegrity__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__type_integrity__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__type_integrity__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg, TypeIntegrity);

int8_t _register_msg_type__msg__type_integrity(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__type_integrity__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "create_ros_message_msg__msg__type_integrity",
                           pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__type_integrity__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "destroy_ros_message_msg__msg__type_integrity",
                           pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__type_integrity__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule, "convert_from_py_msg__msg__type_integrity",
                           pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__type_integrity__convert_to_py, NULL,
      NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule, "convert_to_py_msg__msg__type_integrity",
                           pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces,
                                                        msg, TypeIntegrity),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule, "type_support_msg__msg__type_integrity",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/type_kepler_orbit__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_kepler_orbit__struct.h"
#include "aspn23_ros_interfaces/msg/detail/type_kepler_orbit__type_support.h"

static void *
aspn23_ros_interfaces__msg__type_kepler_orbit__create_ros_message(void) {
  return aspn23_ros_interfaces__msg__TypeKeplerOrbit__create();
}

static void aspn23_ros_interfaces__msg__type_kepler_orbit__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__TypeKeplerOrbit *ros_message =
      (aspn23_ros_interfaces__msg__TypeKeplerOrbit *)raw_ros_message;
  aspn23_ros_interfaces__msg__TypeKeplerOrbit__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__type_kepler_orbit__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__type_kepler_orbit__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg, TypeKeplerOrbit);

int8_t _register_msg_type__msg__type_kepler_orbit(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__type_kepler_orbit__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "create_ros_message_msg__msg__type_kepler_orbit",
                           pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__type_kepler_orbit__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "destroy_ros_message_msg__msg__type_kepler_orbit",
                           pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__type_kepler_orbit__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_from_py_msg__msg__type_kepler_orbit",
                           pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__type_kepler_orbit__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err =
      PyModule_AddObject(pymodule, "convert_to_py_msg__msg__type_kepler_orbit",
                         pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces,
                                                        msg, TypeKeplerOrbit),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule, "type_support_msg__msg__type_kepler_orbit",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/type_metadataheader__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_metadataheader__struct.h"
#include "aspn23_ros_interfaces/msg/detail/type_metadataheader__type_support.h"

static void *
aspn23_ros_interfaces__msg__type_metadataheader__create_ros_message(void) {
  return aspn23_ros_interfaces__msg__TypeMetadataheader__create();
}

static void
aspn23_ros_interfaces__msg__type_metadataheader__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__TypeMetadataheader *ros_message =
      (aspn23_ros_interfaces__msg__TypeMetadataheader *)raw_ros_message;
  aspn23_ros_interfaces__msg__TypeMetadataheader__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__type_metadataheader__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__type_metadataheader__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg, TypeMetadataheader);

int8_t _register_msg_type__msg__type_metadataheader(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__type_metadataheader__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "create_ros_message_msg__msg__type_metadataheader",
                           pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__type_metadataheader__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "destroy_ros_message_msg__msg__type_metadataheader",
                           pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__type_metadataheader__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_from_py_msg__msg__type_metadataheader",
                           pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__type_metadataheader__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_to_py_msg__msg__type_metadataheader",
                           pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(
                        aspn23_ros_interfaces, msg, TypeMetadataheader),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err =
      PyModule_AddObject(pymodule, "type_support_msg__msg__type_metadataheader",
                         pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/type_mounting__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_mounting__struct.h"
#include "aspn23_ros_interfaces/msg/detail/type_mounting__type_support.h"

static void *
aspn23_ros_interfaces__msg__type_mounting__create_ros_message(void) {
  return aspn23_ros_interfaces__msg__TypeMounting__create();
}

static void aspn23_ros_interfaces__msg__type_mounting__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__TypeMounting *ros_message =
      (aspn23_ros_interfaces__msg__TypeMounting *)raw_ros_message;
  aspn23_ros_interfaces__msg__TypeMounting__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__type_mounting__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *
aspn23_ros_interfaces__msg__type_mounting__convert_to_py(void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg, TypeMounting);

int8_t _register_msg_type__msg__type_mounting(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__type_mounting__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err =
      PyModule_AddObject(pymodule, "create_ros_message_msg__msg__type_mounting",
                         pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__type_mounting__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "destroy_ros_message_msg__msg__type_mounting",
                           pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__type_mounting__convert_from_py, NULL,
      NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule, "convert_from_py_msg__msg__type_mounting",
                           pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__type_mounting__convert_to_py, NULL,
      NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule, "convert_to_py_msg__msg__type_mounting",
                           pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces,
                                                        msg, TypeMounting),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule, "type_support_msg__msg__type_mounting",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/type_remote_point__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_remote_point__struct.h"
#include "aspn23_ros_interfaces/msg/detail/type_remote_point__type_support.h"

static void *
aspn23_ros_interfaces__msg__type_remote_point__create_ros_message(void) {
  return aspn23_ros_interfaces__msg__TypeRemotePoint__create();
}

static void aspn23_ros_interfaces__msg__type_remote_point__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__TypeRemotePoint *ros_message =
      (aspn23_ros_interfaces__msg__TypeRemotePoint *)raw_ros_message;
  aspn23_ros_interfaces__msg__TypeRemotePoint__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__type_remote_point__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__type_remote_point__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg, TypeRemotePoint);

int8_t _register_msg_type__msg__type_remote_point(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__type_remote_point__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "create_ros_message_msg__msg__type_remote_point",
                           pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__type_remote_point__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "destroy_ros_message_msg__msg__type_remote_point",
                           pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__type_remote_point__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_from_py_msg__msg__type_remote_point",
                           pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__type_remote_point__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err =
      PyModule_AddObject(pymodule, "convert_to_py_msg__msg__type_remote_point",
                         pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces,
                                                        msg, TypeRemotePoint),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule, "type_support_msg__msg__type_remote_point",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_clock__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_clock__struct.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_clock__type_support.h"

static void *
aspn23_ros_interfaces__msg__type_satnav_clock__create_ros_message(void) {
  return aspn23_ros_interfaces__msg__TypeSatnavClock__create();
}

static void aspn23_ros_interfaces__msg__type_satnav_clock__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__TypeSatnavClock *ros_message =
      (aspn23_ros_interfaces__msg__TypeSatnavClock *)raw_ros_message;
  aspn23_ros_interfaces__msg__TypeSatnavClock__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__type_satnav_clock__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__type_satnav_clock__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg, TypeSatnavClock);

int8_t _register_msg_type__msg__type_satnav_clock(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__type_satnav_clock__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "create_ros_message_msg__msg__type_satnav_clock",
                           pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__type_satnav_clock__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "destroy_ros_message_msg__msg__type_satnav_clock",
                           pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__type_satnav_clock__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_from_py_msg__msg__type_satnav_clock",
                           pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__type_satnav_clock__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err =
      PyModule_AddObject(pymodule, "convert_to_py_msg__msg__type_satnav_clock",
                         pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces,
                                                        msg, TypeSatnavClock),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule, "type_support_msg__msg__type_satnav_clock",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_obs__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_obs__struct.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_obs__type_support.h"

static void *
aspn23_ros_interfaces__msg__type_satnav_obs__create_ros_message(void) {
  return aspn23_ros_interfaces__msg__TypeSatnavObs__create();
}

static void aspn23_ros_interfaces__msg__type_satnav_obs__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__TypeSatnavObs *ros_message =
      (aspn23_ros_interfaces__msg__TypeSatnavObs *)raw_ros_message;
  aspn23_ros_interfaces__msg__TypeSatnavObs__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__type_satnav_obs__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__type_satnav_obs__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg, TypeSatnavObs);

int8_t _register_msg_type__msg__type_satnav_obs(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__type_satnav_obs__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "create_ros_message_msg__msg__type_satnav_obs",
                           pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__type_satnav_obs__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "destroy_ros_message_msg__msg__type_satnav_obs",
                           pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__type_satnav_obs__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err =
      PyModule_AddObject(pymodule, "convert_from_py_msg__msg__type_satnav_obs",
                         pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__type_satnav_obs__convert_to_py, NULL,
      NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule, "convert_to_py_msg__msg__type_satnav_obs",
                           pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces,
                                                        msg, TypeSatnavObs),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule, "type_support_msg__msg__type_satnav_obs",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_satellite_system__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_satellite_system__struct.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_satellite_system__type_support.h"

static void *
aspn23_ros_interfaces__msg__type_satnav_satellite_system__create_ros_message(
    void) {
  return aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__create();
}

static void
aspn23_ros_interfaces__msg__type_satnav_satellite_system__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem *ros_message =
      (aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem *)raw_ros_message;
  aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__type_satnav_satellite_system__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *
aspn23_ros_interfaces__msg__type_satnav_satellite_system__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                TypeSatnavSatelliteSystem);

int8_t
_register_msg_type__msg__type_satnav_satellite_system(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__type_satnav_satellite_system__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "create_ros_message_msg__msg__type_satnav_satellite_system",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__type_satnav_satellite_system__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "destroy_ros_message_msg__msg__type_satnav_satellite_system",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__type_satnav_satellite_system__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_from_py_msg__msg__type_satnav_satellite_system",
      pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__type_satnav_satellite_system__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_to_py_msg__msg__type_satnav_satellite_system",
      pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(
                        aspn23_ros_interfaces, msg, TypeSatnavSatelliteSystem),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "type_support_msg__msg__type_satnav_satellite_system",
      pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_signal_descriptor__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_signal_descriptor__struct.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_signal_descriptor__type_support.h"

static void *
aspn23_ros_interfaces__msg__type_satnav_signal_descriptor__create_ros_message(
    void) {
  return aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__create();
}

static void
aspn23_ros_interfaces__msg__type_satnav_signal_descriptor__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor *ros_message =
      (aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor *)raw_ros_message;
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__type_satnav_signal_descriptor__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *
aspn23_ros_interfaces__msg__type_satnav_signal_descriptor__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                TypeSatnavSignalDescriptor);

int8_t
_register_msg_type__msg__type_satnav_signal_descriptor(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__type_satnav_signal_descriptor__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "create_ros_message_msg__msg__type_satnav_signal_descriptor",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__type_satnav_signal_descriptor__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "destroy_ros_message_msg__msg__type_satnav_signal_descriptor",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__type_satnav_signal_descriptor__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_from_py_msg__msg__type_satnav_signal_descriptor",
      pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__type_satnav_signal_descriptor__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_to_py_msg__msg__type_satnav_signal_descriptor",
      pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(
                        aspn23_ros_interfaces, msg, TypeSatnavSignalDescriptor),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "type_support_msg__msg__type_satnav_signal_descriptor",
      pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_sv_data__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_sv_data__struct.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_sv_data__type_support.h"

static void *
aspn23_ros_interfaces__msg__type_satnav_sv_data__create_ros_message(void) {
  return aspn23_ros_interfaces__msg__TypeSatnavSvData__create();
}

static void
aspn23_ros_interfaces__msg__type_satnav_sv_data__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__TypeSatnavSvData *ros_message =
      (aspn23_ros_interfaces__msg__TypeSatnavSvData *)raw_ros_message;
  aspn23_ros_interfaces__msg__TypeSatnavSvData__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__type_satnav_sv_data__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__type_satnav_sv_data__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg, TypeSatnavSvData);

int8_t _register_msg_type__msg__type_satnav_sv_data(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__type_satnav_sv_data__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "create_ros_message_msg__msg__type_satnav_sv_data",
                           pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__type_satnav_sv_data__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "destroy_ros_message_msg__msg__type_satnav_sv_data",
                           pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__type_satnav_sv_data__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_from_py_msg__msg__type_satnav_sv_data",
                           pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__type_satnav_sv_data__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_to_py_msg__msg__type_satnav_sv_data",
                           pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces,
                                                        msg, TypeSatnavSvData),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err =
      PyModule_AddObject(pymodule, "type_support_msg__msg__type_satnav_sv_data",
                         pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_time__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_time__struct.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_time__type_support.h"

static void *
aspn23_ros_interfaces__msg__type_satnav_time__create_ros_message(void) {
  return aspn23_ros_interfaces__msg__TypeSatnavTime__create();
}

static void aspn23_ros_interfaces__msg__type_satnav_time__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__TypeSatnavTime *ros_message =
      (aspn23_ros_interfaces__msg__TypeSatnavTime *)raw_ros_message;
  aspn23_ros_interfaces__msg__TypeSatnavTime__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__type_satnav_time__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__type_satnav_time__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg, TypeSatnavTime);

int8_t _register_msg_type__msg__type_satnav_time(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__type_satnav_time__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "create_ros_message_msg__msg__type_satnav_time",
                           pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__type_satnav_time__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "destroy_ros_message_msg__msg__type_satnav_time",
                           pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__type_satnav_time__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err =
      PyModule_AddObject(pymodule, "convert_from_py_msg__msg__type_satnav_time",
                         pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__type_satnav_time__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule, "convert_to_py_msg__msg__type_satnav_time",
                           pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces,
                                                        msg, TypeSatnavTime),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule, "type_support_msg__msg__type_satnav_time",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__struct.h"
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__type_support.h"

static void *
aspn23_ros_interfaces__msg__type_timestamp__create_ros_message(void) {
  return aspn23_ros_interfaces__msg__TypeTimestamp__create();
}

static void aspn23_ros_interfaces__msg__type_timestamp__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__TypeTimestamp *ros_message =
      (aspn23_ros_interfaces__msg__TypeTimestamp *)raw_ros_message;
  aspn23_ros_interfaces__msg__TypeTimestamp__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__type_timestamp__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__type_timestamp__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg, TypeTimestamp);

int8_t _register_msg_type__msg__type_timestamp(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__type_timestamp__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "create_ros_message_msg__msg__type_timestamp",
                           pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__type_timestamp__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "destroy_ros_message_msg__msg__type_timestamp",
                           pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__type_timestamp__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule, "convert_from_py_msg__msg__type_timestamp",
                           pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__type_timestamp__convert_to_py, NULL,
      NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule, "convert_to_py_msg__msg__type_timestamp",
                           pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces,
                                                        msg, TypeTimestamp),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule, "type_support_msg__msg__type_timestamp",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_beidou_ephemeris__functions.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_beidou_ephemeris__struct.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_beidou_ephemeris__type_support.h"

static void *
aspn23_ros_interfaces__msg__metadata_beidou_ephemeris__create_ros_message(
    void) {
  return aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__create();
}

static void
aspn23_ros_interfaces__msg__metadata_beidou_ephemeris__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MetadataBeidouEphemeris *ros_message =
      (aspn23_ros_interfaces__msg__MetadataBeidouEphemeris *)raw_ros_message;
  aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__metadata_beidou_ephemeris__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__metadata_beidou_ephemeris__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MetadataBeidouEphemeris);

int8_t _register_msg_type__msg__metadata_beidou_ephemeris(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_beidou_ephemeris__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "create_ros_message_msg__msg__metadata_beidou_ephemeris",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_beidou_ephemeris__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "destroy_ros_message_msg__msg__metadata_beidou_ephemeris",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_beidou_ephemeris__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_from_py_msg__msg__metadata_beidou_ephemeris",
      pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_beidou_ephemeris__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_to_py_msg__msg__metadata_beidou_ephemeris",
                           pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(
                        aspn23_ros_interfaces, msg, MetadataBeidouEphemeris),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "type_support_msg__msg__metadata_beidou_ephemeris",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_glonass_ephemeris__functions.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_glonass_ephemeris__struct.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_glonass_ephemeris__type_support.h"

static void *
aspn23_ros_interfaces__msg__metadata_glonass_ephemeris__create_ros_message(
    void) {
  return aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__create();
}

static void
aspn23_ros_interfaces__msg__metadata_glonass_ephemeris__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MetadataGlonassEphemeris *ros_message =
      (aspn23_ros_interfaces__msg__MetadataGlonassEphemeris *)raw_ros_message;
  aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__metadata_glonass_ephemeris__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__metadata_glonass_ephemeris__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MetadataGlonassEphemeris);

int8_t _register_msg_type__msg__metadata_glonass_ephemeris(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_glonass_ephemeris__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "create_ros_message_msg__msg__metadata_glonass_ephemeris",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_glonass_ephemeris__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "destroy_ros_message_msg__msg__metadata_glonass_ephemeris",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_glonass_ephemeris__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_from_py_msg__msg__metadata_glonass_ephemeris",
      pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_glonass_ephemeris__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_to_py_msg__msg__metadata_glonass_ephemeris",
                           pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(
                        aspn23_ros_interfaces, msg, MetadataGlonassEphemeris),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "type_support_msg__msg__metadata_glonass_ephemeris",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_gps_cnav_ephemeris__functions.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_gps_cnav_ephemeris__struct.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_gps_cnav_ephemeris__type_support.h"

static void *
aspn23_ros_interfaces__msg__metadata_gps_cnav_ephemeris__create_ros_message(
    void) {
  return aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__create();
}

static void
aspn23_ros_interfaces__msg__metadata_gps_cnav_ephemeris__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris *ros_message =
      (aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris *)raw_ros_message;
  aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__metadata_gps_cnav_ephemeris__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *
aspn23_ros_interfaces__msg__metadata_gps_cnav_ephemeris__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MetadataGpsCnavEphemeris);

int8_t
_register_msg_type__msg__metadata_gps_cnav_ephemeris(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_gps_cnav_ephemeris__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "create_ros_message_msg__msg__metadata_gps_cnav_ephemeris",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_gps_cnav_ephemeris__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "destroy_ros_message_msg__msg__metadata_gps_cnav_ephemeris",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_gps_cnav_ephemeris__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_from_py_msg__msg__metadata_gps_cnav_ephemeris",
      pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_gps_cnav_ephemeris__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_to_py_msg__msg__metadata_gps_cnav_ephemeris",
      pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(
                        aspn23_ros_interfaces, msg, MetadataGpsCnavEphemeris),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "type_support_msg__msg__metadata_gps_cnav_ephemeris",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_gps_lnav_ephemeris__functions.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_gps_lnav_ephemeris__struct.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_gps_lnav_ephemeris__type_support.h"

static void *
aspn23_ros_interfaces__msg__metadata_gps_lnav_ephemeris__create_ros_message(
    void) {
  return aspn23_ros_interfaces__msg__MetadataGpsLnavEphemeris__create();
}

static void
aspn23_ros_interfaces__msg__metadata_gps_lnav_ephemeris__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MetadataGpsLnavEphemeris *ros_message =
      (aspn23_ros_interfaces__msg__MetadataGpsLnavEphemeris *)raw_ros_message;
  aspn23_ros_interfaces__msg__MetadataGpsLnavEphemeris__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__metadata_gps_lnav_ephemeris__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *
aspn23_ros_interfaces__msg__metadata_gps_lnav_ephemeris__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MetadataGpsLnavEphemeris);

int8_t
_register_msg_type__msg__metadata_gps_lnav_ephemeris(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_gps_lnav_ephemeris__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "create_ros_message_msg__msg__metadata_gps_lnav_ephemeris",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_gps_lnav_ephemeris__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "destroy_ros_message_msg__msg__metadata_gps_lnav_ephemeris",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_gps_lnav_ephemeris__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_from_py_msg__msg__metadata_gps_lnav_ephemeris",
      pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_gps_lnav_ephemeris__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_to_py_msg__msg__metadata_gps_lnav_ephemeris",
      pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(
                        aspn23_ros_interfaces, msg, MetadataGpsLnavEphemeris),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "type_support_msg__msg__metadata_gps_lnav_ephemeris",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_gps_mnav_ephemeris__functions.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_gps_mnav_ephemeris__struct.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_gps_mnav_ephemeris__type_support.h"

static void *
aspn23_ros_interfaces__msg__metadata_gps_mnav_ephemeris__create_ros_message(
    void) {
  return aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__create();
}

static void
aspn23_ros_interfaces__msg__metadata_gps_mnav_ephemeris__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris *ros_message =
      (aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris *)raw_ros_message;
  aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__metadata_gps_mnav_ephemeris__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *
aspn23_ros_interfaces__msg__metadata_gps_mnav_ephemeris__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MetadataGpsMnavEphemeris);

int8_t
_register_msg_type__msg__metadata_gps_mnav_ephemeris(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_gps_mnav_ephemeris__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "create_ros_message_msg__msg__metadata_gps_mnav_ephemeris",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_gps_mnav_ephemeris__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "destroy_ros_message_msg__msg__metadata_gps_mnav_ephemeris",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_gps_mnav_ephemeris__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_from_py_msg__msg__metadata_gps_mnav_ephemeris",
      pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_gps_mnav_ephemeris__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_to_py_msg__msg__metadata_gps_mnav_ephemeris",
      pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(
                        aspn23_ros_interfaces, msg, MetadataGpsMnavEphemeris),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "type_support_msg__msg__metadata_gps_mnav_ephemeris",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_gps_iono_utc_parameters__functions.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_gps_iono_utc_parameters__struct.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_gps_iono_utc_parameters__type_support.h"

static void *
aspn23_ros_interfaces__msg__metadata_gps_iono_utc_parameters__create_ros_message(
    void) {
  return aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__create();
}

static void
aspn23_ros_interfaces__msg__metadata_gps_iono_utc_parameters__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters *ros_message =
      (aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters *)
          raw_ros_message;
  aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__destroy(
      ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__metadata_gps_iono_utc_parameters__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *
aspn23_ros_interfaces__msg__metadata_gps_iono_utc_parameters__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MetadataGpsIonoUtcParameters);

int8_t
_register_msg_type__msg__metadata_gps_iono_utc_parameters(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_gps_iono_utc_parameters__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "create_ros_message_msg__msg__metadata_gps_iono_utc_parameters",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_gps_iono_utc_parameters__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule,
      "destroy_ros_message_msg__msg__metadata_gps_iono_utc_parameters",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_gps_iono_utc_parameters__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_from_py_msg__msg__metadata_gps_iono_utc_parameters",
      pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_gps_iono_utc_parameters__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_to_py_msg__msg__metadata_gps_iono_utc_parameters",
      pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
      (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                          MetadataGpsIonoUtcParameters),
      NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "type_support_msg__msg__metadata_gps_iono_utc_parameters",
      pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_galileo_ephemeris__functions.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_galileo_ephemeris__struct.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_galileo_ephemeris__type_support.h"

static void *
aspn23_ros_interfaces__msg__metadata_galileo_ephemeris__create_ros_message(
    void) {
  return aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__create();
}

static void
aspn23_ros_interfaces__msg__metadata_galileo_ephemeris__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MetadataGalileoEphemeris *ros_message =
      (aspn23_ros_interfaces__msg__MetadataGalileoEphemeris *)raw_ros_message;
  aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__metadata_galileo_ephemeris__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__metadata_galileo_ephemeris__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MetadataGalileoEphemeris);

int8_t _register_msg_type__msg__metadata_galileo_ephemeris(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_galileo_ephemeris__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "create_ros_message_msg__msg__metadata_galileo_ephemeris",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_galileo_ephemeris__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "destroy_ros_message_msg__msg__metadata_galileo_ephemeris",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_galileo_ephemeris__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_from_py_msg__msg__metadata_galileo_ephemeris",
      pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_galileo_ephemeris__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_to_py_msg__msg__metadata_galileo_ephemeris",
                           pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(
                        aspn23_ros_interfaces, msg, MetadataGalileoEphemeris),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "type_support_msg__msg__metadata_galileo_ephemeris",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_imu__functions.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_imu__struct.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_imu__type_support.h"

static void *
aspn23_ros_interfaces__msg__metadata_imu__create_ros_message(void) {
  return aspn23_ros_interfaces__msg__MetadataImu__create();
}

static void aspn23_ros_interfaces__msg__metadata_imu__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MetadataImu *ros_message =
      (aspn23_ros_interfaces__msg__MetadataImu *)raw_ros_message;
  aspn23_ros_interfaces__msg__MetadataImu__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__metadata_imu__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *
aspn23_ros_interfaces__msg__metadata_imu__convert_to_py(void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg, MetadataImu);

int8_t _register_msg_type__msg__metadata_imu(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__metadata_imu__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err =
      PyModule_AddObject(pymodule, "create_ros_message_msg__msg__metadata_imu",
                         pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__metadata_imu__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err =
      PyModule_AddObject(pymodule, "destroy_ros_message_msg__msg__metadata_imu",
                         pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__metadata_imu__convert_from_py, NULL,
      NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule, "convert_from_py_msg__msg__metadata_imu",
                           pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__metadata_imu__convert_to_py, NULL,
      NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule, "convert_to_py_msg__msg__metadata_imu",
                           pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces,
                                                        msg, MetadataImu),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule, "type_support_msg__msg__metadata_imu",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_generic__functions.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_generic__struct.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_generic__type_support.h"

static void *
aspn23_ros_interfaces__msg__metadata_generic__create_ros_message(void) {
  return aspn23_ros_interfaces__msg__MetadataGeneric__create();
}

static void aspn23_ros_interfaces__msg__metadata_generic__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MetadataGeneric *ros_message =
      (aspn23_ros_interfaces__msg__MetadataGeneric *)raw_ros_message;
  aspn23_ros_interfaces__msg__MetadataGeneric__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__metadata_generic__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__metadata_generic__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg, MetadataGeneric);

int8_t _register_msg_type__msg__metadata_generic(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__metadata_generic__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "create_ros_message_msg__msg__metadata_generic",
                           pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_generic__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "destroy_ros_message_msg__msg__metadata_generic",
                           pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__metadata_generic__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err =
      PyModule_AddObject(pymodule, "convert_from_py_msg__msg__metadata_generic",
                         pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__metadata_generic__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule, "convert_to_py_msg__msg__metadata_generic",
                           pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces,
                                                        msg, MetadataGeneric),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule, "type_support_msg__msg__metadata_generic",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_image_features__functions.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_image_features__struct.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_image_features__type_support.h"

static void *
aspn23_ros_interfaces__msg__metadata_image_features__create_ros_message(void) {
  return aspn23_ros_interfaces__msg__MetadataImageFeatures__create();
}

static void
aspn23_ros_interfaces__msg__metadata_image_features__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MetadataImageFeatures *ros_message =
      (aspn23_ros_interfaces__msg__MetadataImageFeatures *)raw_ros_message;
  aspn23_ros_interfaces__msg__MetadataImageFeatures__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__metadata_image_features__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__metadata_image_features__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MetadataImageFeatures);

int8_t _register_msg_type__msg__metadata_image_features(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_image_features__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "create_ros_message_msg__msg__metadata_image_features",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_image_features__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "destroy_ros_message_msg__msg__metadata_image_features",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_image_features__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_from_py_msg__msg__metadata_image_features",
                           pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_image_features__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_to_py_msg__msg__metadata_image_features",
                           pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(
                        aspn23_ros_interfaces, msg, MetadataImageFeatures),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "type_support_msg__msg__metadata_image_features",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_magnetic_field__functions.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_magnetic_field__struct.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_magnetic_field__type_support.h"

static void *
aspn23_ros_interfaces__msg__metadata_magnetic_field__create_ros_message(void) {
  return aspn23_ros_interfaces__msg__MetadataMagneticField__create();
}

static void
aspn23_ros_interfaces__msg__metadata_magnetic_field__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MetadataMagneticField *ros_message =
      (aspn23_ros_interfaces__msg__MetadataMagneticField *)raw_ros_message;
  aspn23_ros_interfaces__msg__MetadataMagneticField__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__metadata_magnetic_field__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__metadata_magnetic_field__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MetadataMagneticField);

int8_t _register_msg_type__msg__metadata_magnetic_field(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_magnetic_field__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "create_ros_message_msg__msg__metadata_magnetic_field",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_magnetic_field__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "destroy_ros_message_msg__msg__metadata_magnetic_field",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_magnetic_field__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_from_py_msg__msg__metadata_magnetic_field",
                           pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_magnetic_field__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_to_py_msg__msg__metadata_magnetic_field",
                           pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(
                        aspn23_ros_interfaces, msg, MetadataMagneticField),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "type_support_msg__msg__metadata_magnetic_field",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_satnav_obs__functions.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_satnav_obs__struct.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_satnav_obs__type_support.h"

static void *
aspn23_ros_interfaces__msg__metadata_satnav_obs__create_ros_message(void) {
  return aspn23_ros_interfaces__msg__MetadataSatnavObs__create();
}

static void
aspn23_ros_interfaces__msg__metadata_satnav_obs__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MetadataSatnavObs *ros_message =
      (aspn23_ros_interfaces__msg__MetadataSatnavObs *)raw_ros_message;
  aspn23_ros_interfaces__msg__MetadataSatnavObs__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__metadata_satnav_obs__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__metadata_satnav_obs__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg, MetadataSatnavObs);

int8_t _register_msg_type__msg__metadata_satnav_obs(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_satnav_obs__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "create_ros_message_msg__msg__metadata_satnav_obs",
                           pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__metadata_satnav_obs__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "destroy_ros_message_msg__msg__metadata_satnav_obs",
                           pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__metadata_satnav_obs__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_from_py_msg__msg__metadata_satnav_obs",
                           pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__metadata_satnav_obs__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_to_py_msg__msg__metadata_satnav_obs",
                           pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces,
                                                        msg, MetadataSatnavObs),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err =
      PyModule_AddObject(pymodule, "type_support_msg__msg__metadata_satnav_obs",
                         pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_imu__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_imu__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_imu__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_imu__create_ros_message(void) {
  return aspn23_ros_interfaces__msg__MeasurementImu__create();
}

static void aspn23_ros_interfaces__msg__measurement_imu__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementImu *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementImu *)raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementImu__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_imu__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__measurement_imu__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg, MeasurementImu);

int8_t _register_msg_type__msg__measurement_imu(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__measurement_imu__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "create_ros_message_msg__msg__measurement_imu",
                           pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__measurement_imu__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "destroy_ros_message_msg__msg__measurement_imu",
                           pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__measurement_imu__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err =
      PyModule_AddObject(pymodule, "convert_from_py_msg__msg__measurement_imu",
                         pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__measurement_imu__convert_to_py, NULL,
      NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule, "convert_to_py_msg__msg__measurement_imu",
                           pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces,
                                                        msg, MeasurementImu),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule, "type_support_msg__msg__measurement_imu",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_tdoa1_tx2_rx__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_tdoa1_tx2_rx__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_tdoa1_tx2_rx__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_tdoa1_tx2_rx__create_ros_message(void) {
  return aspn23_ros_interfaces__msg__MeasurementTdoa1Tx2Rx__create();
}

static void
aspn23_ros_interfaces__msg__measurement_tdoa1_tx2_rx__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementTdoa1Tx2Rx *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementTdoa1Tx2Rx *)raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementTdoa1Tx2Rx__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_tdoa1_tx2_rx__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__measurement_tdoa1_tx2_rx__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MeasurementTdoa1Tx2Rx);

int8_t _register_msg_type__msg__measurement_tdoa1_tx2_rx(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_tdoa1_tx2_rx__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "create_ros_message_msg__msg__measurement_tdoa1_tx2_rx",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_tdoa1_tx2_rx__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "destroy_ros_message_msg__msg__measurement_tdoa1_tx2_rx",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_tdoa1_tx2_rx__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_from_py_msg__msg__measurement_tdoa1_tx2_rx",
                           pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_tdoa1_tx2_rx__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_to_py_msg__msg__measurement_tdoa1_tx2_rx",
                           pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(
                        aspn23_ros_interfaces, msg, MeasurementTdoa1Tx2Rx),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "type_support_msg__msg__measurement_tdoa1_tx2_rx",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_tdoa2_tx1_rx__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_tdoa2_tx1_rx__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_tdoa2_tx1_rx__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_tdoa2_tx1_rx__create_ros_message(void) {
  return aspn23_ros_interfaces__msg__MeasurementTdoa2Tx1Rx__create();
}

static void
aspn23_ros_interfaces__msg__measurement_tdoa2_tx1_rx__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementTdoa2Tx1Rx *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementTdoa2Tx1Rx *)raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementTdoa2Tx1Rx__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_tdoa2_tx1_rx__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__measurement_tdoa2_tx1_rx__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MeasurementTdoa2Tx1Rx);

int8_t _register_msg_type__msg__measurement_tdoa2_tx1_rx(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_tdoa2_tx1_rx__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "create_ros_message_msg__msg__measurement_tdoa2_tx1_rx",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_tdoa2_tx1_rx__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "destroy_ros_message_msg__msg__measurement_tdoa2_tx1_rx",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_tdoa2_tx1_rx__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_from_py_msg__msg__measurement_tdoa2_tx1_rx",
                           pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_tdoa2_tx1_rx__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_to_py_msg__msg__measurement_tdoa2_tx1_rx",
                           pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(
                        aspn23_ros_interfaces, msg, MeasurementTdoa2Tx1Rx),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "type_support_msg__msg__measurement_tdoa2_tx1_rx",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_accumulated_distance_traveled__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_accumulated_distance_traveled__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_accumulated_distance_traveled__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_accumulated_distance_traveled__create_ros_message(
    void) {
  return aspn23_ros_interfaces__msg__MeasurementAccumulatedDistanceTraveled__create();
}

static void
aspn23_ros_interfaces__msg__measurement_accumulated_distance_traveled__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementAccumulatedDistanceTraveled
      *ros_message =
          (aspn23_ros_interfaces__msg__MeasurementAccumulatedDistanceTraveled *)
              raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementAccumulatedDistanceTraveled__destroy(
      ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_accumulated_distance_traveled__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *
aspn23_ros_interfaces__msg__measurement_accumulated_distance_traveled__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MeasurementAccumulatedDistanceTraveled);

int8_t _register_msg_type__msg__measurement_accumulated_distance_traveled(
    PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_accumulated_distance_traveled__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule,
      "create_ros_message_msg__msg__measurement_accumulated_distance_traveled",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_accumulated_distance_traveled__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule,
      "destroy_ros_message_msg__msg__measurement_accumulated_distance_traveled",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_accumulated_distance_traveled__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule,
      "convert_from_py_msg__msg__measurement_accumulated_distance_traveled",
      pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_accumulated_distance_traveled__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule,
      "convert_to_py_msg__msg__measurement_accumulated_distance_traveled",
      pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
      (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(
          aspn23_ros_interfaces, msg, MeasurementAccumulatedDistanceTraveled),
      NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule,
      "type_support_msg__msg__measurement_accumulated_distance_traveled",
      pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_altitude__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_altitude__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_altitude__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_altitude__create_ros_message(void) {
  return aspn23_ros_interfaces__msg__MeasurementAltitude__create();
}

static void
aspn23_ros_interfaces__msg__measurement_altitude__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementAltitude *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementAltitude *)raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementAltitude__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_altitude__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__measurement_altitude__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MeasurementAltitude);

int8_t _register_msg_type__msg__measurement_altitude(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_altitude__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "create_ros_message_msg__msg__measurement_altitude",
                           pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_altitude__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "destroy_ros_message_msg__msg__measurement_altitude",
                           pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_altitude__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_from_py_msg__msg__measurement_altitude",
                           pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__measurement_altitude__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_to_py_msg__msg__measurement_altitude",
                           pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(
                        aspn23_ros_interfaces, msg, MeasurementAltitude),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "type_support_msg__msg__measurement_altitude",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_angular_velocity__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_angular_velocity__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_angular_velocity__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_angular_velocity__create_ros_message(
    void) {
  return aspn23_ros_interfaces__msg__MeasurementAngularVelocity__create();
}

static void
aspn23_ros_interfaces__msg__measurement_angular_velocity__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementAngularVelocity *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementAngularVelocity *)raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementAngularVelocity__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_angular_velocity__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *
aspn23_ros_interfaces__msg__measurement_angular_velocity__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MeasurementAngularVelocity);

int8_t
_register_msg_type__msg__measurement_angular_velocity(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_angular_velocity__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "create_ros_message_msg__msg__measurement_angular_velocity",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_angular_velocity__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "destroy_ros_message_msg__msg__measurement_angular_velocity",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_angular_velocity__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_from_py_msg__msg__measurement_angular_velocity",
      pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_angular_velocity__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_to_py_msg__msg__measurement_angular_velocity",
      pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(
                        aspn23_ros_interfaces, msg, MeasurementAngularVelocity),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "type_support_msg__msg__measurement_angular_velocity",
      pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_angular_velocity1_d__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_angular_velocity1_d__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_angular_velocity1_d__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_angular_velocity1_d__create_ros_message(
    void) {
  return aspn23_ros_interfaces__msg__MeasurementAngularVelocity1D__create();
}

static void
aspn23_ros_interfaces__msg__measurement_angular_velocity1_d__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementAngularVelocity1D *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementAngularVelocity1D *)
          raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementAngularVelocity1D__destroy(
      ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_angular_velocity1_d__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *
aspn23_ros_interfaces__msg__measurement_angular_velocity1_d__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MeasurementAngularVelocity1D);

int8_t
_register_msg_type__msg__measurement_angular_velocity1_d(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_angular_velocity1_d__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "create_ros_message_msg__msg__measurement_angular_velocity1_d",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_angular_velocity1_d__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "destroy_ros_message_msg__msg__measurement_angular_velocity1_d",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_angular_velocity1_d__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_from_py_msg__msg__measurement_angular_velocity1_d",
      pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_angular_velocity1_d__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_to_py_msg__msg__measurement_angular_velocity1_d",
      pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
      (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                          MeasurementAngularVelocity1D),
      NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "type_support_msg__msg__measurement_angular_velocity1_d",
      pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_attitude2_d__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_attitude2_d__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_attitude2_d__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_attitude2_d__create_ros_message(void) {
  return aspn23_ros_interfaces__msg__MeasurementAttitude2D__create();
}

static void
aspn23_ros_interfaces__msg__measurement_attitude2_d__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementAttitude2D *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementAttitude2D *)raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementAttitude2D__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_attitude2_d__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__measurement_attitude2_d__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MeasurementAttitude2D);

int8_t _register_msg_type__msg__measurement_attitude2_d(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_attitude2_d__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "create_ros_message_msg__msg__measurement_attitude2_d",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_attitude2_d__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "destroy_ros_message_msg__msg__measurement_attitude2_d",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_attitude2_d__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_from_py_msg__msg__measurement_attitude2_d",
                           pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_attitude2_d__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_to_py_msg__msg__measurement_attitude2_d",
                           pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(
                        aspn23_ros_interfaces, msg, MeasurementAttitude2D),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "type_support_msg__msg__measurement_attitude2_d",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_attitude3_d__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_attitude3_d__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_attitude3_d__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_attitude3_d__create_ros_message(void) {
  return aspn23_ros_interfaces__msg__MeasurementAttitude3D__create();
}

static void
aspn23_ros_interfaces__msg__measurement_attitude3_d__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementAttitude3D *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementAttitude3D *)raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementAttitude3D__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_attitude3_d__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__measurement_attitude3_d__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MeasurementAttitude3D);

int8_t _register_msg_type__msg__measurement_attitude3_d(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_attitude3_d__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "create_ros_message_msg__msg__measurement_attitude3_d",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_attitude3_d__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "destroy_ros_message_msg__msg__measurement_attitude3_d",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_attitude3_d__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_from_py_msg__msg__measurement_attitude3_d",
                           pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_attitude3_d__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_to_py_msg__msg__measurement_attitude3_d",
                           pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(
                        aspn23_ros_interfaces, msg, MeasurementAttitude3D),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "type_support_msg__msg__measurement_attitude3_d",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_barometer__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_barometer__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_barometer__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_barometer__create_ros_message(void) {
  return aspn23_ros_interfaces__msg__MeasurementBarometer__create();
}

static void
aspn23_ros_interfaces__msg__measurement_barometer__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementBarometer *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementBarometer *)raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementBarometer__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_barometer__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__measurement_barometer__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MeasurementBarometer);

int8_t _register_msg_type__msg__measurement_barometer(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_barometer__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "create_ros_message_msg__msg__measurement_barometer",
                           pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_barometer__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "destroy_ros_message_msg__msg__measurement_barometer",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_barometer__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_from_py_msg__msg__measurement_barometer",
                           pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__measurement_barometer__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_to_py_msg__msg__measurement_barometer",
                           pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(
                        aspn23_ros_interfaces, msg, MeasurementBarometer),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "type_support_msg__msg__measurement_barometer",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_delta_position__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_delta_position__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_delta_position__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_delta_position__create_ros_message(
    void) {
  return aspn23_ros_interfaces__msg__MeasurementDeltaPosition__create();
}

static void
aspn23_ros_interfaces__msg__measurement_delta_position__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementDeltaPosition *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementDeltaPosition *)raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementDeltaPosition__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_delta_position__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__measurement_delta_position__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MeasurementDeltaPosition);

int8_t _register_msg_type__msg__measurement_delta_position(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_delta_position__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "create_ros_message_msg__msg__measurement_delta_position",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_delta_position__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "destroy_ros_message_msg__msg__measurement_delta_position",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_delta_position__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_from_py_msg__msg__measurement_delta_position",
      pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_delta_position__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_to_py_msg__msg__measurement_delta_position",
                           pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(
                        aspn23_ros_interfaces, msg, MeasurementDeltaPosition),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "type_support_msg__msg__measurement_delta_position",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_delta_range__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_delta_range__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_delta_range__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_delta_range__create_ros_message(void) {
  return aspn23_ros_interfaces__msg__MeasurementDeltaRange__create();
}

static void
aspn23_ros_interfaces__msg__measurement_delta_range__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementDeltaRange *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementDeltaRange *)raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementDeltaRange__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_delta_range__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__measurement_delta_range__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MeasurementDeltaRange);

int8_t _register_msg_type__msg__measurement_delta_range(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_delta_range__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "create_ros_message_msg__msg__measurement_delta_range",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_delta_range__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "destroy_ros_message_msg__msg__measurement_delta_range",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_delta_range__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_from_py_msg__msg__measurement_delta_range",
                           pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_delta_range__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_to_py_msg__msg__measurement_delta_range",
                           pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(
                        aspn23_ros_interfaces, msg, MeasurementDeltaRange),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "type_support_msg__msg__measurement_delta_range",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_delta_range_to_point__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_delta_range_to_point__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_delta_range_to_point__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_delta_range_to_point__create_ros_message(
    void) {
  return aspn23_ros_interfaces__msg__MeasurementDeltaRangeToPoint__create();
}

static void
aspn23_ros_interfaces__msg__measurement_delta_range_to_point__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementDeltaRangeToPoint *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementDeltaRangeToPoint *)
          raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementDeltaRangeToPoint__destroy(
      ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_delta_range_to_point__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *
aspn23_ros_interfaces__msg__measurement_delta_range_to_point__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MeasurementDeltaRangeToPoint);

int8_t
_register_msg_type__msg__measurement_delta_range_to_point(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_delta_range_to_point__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "create_ros_message_msg__msg__measurement_delta_range_to_point",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_delta_range_to_point__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule,
      "destroy_ros_message_msg__msg__measurement_delta_range_to_point",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_delta_range_to_point__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_from_py_msg__msg__measurement_delta_range_to_point",
      pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_delta_range_to_point__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_to_py_msg__msg__measurement_delta_range_to_point",
      pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
      (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                          MeasurementDeltaRangeToPoint),
      NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "type_support_msg__msg__measurement_delta_range_to_point",
      pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_direction2_d_to_points__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_direction2_d_to_points__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_direction2_d_to_points__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_direction2_d_to_points__create_ros_message(
    void) {
  return aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__create();
}

static void
aspn23_ros_interfaces__msg__measurement_direction2_d_to_points__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints *)
          raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__destroy(
      ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_direction2_d_to_points__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *
aspn23_ros_interfaces__msg__measurement_direction2_d_to_points__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MeasurementDirection2DToPoints);

int8_t _register_msg_type__msg__measurement_direction2_d_to_points(
    PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_direction2_d_to_points__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule,
      "create_ros_message_msg__msg__measurement_direction2_d_to_points",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_direction2_d_to_points__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule,
      "destroy_ros_message_msg__msg__measurement_direction2_d_to_points",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_direction2_d_to_points__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_from_py_msg__msg__measurement_direction2_d_to_points",
      pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_direction2_d_to_points__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_to_py_msg__msg__measurement_direction2_d_to_points",
      pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
      (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                          MeasurementDirection2DToPoints),
      NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "type_support_msg__msg__measurement_direction2_d_to_points",
      pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_direction3_d_to_points__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_direction3_d_to_points__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_direction3_d_to_points__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_direction3_d_to_points__create_ros_message(
    void) {
  return aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints__create();
}

static void
aspn23_ros_interfaces__msg__measurement_direction3_d_to_points__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints *)
          raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints__destroy(
      ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_direction3_d_to_points__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *
aspn23_ros_interfaces__msg__measurement_direction3_d_to_points__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MeasurementDirection3DToPoints);

int8_t _register_msg_type__msg__measurement_direction3_d_to_points(
    PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_direction3_d_to_points__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule,
      "create_ros_message_msg__msg__measurement_direction3_d_to_points",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_direction3_d_to_points__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule,
      "destroy_ros_message_msg__msg__measurement_direction3_d_to_points",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_direction3_d_to_points__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_from_py_msg__msg__measurement_direction3_d_to_points",
      pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_direction3_d_to_points__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_to_py_msg__msg__measurement_direction3_d_to_points",
      pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
      (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                          MeasurementDirection3DToPoints),
      NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "type_support_msg__msg__measurement_direction3_d_to_points",
      pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_direction_of_motion2_d__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_direction_of_motion2_d__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_direction_of_motion2_d__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_direction_of_motion2_d__create_ros_message(
    void) {
  return aspn23_ros_interfaces__msg__MeasurementDirectionOfMotion2D__create();
}

static void
aspn23_ros_interfaces__msg__measurement_direction_of_motion2_d__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementDirectionOfMotion2D *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementDirectionOfMotion2D *)
          raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementDirectionOfMotion2D__destroy(
      ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_direction_of_motion2_d__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *
aspn23_ros_interfaces__msg__measurement_direction_of_motion2_d__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MeasurementDirectionOfMotion2D);

int8_t _register_msg_type__msg__measurement_direction_of_motion2_d(
    PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_direction_of_motion2_d__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule,
      "create_ros_message_msg__msg__measurement_direction_of_motion2_d",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_direction_of_motion2_d__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule,
      "destroy_ros_message_msg__msg__measurement_direction_of_motion2_d",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_direction_of_motion2_d__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_from_py_msg__msg__measurement_direction_of_motion2_d",
      pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_direction_of_motion2_d__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_to_py_msg__msg__measurement_direction_of_motion2_d",
      pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
      (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                          MeasurementDirectionOfMotion2D),
      NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "type_support_msg__msg__measurement_direction_of_motion2_d",
      pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_direction_of_motion3_d__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_direction_of_motion3_d__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_direction_of_motion3_d__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_direction_of_motion3_d__create_ros_message(
    void) {
  return aspn23_ros_interfaces__msg__MeasurementDirectionOfMotion3D__create();
}

static void
aspn23_ros_interfaces__msg__measurement_direction_of_motion3_d__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementDirectionOfMotion3D *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementDirectionOfMotion3D *)
          raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementDirectionOfMotion3D__destroy(
      ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_direction_of_motion3_d__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *
aspn23_ros_interfaces__msg__measurement_direction_of_motion3_d__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MeasurementDirectionOfMotion3D);

int8_t _register_msg_type__msg__measurement_direction_of_motion3_d(
    PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_direction_of_motion3_d__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule,
      "create_ros_message_msg__msg__measurement_direction_of_motion3_d",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_direction_of_motion3_d__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule,
      "destroy_ros_message_msg__msg__measurement_direction_of_motion3_d",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_direction_of_motion3_d__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_from_py_msg__msg__measurement_direction_of_motion3_d",
      pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_direction_of_motion3_d__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_to_py_msg__msg__measurement_direction_of_motion3_d",
      pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
      (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                          MeasurementDirectionOfMotion3D),
      NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "type_support_msg__msg__measurement_direction_of_motion3_d",
      pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_frequency_difference__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_frequency_difference__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_frequency_difference__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_frequency_difference__create_ros_message(
    void) {
  return aspn23_ros_interfaces__msg__MeasurementFrequencyDifference__create();
}

static void
aspn23_ros_interfaces__msg__measurement_frequency_difference__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementFrequencyDifference *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementFrequencyDifference *)
          raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementFrequencyDifference__destroy(
      ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_frequency_difference__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *
aspn23_ros_interfaces__msg__measurement_frequency_difference__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MeasurementFrequencyDifference);

int8_t
_register_msg_type__msg__measurement_frequency_difference(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_frequency_difference__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "create_ros_message_msg__msg__measurement_frequency_difference",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_frequency_difference__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule,
      "destroy_ros_message_msg__msg__measurement_frequency_difference",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_frequency_difference__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_from_py_msg__msg__measurement_frequency_difference",
      pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_frequency_difference__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_to_py_msg__msg__measurement_frequency_difference",
      pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
      (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                          MeasurementFrequencyDifference),
      NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "type_support_msg__msg__measurement_frequency_difference",
      pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_heading__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_heading__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_heading__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_heading__create_ros_message(void) {
  return aspn23_ros_interfaces__msg__MeasurementHeading__create();
}

static void
aspn23_ros_interfaces__msg__measurement_heading__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementHeading *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementHeading *)raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementHeading__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_heading__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__measurement_heading__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg, MeasurementHeading);

int8_t _register_msg_type__msg__measurement_heading(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_heading__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "create_ros_message_msg__msg__measurement_heading",
                           pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_heading__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "destroy_ros_message_msg__msg__measurement_heading",
                           pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__measurement_heading__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_from_py_msg__msg__measurement_heading",
                           pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__measurement_heading__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_to_py_msg__msg__measurement_heading",
                           pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(
                        aspn23_ros_interfaces, msg, MeasurementHeading),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err =
      PyModule_AddObject(pymodule, "type_support_msg__msg__measurement_heading",
                         pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_image__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_image__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_image__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_image__create_ros_message(void) {
  return aspn23_ros_interfaces__msg__MeasurementImage__create();
}

static void aspn23_ros_interfaces__msg__measurement_image__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementImage *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementImage *)raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementImage__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_image__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__measurement_image__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg, MeasurementImage);

int8_t _register_msg_type__msg__measurement_image(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_image__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "create_ros_message_msg__msg__measurement_image",
                           pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_image__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "destroy_ros_message_msg__msg__measurement_image",
                           pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__measurement_image__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_from_py_msg__msg__measurement_image",
                           pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__measurement_image__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err =
      PyModule_AddObject(pymodule, "convert_to_py_msg__msg__measurement_image",
                         pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces,
                                                        msg, MeasurementImage),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule, "type_support_msg__msg__measurement_image",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_magnetic_field__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_magnetic_field__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_magnetic_field__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_magnetic_field__create_ros_message(
    void) {
  return aspn23_ros_interfaces__msg__MeasurementMagneticField__create();
}

static void
aspn23_ros_interfaces__msg__measurement_magnetic_field__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementMagneticField *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementMagneticField *)raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementMagneticField__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_magnetic_field__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__measurement_magnetic_field__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MeasurementMagneticField);

int8_t _register_msg_type__msg__measurement_magnetic_field(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_magnetic_field__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "create_ros_message_msg__msg__measurement_magnetic_field",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_magnetic_field__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "destroy_ros_message_msg__msg__measurement_magnetic_field",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_magnetic_field__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_from_py_msg__msg__measurement_magnetic_field",
      pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_magnetic_field__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_to_py_msg__msg__measurement_magnetic_field",
                           pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(
                        aspn23_ros_interfaces, msg, MeasurementMagneticField),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "type_support_msg__msg__measurement_magnetic_field",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_magnetic_field_magnitude__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_magnetic_field_magnitude__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_magnetic_field_magnitude__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_magnetic_field_magnitude__create_ros_message(
    void) {
  return aspn23_ros_interfaces__msg__MeasurementMagneticFieldMagnitude__create();
}

static void
aspn23_ros_interfaces__msg__measurement_magnetic_field_magnitude__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementMagneticFieldMagnitude *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementMagneticFieldMagnitude *)
          raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementMagneticFieldMagnitude__destroy(
      ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_magnetic_field_magnitude__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *
aspn23_ros_interfaces__msg__measurement_magnetic_field_magnitude__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MeasurementMagneticFieldMagnitude);

int8_t _register_msg_type__msg__measurement_magnetic_field_magnitude(
    PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_magnetic_field_magnitude__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule,
      "create_ros_message_msg__msg__measurement_magnetic_field_magnitude",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_magnetic_field_magnitude__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule,
      "destroy_ros_message_msg__msg__measurement_magnetic_field_magnitude",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_magnetic_field_magnitude__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule,
      "convert_from_py_msg__msg__measurement_magnetic_field_magnitude",
      pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_magnetic_field_magnitude__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_to_py_msg__msg__measurement_magnetic_field_magnitude",
      pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
      (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                          MeasurementMagneticFieldMagnitude),
      NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "type_support_msg__msg__measurement_magnetic_field_magnitude",
      pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_position__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_position__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_position__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_position__create_ros_message(void) {
  return aspn23_ros_interfaces__msg__MeasurementPosition__create();
}

static void
aspn23_ros_interfaces__msg__measurement_position__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementPosition *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementPosition *)raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementPosition__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_position__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__measurement_position__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MeasurementPosition);

int8_t _register_msg_type__msg__measurement_position(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_position__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "create_ros_message_msg__msg__measurement_position",
                           pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_position__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "destroy_ros_message_msg__msg__measurement_position",
                           pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_position__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_from_py_msg__msg__measurement_position",
                           pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__measurement_position__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_to_py_msg__msg__measurement_position",
                           pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(
                        aspn23_ros_interfaces, msg, MeasurementPosition),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "type_support_msg__msg__measurement_position",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_position_attitude__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_position_attitude__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_position_attitude__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_position_attitude__create_ros_message(
    void) {
  return aspn23_ros_interfaces__msg__MeasurementPositionAttitude__create();
}

static void
aspn23_ros_interfaces__msg__measurement_position_attitude__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementPositionAttitude *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementPositionAttitude *)
          raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementPositionAttitude__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_position_attitude__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *
aspn23_ros_interfaces__msg__measurement_position_attitude__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MeasurementPositionAttitude);

int8_t
_register_msg_type__msg__measurement_position_attitude(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_position_attitude__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "create_ros_message_msg__msg__measurement_position_attitude",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_position_attitude__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "destroy_ros_message_msg__msg__measurement_position_attitude",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_position_attitude__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_from_py_msg__msg__measurement_position_attitude",
      pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_position_attitude__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_to_py_msg__msg__measurement_position_attitude",
      pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
      (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                          MeasurementPositionAttitude),
      NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "type_support_msg__msg__measurement_position_attitude",
      pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_position_velocity_attitude__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_position_velocity_attitude__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_position_velocity_attitude__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_position_velocity_attitude__create_ros_message(
    void) {
  return aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__create();
}

static void
aspn23_ros_interfaces__msg__measurement_position_velocity_attitude__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude *)
          raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__destroy(
      ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_position_velocity_attitude__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *
aspn23_ros_interfaces__msg__measurement_position_velocity_attitude__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MeasurementPositionVelocityAttitude);

int8_t _register_msg_type__msg__measurement_position_velocity_attitude(
    PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_position_velocity_attitude__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule,
      "create_ros_message_msg__msg__measurement_position_velocity_attitude",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_position_velocity_attitude__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule,
      "destroy_ros_message_msg__msg__measurement_position_velocity_attitude",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_position_velocity_attitude__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule,
      "convert_from_py_msg__msg__measurement_position_velocity_attitude",
      pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_position_velocity_attitude__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule,
      "convert_to_py_msg__msg__measurement_position_velocity_attitude",
      pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
      (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                          MeasurementPositionVelocityAttitude),
      NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "type_support_msg__msg__measurement_position_velocity_attitude",
      pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_range_rate_to_point__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_range_rate_to_point__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_range_rate_to_point__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_range_rate_to_point__create_ros_message(
    void) {
  return aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint__create();
}

static void
aspn23_ros_interfaces__msg__measurement_range_rate_to_point__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint *)
          raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_range_rate_to_point__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *
aspn23_ros_interfaces__msg__measurement_range_rate_to_point__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MeasurementRangeRateToPoint);

int8_t
_register_msg_type__msg__measurement_range_rate_to_point(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_range_rate_to_point__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "create_ros_message_msg__msg__measurement_range_rate_to_point",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_range_rate_to_point__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "destroy_ros_message_msg__msg__measurement_range_rate_to_point",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_range_rate_to_point__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_from_py_msg__msg__measurement_range_rate_to_point",
      pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_range_rate_to_point__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_to_py_msg__msg__measurement_range_rate_to_point",
      pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
      (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                          MeasurementRangeRateToPoint),
      NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "type_support_msg__msg__measurement_range_rate_to_point",
      pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_range_to_point__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_range_to_point__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_range_to_point__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_range_to_point__create_ros_message(
    void) {
  return aspn23_ros_interfaces__msg__MeasurementRangeToPoint__create();
}

static void
aspn23_ros_interfaces__msg__measurement_range_to_point__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementRangeToPoint *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementRangeToPoint *)raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementRangeToPoint__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_range_to_point__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__measurement_range_to_point__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MeasurementRangeToPoint);

int8_t _register_msg_type__msg__measurement_range_to_point(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_range_to_point__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "create_ros_message_msg__msg__measurement_range_to_point",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_range_to_point__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "destroy_ros_message_msg__msg__measurement_range_to_point",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_range_to_point__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_from_py_msg__msg__measurement_range_to_point",
      pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_range_to_point__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_to_py_msg__msg__measurement_range_to_point",
                           pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(
                        aspn23_ros_interfaces, msg, MeasurementRangeToPoint),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "type_support_msg__msg__measurement_range_to_point",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_satnav__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_satnav__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_satnav__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_satnav__create_ros_message(void) {
  return aspn23_ros_interfaces__msg__MeasurementSatnav__create();
}

static void aspn23_ros_interfaces__msg__measurement_satnav__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementSatnav *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementSatnav *)raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementSatnav__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_satnav__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__measurement_satnav__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg, MeasurementSatnav);

int8_t _register_msg_type__msg__measurement_satnav(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_satnav__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "create_ros_message_msg__msg__measurement_satnav",
                           pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_satnav__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "destroy_ros_message_msg__msg__measurement_satnav",
                           pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__measurement_satnav__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_from_py_msg__msg__measurement_satnav",
                           pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__measurement_satnav__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err =
      PyModule_AddObject(pymodule, "convert_to_py_msg__msg__measurement_satnav",
                         pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces,
                                                        msg, MeasurementSatnav),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err =
      PyModule_AddObject(pymodule, "type_support_msg__msg__measurement_satnav",
                         pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_satnav_subframe__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_satnav_subframe__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_satnav_subframe__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_satnav_subframe__create_ros_message(
    void) {
  return aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__create();
}

static void
aspn23_ros_interfaces__msg__measurement_satnav_subframe__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementSatnavSubframe *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementSatnavSubframe *)raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_satnav_subframe__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *
aspn23_ros_interfaces__msg__measurement_satnav_subframe__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MeasurementSatnavSubframe);

int8_t
_register_msg_type__msg__measurement_satnav_subframe(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_satnav_subframe__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "create_ros_message_msg__msg__measurement_satnav_subframe",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_satnav_subframe__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "destroy_ros_message_msg__msg__measurement_satnav_subframe",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_satnav_subframe__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_from_py_msg__msg__measurement_satnav_subframe",
      pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_satnav_subframe__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_to_py_msg__msg__measurement_satnav_subframe",
      pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(
                        aspn23_ros_interfaces, msg, MeasurementSatnavSubframe),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "type_support_msg__msg__measurement_satnav_subframe",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_satnav_with_sv_data__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_satnav_with_sv_data__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_satnav_with_sv_data__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_satnav_with_sv_data__create_ros_message(
    void) {
  return aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__create();
}

static void
aspn23_ros_interfaces__msg__measurement_satnav_with_sv_data__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData *)
          raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_satnav_with_sv_data__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *
aspn23_ros_interfaces__msg__measurement_satnav_with_sv_data__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MeasurementSatnavWithSvData);

int8_t
_register_msg_type__msg__measurement_satnav_with_sv_data(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_satnav_with_sv_data__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "create_ros_message_msg__msg__measurement_satnav_with_sv_data",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_satnav_with_sv_data__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "destroy_ros_message_msg__msg__measurement_satnav_with_sv_data",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_satnav_with_sv_data__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_from_py_msg__msg__measurement_satnav_with_sv_data",
      pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_satnav_with_sv_data__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_to_py_msg__msg__measurement_satnav_with_sv_data",
      pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
      (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                          MeasurementSatnavWithSvData),
      NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "type_support_msg__msg__measurement_satnav_with_sv_data",
      pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_specific_force1_d__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_specific_force1_d__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_specific_force1_d__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_specific_force1_d__create_ros_message(
    void) {
  return aspn23_ros_interfaces__msg__MeasurementSpecificForce1D__create();
}

static void
aspn23_ros_interfaces__msg__measurement_specific_force1_d__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementSpecificForce1D *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementSpecificForce1D *)raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementSpecificForce1D__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_specific_force1_d__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *
aspn23_ros_interfaces__msg__measurement_specific_force1_d__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MeasurementSpecificForce1D);

int8_t
_register_msg_type__msg__measurement_specific_force1_d(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_specific_force1_d__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "create_ros_message_msg__msg__measurement_specific_force1_d",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_specific_force1_d__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "destroy_ros_message_msg__msg__measurement_specific_force1_d",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_specific_force1_d__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_from_py_msg__msg__measurement_specific_force1_d",
      pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_specific_force1_d__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_to_py_msg__msg__measurement_specific_force1_d",
      pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(
                        aspn23_ros_interfaces, msg, MeasurementSpecificForce1D),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "type_support_msg__msg__measurement_specific_force1_d",
      pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_speed__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_speed__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_speed__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_speed__create_ros_message(void) {
  return aspn23_ros_interfaces__msg__MeasurementSpeed__create();
}

static void aspn23_ros_interfaces__msg__measurement_speed__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementSpeed *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementSpeed *)raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementSpeed__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_speed__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__measurement_speed__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg, MeasurementSpeed);

int8_t _register_msg_type__msg__measurement_speed(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_speed__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "create_ros_message_msg__msg__measurement_speed",
                           pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_speed__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "destroy_ros_message_msg__msg__measurement_speed",
                           pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__measurement_speed__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_from_py_msg__msg__measurement_speed",
                           pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__measurement_speed__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err =
      PyModule_AddObject(pymodule, "convert_to_py_msg__msg__measurement_speed",
                         pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces,
                                                        msg, MeasurementSpeed),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule, "type_support_msg__msg__measurement_speed",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_temperature__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_temperature__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_temperature__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_temperature__create_ros_message(void) {
  return aspn23_ros_interfaces__msg__MeasurementTemperature__create();
}

static void
aspn23_ros_interfaces__msg__measurement_temperature__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementTemperature *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementTemperature *)raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementTemperature__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_temperature__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__measurement_temperature__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MeasurementTemperature);

int8_t _register_msg_type__msg__measurement_temperature(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_temperature__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "create_ros_message_msg__msg__measurement_temperature",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_temperature__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "destroy_ros_message_msg__msg__measurement_temperature",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_temperature__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_from_py_msg__msg__measurement_temperature",
                           pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_temperature__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_to_py_msg__msg__measurement_temperature",
                           pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(
                        aspn23_ros_interfaces, msg, MeasurementTemperature),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "type_support_msg__msg__measurement_temperature",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_time__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_time__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_time__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_time__create_ros_message(void) {
  return aspn23_ros_interfaces__msg__MeasurementTime__create();
}

static void aspn23_ros_interfaces__msg__measurement_time__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementTime *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementTime *)raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementTime__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_time__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__measurement_time__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg, MeasurementTime);

int8_t _register_msg_type__msg__measurement_time(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__measurement_time__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "create_ros_message_msg__msg__measurement_time",
                           pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_time__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "destroy_ros_message_msg__msg__measurement_time",
                           pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__measurement_time__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err =
      PyModule_AddObject(pymodule, "convert_from_py_msg__msg__measurement_time",
                         pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__measurement_time__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule, "convert_to_py_msg__msg__measurement_time",
                           pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces,
                                                        msg, MeasurementTime),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule, "type_support_msg__msg__measurement_time",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_time_difference__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_time_difference__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_time_difference__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_time_difference__create_ros_message(
    void) {
  return aspn23_ros_interfaces__msg__MeasurementTimeDifference__create();
}

static void
aspn23_ros_interfaces__msg__measurement_time_difference__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementTimeDifference *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementTimeDifference *)raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementTimeDifference__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_time_difference__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *
aspn23_ros_interfaces__msg__measurement_time_difference__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MeasurementTimeDifference);

int8_t
_register_msg_type__msg__measurement_time_difference(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_time_difference__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "create_ros_message_msg__msg__measurement_time_difference",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_time_difference__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "destroy_ros_message_msg__msg__measurement_time_difference",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_time_difference__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_from_py_msg__msg__measurement_time_difference",
      pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_time_difference__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_to_py_msg__msg__measurement_time_difference",
      pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(
                        aspn23_ros_interfaces, msg, MeasurementTimeDifference),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "type_support_msg__msg__measurement_time_difference",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_time_frequency_difference__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_time_frequency_difference__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_time_frequency_difference__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_time_frequency_difference__create_ros_message(
    void) {
  return aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__create();
}

static void
aspn23_ros_interfaces__msg__measurement_time_frequency_difference__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference *)
          raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__destroy(
      ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_time_frequency_difference__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *
aspn23_ros_interfaces__msg__measurement_time_frequency_difference__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MeasurementTimeFrequencyDifference);

int8_t _register_msg_type__msg__measurement_time_frequency_difference(
    PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_time_frequency_difference__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule,
      "create_ros_message_msg__msg__measurement_time_frequency_difference",
      pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_time_frequency_difference__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule,
      "destroy_ros_message_msg__msg__measurement_time_frequency_difference",
      pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_time_frequency_difference__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule,
      "convert_from_py_msg__msg__measurement_time_frequency_difference",
      pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_time_frequency_difference__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "convert_to_py_msg__msg__measurement_time_frequency_difference",
      pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
      (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                          MeasurementTimeFrequencyDifference),
      NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
      pymodule, "type_support_msg__msg__measurement_time_frequency_difference",
      pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_velocity__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_velocity__struct.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_velocity__type_support.h"

static void *
aspn23_ros_interfaces__msg__measurement_velocity__create_ros_message(void) {
  return aspn23_ros_interfaces__msg__MeasurementVelocity__create();
}

static void
aspn23_ros_interfaces__msg__measurement_velocity__destroy_ros_message(
    void *raw_ros_message) {
  aspn23_ros_interfaces__msg__MeasurementVelocity *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementVelocity *)raw_ros_message;
  aspn23_ros_interfaces__msg__MeasurementVelocity__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool aspn23_ros_interfaces__msg__measurement_velocity__convert_from_py(
    PyObject *_pymsg, void *ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject *aspn23_ros_interfaces__msg__measurement_velocity__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
    ROSIDL_GET_MSG_TYPE_SUPPORT(aspn23_ros_interfaces, msg,
                                MeasurementVelocity);

int8_t _register_msg_type__msg__measurement_velocity(PyObject *pymodule) {
  int8_t err;

  PyObject *pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_velocity__create_ros_message,
      NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "create_ros_message_msg__msg__measurement_velocity",
                           pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_velocity__destroy_ros_message,
      NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "destroy_ros_message_msg__msg__measurement_velocity",
                           pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
      (void
           *)&aspn23_ros_interfaces__msg__measurement_velocity__convert_from_py,
      NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_from_py_msg__msg__measurement_velocity",
                           pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
      (void *)&aspn23_ros_interfaces__msg__measurement_velocity__convert_to_py,
      NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "convert_to_py_msg__msg__measurement_velocity",
                           pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject *pyobject_type_support = NULL;
  pyobject_type_support =
      PyCapsule_New((void *)ROSIDL_GET_MSG_TYPE_SUPPORT(
                        aspn23_ros_interfaces, msg, MeasurementVelocity),
                    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(pymodule,
                           "type_support_msg__msg__measurement_velocity",
                           pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

PyMODINIT_FUNC
PyInit_aspn23_ros_interfaces_s__rosidl_typesupport_introspection_c(void) {
  PyObject *pymodule = NULL;
  pymodule = PyModule_Create(&aspn23_ros_interfaces__module);
  if (!pymodule) {
    return NULL;
  }
  int8_t err;

  err = _register_msg_type__msg__type_direction2_d_to_point(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__type_direction3_d_to_point(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__type_header(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__type_image_feature(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__type_integrity(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__type_kepler_orbit(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__type_metadataheader(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__type_mounting(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__type_remote_point(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__type_satnav_clock(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__type_satnav_obs(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__type_satnav_satellite_system(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__type_satnav_signal_descriptor(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__type_satnav_sv_data(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__type_satnav_time(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__type_timestamp(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__metadata_beidou_ephemeris(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__metadata_glonass_ephemeris(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__metadata_gps_cnav_ephemeris(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__metadata_gps_lnav_ephemeris(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__metadata_gps_mnav_ephemeris(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__metadata_gps_iono_utc_parameters(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__metadata_galileo_ephemeris(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__metadata_imu(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__metadata_generic(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__metadata_image_features(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__metadata_magnetic_field(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__metadata_satnav_obs(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__measurement_imu(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__measurement_tdoa1_tx2_rx(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__measurement_tdoa2_tx1_rx(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__measurement_accumulated_distance_traveled(
      pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__measurement_altitude(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__measurement_angular_velocity(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__measurement_angular_velocity1_d(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__measurement_attitude2_d(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__measurement_attitude3_d(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__measurement_barometer(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__measurement_delta_position(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__measurement_delta_range(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__measurement_delta_range_to_point(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__measurement_direction2_d_to_points(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__measurement_direction3_d_to_points(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__measurement_direction_of_motion2_d(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__measurement_direction_of_motion3_d(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__measurement_frequency_difference(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__measurement_heading(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__measurement_image(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__measurement_magnetic_field(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__measurement_magnetic_field_magnitude(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__measurement_position(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__measurement_position_attitude(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err =
      _register_msg_type__msg__measurement_position_velocity_attitude(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__measurement_range_rate_to_point(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__measurement_range_to_point(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__measurement_satnav(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__measurement_satnav_subframe(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__measurement_satnav_with_sv_data(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__measurement_specific_force1_d(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__measurement_speed(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__measurement_temperature(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__measurement_time(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__measurement_time_difference(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err =
      _register_msg_type__msg__measurement_time_frequency_difference(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__measurement_velocity(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  return pymodule;
}
