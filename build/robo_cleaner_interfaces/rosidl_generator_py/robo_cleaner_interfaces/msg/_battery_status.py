# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robo_cleaner_interfaces:msg/BatteryStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BatteryStatus(type):
    """Metaclass of message 'BatteryStatus'."""

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
            module = import_type_support('robo_cleaner_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robo_cleaner_interfaces.msg.BatteryStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__battery_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__battery_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__battery_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__battery_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__battery_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BatteryStatus(metaclass=Metaclass_BatteryStatus):
    """Message class 'BatteryStatus'."""

    __slots__ = [
        '_max_moves_on_full_energy',
        '_moves_left',
    ]

    _fields_and_field_types = {
        'max_moves_on_full_energy': 'int32',
        'moves_left': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.max_moves_on_full_energy = kwargs.get('max_moves_on_full_energy', int())
        self.moves_left = kwargs.get('moves_left', int())

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
        if self.max_moves_on_full_energy != other.max_moves_on_full_energy:
            return False
        if self.moves_left != other.moves_left:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def max_moves_on_full_energy(self):
        """Message field 'max_moves_on_full_energy'."""
        return self._max_moves_on_full_energy

    @max_moves_on_full_energy.setter
    def max_moves_on_full_energy(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_moves_on_full_energy' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'max_moves_on_full_energy' field must be an integer in [-2147483648, 2147483647]"
        self._max_moves_on_full_energy = value

    @property
    def moves_left(self):
        """Message field 'moves_left'."""
        return self._moves_left

    @moves_left.setter
    def moves_left(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'moves_left' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'moves_left' field must be an integer in [-2147483648, 2147483647]"
        self._moves_left = value
