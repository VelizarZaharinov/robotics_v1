// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from robo_miner_interfaces:srv/RobotMove.idl
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
#include "robo_miner_interfaces/srv/detail/robot_move__struct.h"
#include "robo_miner_interfaces/srv/detail/robot_move__functions.h"

bool robo_miner_interfaces__msg__robot_move_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * robo_miner_interfaces__msg__robot_move_type__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool robo_miner_interfaces__srv__robot_move__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
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
    assert(strncmp("robo_miner_interfaces.srv._robot_move.RobotMove_Request", full_classname_dest, 55) == 0);
  }
  robo_miner_interfaces__srv__RobotMove_Request * ros_message = _ros_message;
  {  // robot_move_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_move_type");
    if (!field) {
      return false;
    }
    if (!robo_miner_interfaces__msg__robot_move_type__convert_from_py(field, &ros_message->robot_move_type)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * robo_miner_interfaces__srv__robot_move__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RobotMove_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("robo_miner_interfaces.srv._robot_move");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RobotMove_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  robo_miner_interfaces__srv__RobotMove_Request * ros_message = (robo_miner_interfaces__srv__RobotMove_Request *)raw_ros_message;
  {  // robot_move_type
    PyObject * field = NULL;
    field = robo_miner_interfaces__msg__robot_move_type__convert_to_py(&ros_message->robot_move_type);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_move_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "robo_miner_interfaces/srv/detail/robot_move__struct.h"
// already included above
// #include "robo_miner_interfaces/srv/detail/robot_move__functions.h"

bool robo_miner_interfaces__msg__robot_position_response__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * robo_miner_interfaces__msg__robot_position_response__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool robo_miner_interfaces__srv__robot_move__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
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
    assert(strncmp("robo_miner_interfaces.srv._robot_move.RobotMove_Response", full_classname_dest, 56) == 0);
  }
  robo_miner_interfaces__srv__RobotMove_Response * ros_message = _ros_message;
  {  // robot_position_response
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_position_response");
    if (!field) {
      return false;
    }
    if (!robo_miner_interfaces__msg__robot_position_response__convert_from_py(field, &ros_message->robot_position_response)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * robo_miner_interfaces__srv__robot_move__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RobotMove_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("robo_miner_interfaces.srv._robot_move");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RobotMove_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  robo_miner_interfaces__srv__RobotMove_Response * ros_message = (robo_miner_interfaces__srv__RobotMove_Response *)raw_ros_message;
  {  // robot_position_response
    PyObject * field = NULL;
    field = robo_miner_interfaces__msg__robot_position_response__convert_to_py(&ros_message->robot_position_response);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_position_response", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
