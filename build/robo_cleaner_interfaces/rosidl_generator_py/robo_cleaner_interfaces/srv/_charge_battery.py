# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robo_cleaner_interfaces:srv/ChargeBattery.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ChargeBattery_Request(type):
    """Metaclass of message 'ChargeBattery_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CHARGE_UNTIL_FULL': 0,
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
                'robo_cleaner_interfaces.srv.ChargeBattery_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__charge_battery__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__charge_battery__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__charge_battery__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__charge_battery__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__charge_battery__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CHARGE_UNTIL_FULL': cls.__constants['CHARGE_UNTIL_FULL'],
        }

    @property
    def CHARGE_UNTIL_FULL(self):
        """Message constant 'CHARGE_UNTIL_FULL'."""
        return Metaclass_ChargeBattery_Request.__constants['CHARGE_UNTIL_FULL']


class ChargeBattery_Request(metaclass=Metaclass_ChargeBattery_Request):
    """
    Message class 'ChargeBattery_Request'.

    Constants:
      CHARGE_UNTIL_FULL
    """

    __slots__ = [
        '_charge_turns',
    ]

    _fields_and_field_types = {
        'charge_turns': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.charge_turns = kwargs.get('charge_turns', int())

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
        if self.charge_turns != other.charge_turns:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def charge_turns(self):
        """Message field 'charge_turns'."""
        return self._charge_turns

    @charge_turns.setter
    def charge_turns(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'charge_turns' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'charge_turns' field must be an integer in [-2147483648, 2147483647]"
        self._charge_turns = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ChargeBattery_Response(type):
    """Metaclass of message 'ChargeBattery_Response'."""

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
                'robo_cleaner_interfaces.srv.ChargeBattery_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__charge_battery__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__charge_battery__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__charge_battery__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__charge_battery__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__charge_battery__response

            from robo_cleaner_interfaces.msg import BatteryStatus
            if BatteryStatus.__class__._TYPE_SUPPORT is None:
                BatteryStatus.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChargeBattery_Response(metaclass=Metaclass_ChargeBattery_Response):
    """Message class 'ChargeBattery_Response'."""

    __slots__ = [
        '_success',
        '_error_reason',
        '_battery_status',
        '_turns_spend_charging',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'error_reason': 'string',
        'battery_status': 'robo_cleaner_interfaces/BatteryStatus',
        'turns_spend_charging': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['robo_cleaner_interfaces', 'msg'], 'BatteryStatus'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.error_reason = kwargs.get('error_reason', str())
        from robo_cleaner_interfaces.msg import BatteryStatus
        self.battery_status = kwargs.get('battery_status', BatteryStatus())
        self.turns_spend_charging = kwargs.get('turns_spend_charging', int())

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
        if self.battery_status != other.battery_status:
            return False
        if self.turns_spend_charging != other.turns_spend_charging:
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
    def turns_spend_charging(self):
        """Message field 'turns_spend_charging'."""
        return self._turns_spend_charging

    @turns_spend_charging.setter
    def turns_spend_charging(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'turns_spend_charging' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'turns_spend_charging' field must be an integer in [-2147483648, 2147483647]"
        self._turns_spend_charging = value


class Metaclass_ChargeBattery(type):
    """Metaclass of service 'ChargeBattery'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robo_cleaner_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robo_cleaner_interfaces.srv.ChargeBattery')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__charge_battery

            from robo_cleaner_interfaces.srv import _charge_battery
            if _charge_battery.Metaclass_ChargeBattery_Request._TYPE_SUPPORT is None:
                _charge_battery.Metaclass_ChargeBattery_Request.__import_type_support__()
            if _charge_battery.Metaclass_ChargeBattery_Response._TYPE_SUPPORT is None:
                _charge_battery.Metaclass_ChargeBattery_Response.__import_type_support__()


class ChargeBattery(metaclass=Metaclass_ChargeBattery):
    from robo_cleaner_interfaces.srv._charge_battery import ChargeBattery_Request as Request
    from robo_cleaner_interfaces.srv._charge_battery import ChargeBattery_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
