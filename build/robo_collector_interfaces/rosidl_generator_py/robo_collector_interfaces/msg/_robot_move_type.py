# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robo_collector_interfaces:msg/RobotMoveType.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotMoveType(type):
    """Metaclass of message 'RobotMoveType'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'FORWARD': 0,
        'ROTATE_LEFT': 1,
        'ROTATE_RIGHT': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robo_collector_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robo_collector_interfaces.msg.RobotMoveType')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_move_type
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_move_type
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_move_type
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_move_type
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_move_type

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'FORWARD': cls.__constants['FORWARD'],
            'ROTATE_LEFT': cls.__constants['ROTATE_LEFT'],
            'ROTATE_RIGHT': cls.__constants['ROTATE_RIGHT'],
        }

    @property
    def FORWARD(self):
        """Message constant 'FORWARD'."""
        return Metaclass_RobotMoveType.__constants['FORWARD']

    @property
    def ROTATE_LEFT(self):
        """Message constant 'ROTATE_LEFT'."""
        return Metaclass_RobotMoveType.__constants['ROTATE_LEFT']

    @property
    def ROTATE_RIGHT(self):
        """Message constant 'ROTATE_RIGHT'."""
        return Metaclass_RobotMoveType.__constants['ROTATE_RIGHT']


class RobotMoveType(metaclass=Metaclass_RobotMoveType):
    """
    Message class 'RobotMoveType'.

    Constants:
      FORWARD
      ROTATE_LEFT
      ROTATE_RIGHT
    """

    __slots__ = [
        '_move_type',
    ]

    _fields_and_field_types = {
        'move_type': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.move_type = kwargs.get('move_type', int())

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
        if self.move_type != other.move_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def move_type(self):
        """Message field 'move_type'."""
        return self._move_type

    @move_type.setter
    def move_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'move_type' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'move_type' field must be an integer in [-128, 127]"
        self._move_type = value
