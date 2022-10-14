# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robo_miner_interfaces:msg/RobotPositionResponse.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'surrounding_tiles'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotPositionResponse(type):
    """Metaclass of message 'RobotPositionResponse'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DIRECTION_UP': 0,
        'DIRECTION_RIGHT': 1,
        'DIRECTION_DOWN': 2,
        'DIRECTION_LEFT': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robo_miner_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robo_miner_interfaces.msg.RobotPositionResponse')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_position_response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_position_response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_position_response
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_position_response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_position_response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DIRECTION_UP': cls.__constants['DIRECTION_UP'],
            'DIRECTION_RIGHT': cls.__constants['DIRECTION_RIGHT'],
            'DIRECTION_DOWN': cls.__constants['DIRECTION_DOWN'],
            'DIRECTION_LEFT': cls.__constants['DIRECTION_LEFT'],
        }

    @property
    def DIRECTION_UP(self):
        """Message constant 'DIRECTION_UP'."""
        return Metaclass_RobotPositionResponse.__constants['DIRECTION_UP']

    @property
    def DIRECTION_RIGHT(self):
        """Message constant 'DIRECTION_RIGHT'."""
        return Metaclass_RobotPositionResponse.__constants['DIRECTION_RIGHT']

    @property
    def DIRECTION_DOWN(self):
        """Message constant 'DIRECTION_DOWN'."""
        return Metaclass_RobotPositionResponse.__constants['DIRECTION_DOWN']

    @property
    def DIRECTION_LEFT(self):
        """Message constant 'DIRECTION_LEFT'."""
        return Metaclass_RobotPositionResponse.__constants['DIRECTION_LEFT']


class RobotPositionResponse(metaclass=Metaclass_RobotPositionResponse):
    """
    Message class 'RobotPositionResponse'.

    Constants:
      DIRECTION_UP
      DIRECTION_RIGHT
      DIRECTION_DOWN
      DIRECTION_LEFT
    """

    __slots__ = [
        '_success',
        '_error_reason',
        '_surrounding_tiles',
        '_robot_dir',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'error_reason': 'string',
        'surrounding_tiles': 'uint8[3]',
        'robot_dir': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.error_reason = kwargs.get('error_reason', str())
        if 'surrounding_tiles' not in kwargs:
            self.surrounding_tiles = numpy.zeros(3, dtype=numpy.uint8)
        else:
            self.surrounding_tiles = numpy.array(kwargs.get('surrounding_tiles'), dtype=numpy.uint8)
            assert self.surrounding_tiles.shape == (3, )
        self.robot_dir = kwargs.get('robot_dir', int())

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
        if all(self.surrounding_tiles != other.surrounding_tiles):
            return False
        if self.robot_dir != other.robot_dir:
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
    def surrounding_tiles(self):
        """Message field 'surrounding_tiles'."""
        return self._surrounding_tiles

    @surrounding_tiles.setter
    def surrounding_tiles(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'surrounding_tiles' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 3, \
                "The 'surrounding_tiles' numpy.ndarray() must have a size of 3"
            self._surrounding_tiles = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 3 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'surrounding_tiles' field must be a set or sequence with length 3 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._surrounding_tiles = numpy.array(value, dtype=numpy.uint8)

    @property
    def robot_dir(self):
        """Message field 'robot_dir'."""
        return self._robot_dir

    @robot_dir.setter
    def robot_dir(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robot_dir' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'robot_dir' field must be an integer in [-2147483648, 2147483647]"
        self._robot_dir = value
