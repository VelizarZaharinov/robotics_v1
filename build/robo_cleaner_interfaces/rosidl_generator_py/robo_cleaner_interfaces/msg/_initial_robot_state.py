# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robo_cleaner_interfaces:msg/InitialRobotState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InitialRobotState(type):
    """Metaclass of message 'InitialRobotState'."""

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
            module = import_type_support('robo_cleaner_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robo_cleaner_interfaces.msg.InitialRobotState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__initial_robot_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__initial_robot_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__initial_robot_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__initial_robot_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__initial_robot_state

            from robo_cleaner_interfaces.msg import BatteryStatus
            if BatteryStatus.__class__._TYPE_SUPPORT is None:
                BatteryStatus.__class__.__import_type_support__()

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
        return Metaclass_InitialRobotState.__constants['DIRECTION_UP']

    @property
    def DIRECTION_RIGHT(self):
        """Message constant 'DIRECTION_RIGHT'."""
        return Metaclass_InitialRobotState.__constants['DIRECTION_RIGHT']

    @property
    def DIRECTION_DOWN(self):
        """Message constant 'DIRECTION_DOWN'."""
        return Metaclass_InitialRobotState.__constants['DIRECTION_DOWN']

    @property
    def DIRECTION_LEFT(self):
        """Message constant 'DIRECTION_LEFT'."""
        return Metaclass_InitialRobotState.__constants['DIRECTION_LEFT']


class InitialRobotState(metaclass=Metaclass_InitialRobotState):
    """
    Message class 'InitialRobotState'.

    Constants:
      DIRECTION_UP
      DIRECTION_RIGHT
      DIRECTION_DOWN
      DIRECTION_LEFT
    """

    __slots__ = [
        '_battery_status',
        '_robot_tile',
        '_robot_dir',
    ]

    _fields_and_field_types = {
        'battery_status': 'robo_cleaner_interfaces/BatteryStatus',
        'robot_tile': 'uint8',
        'robot_dir': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['robo_cleaner_interfaces', 'msg'], 'BatteryStatus'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from robo_cleaner_interfaces.msg import BatteryStatus
        self.battery_status = kwargs.get('battery_status', BatteryStatus())
        self.robot_tile = kwargs.get('robot_tile', int())
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
        if self.battery_status != other.battery_status:
            return False
        if self.robot_tile != other.robot_tile:
            return False
        if self.robot_dir != other.robot_dir:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def battery_status(self):
        """Message field 'battery_status'."""
        return self._battery_status

    @battery_status.setter
    def battery_status(self, value):
        if __debug__:
            from robo_cleaner_interfaces.msg import BatteryStatus
            assert \
                isinstance(value, BatteryStatus), \
                "The 'battery_status' field must be a sub message of type 'BatteryStatus'"
        self._battery_status = value

    @property
    def robot_tile(self):
        """Message field 'robot_tile'."""
        return self._robot_tile

    @robot_tile.setter
    def robot_tile(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robot_tile' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'robot_tile' field must be an unsigned integer in [0, 255]"
        self._robot_tile = value

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
