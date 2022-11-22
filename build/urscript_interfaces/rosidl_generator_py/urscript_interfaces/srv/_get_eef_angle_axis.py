# generated from rosidl_generator_py/resource/_idl.py.em
# with input from urscript_interfaces:srv/GetEefAngleAxis.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetEefAngleAxis_Request(type):
    """Metaclass of message 'GetEefAngleAxis_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('urscript_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'urscript_interfaces.srv.GetEefAngleAxis_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_eef_angle_axis__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_eef_angle_axis__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_eef_angle_axis__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_eef_angle_axis__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_eef_angle_axis__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetEefAngleAxis_Request(metaclass=Metaclass_GetEefAngleAxis_Request):
    """Message class 'GetEefAngleAxis_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GetEefAngleAxis_Response(type):
    """Metaclass of message 'GetEefAngleAxis_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('urscript_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'urscript_interfaces.srv.GetEefAngleAxis_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_eef_angle_axis__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_eef_angle_axis__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_eef_angle_axis__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_eef_angle_axis__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_eef_angle_axis__response

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetEefAngleAxis_Response(metaclass=Metaclass_GetEefAngleAxis_Response):
    """Message class 'GetEefAngleAxis_Response'."""

    __slots__ = [
        '_success',
        '_error_reason',
        '_angle_axis',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'error_reason': 'string',
        'angle_axis': 'geometry_msgs/Vector3',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.error_reason = kwargs.get('error_reason', str())
        from geometry_msgs.msg import Vector3
        self.angle_axis = kwargs.get('angle_axis', Vector3())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        if self.error_reason != other.error_reason:
            return False
        if self.angle_axis != other.angle_axis:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @property
    def error_reason(self):
        """Message field 'error_reason'."""
        return self._error_reason

    @error_reason.setter
    def error_reason(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error_reason' field must be of type 'str'"
        self._error_reason = value

    @property
    def angle_axis(self):
        """Message field 'angle_axis'."""
        return self._angle_axis

    @angle_axis.setter
    def angle_axis(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'angle_axis' field must be a sub message of type 'Vector3'"
        self._angle_axis = value


class Metaclass_GetEefAngleAxis(type):
    """Metaclass of service 'GetEefAngleAxis'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('urscript_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'urscript_interfaces.srv.GetEefAngleAxis')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_eef_angle_axis

            from urscript_interfaces.srv import _get_eef_angle_axis
            if _get_eef_angle_axis.Metaclass_GetEefAngleAxis_Request._TYPE_SUPPORT is None:
                _get_eef_angle_axis.Metaclass_GetEefAngleAxis_Request.__import_type_support__()
            if _get_eef_angle_axis.Metaclass_GetEefAngleAxis_Response._TYPE_SUPPORT is None:
                _get_eef_angle_axis.Metaclass_GetEefAngleAxis_Response.__import_type_support__()


class GetEefAngleAxis(metaclass=Metaclass_GetEefAngleAxis):
    from urscript_interfaces.srv._get_eef_angle_axis import GetEefAngleAxis_Request as Request
    from urscript_interfaces.srv._get_eef_angle_axis import GetEefAngleAxis_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
