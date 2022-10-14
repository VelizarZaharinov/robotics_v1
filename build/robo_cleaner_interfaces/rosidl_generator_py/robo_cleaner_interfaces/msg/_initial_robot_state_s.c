// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from robo_cleaner_interfaces:msg/InitialRobotState.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "robo_cleaner_interfaces/msg/detail/initial_robot_state__struct.h"
#include "robo_cleaner_interfaces/msg/detail/initial_robot_state__functions.h"

bool robo_cleaner_interfaces__msg__battery_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * robo_cleaner_interfaces__msg__battery_status__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool robo_cleaner_interfaces__msg__initial_robot_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[67];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
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
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("robo_cleaner_interfaces.msg._initial_robot_state.InitialRobotState", full_classname_dest, 66) == 0);
  }
  robo_cleaner_interfaces__msg__InitialRobotState * ros_message = _ros_message;
  {  // battery_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_status");
    if (!field) {
      return false;
    }
    if (!robo_cleaner_interfaces__msg__battery_status__convert_from_py(field, &ros_message->battery_status)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // robot_tile
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_tile");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->robot_tile = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // robot_dir
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_dir");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->robot_dir = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * robo_cleaner_interfaces__msg__initial_robot_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of InitialRobotState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("robo_cleaner_interfaces.msg._initial_robot_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "InitialRobotState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  robo_cleaner_interfaces__msg__InitialRobotState * ros_message = (robo_cleaner_interfaces__msg__InitialRobotState *)raw_ros_message;
  {  // battery_status
    PyObject * field = NULL;
    field = robo_cleaner_interfaces__msg__battery_status__convert_to_py(&ros_message->battery_status);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robot_tile
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->robot_tile);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_tile", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robot_dir
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->robot_dir);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_dir", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
