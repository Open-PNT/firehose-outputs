# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aspn23_ros_interfaces:msg/MetadataGpsCnavEphemeris.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MetadataGpsCnavEphemeris(type):
    """Metaclass of message 'MetadataGpsCnavEphemeris'."""

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
            module = import_type_support('aspn23_ros_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aspn23_ros_interfaces.msg.MetadataGpsCnavEphemeris')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__metadata_gps_cnav_ephemeris
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__metadata_gps_cnav_ephemeris
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__metadata_gps_cnav_ephemeris
            cls._TYPE_SUPPORT = module.type_support_msg__msg__metadata_gps_cnav_ephemeris
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__metadata_gps_cnav_ephemeris

            from aspn23_ros_interfaces.msg import TypeKeplerOrbit
            if TypeKeplerOrbit.__class__._TYPE_SUPPORT is None:
                TypeKeplerOrbit.__class__.__import_type_support__()

            from aspn23_ros_interfaces.msg import TypeMetadataheader
            if TypeMetadataheader.__class__._TYPE_SUPPORT is None:
                TypeMetadataheader.__class__.__import_type_support__()

            from aspn23_ros_interfaces.msg import TypeSatnavClock
            if TypeSatnavClock.__class__._TYPE_SUPPORT is None:
                TypeSatnavClock.__class__.__import_type_support__()

            from aspn23_ros_interfaces.msg import TypeTimestamp
            if TypeTimestamp.__class__._TYPE_SUPPORT is None:
                TypeTimestamp.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MetadataGpsCnavEphemeris(metaclass=Metaclass_MetadataGpsCnavEphemeris):
    """Message class 'MetadataGpsCnavEphemeris'."""

    __slots__ = [
        '_info',
        '_time_of_validity',
        '_week_number',
        '_prn',
        '_clock',
        '_orbit',
        '_t_gd',
        '_iodc',
        '_iode',
        '_isc_l1_ca',
        '_isc_l2_c',
        '_isc_l5_i5',
        '_isc_l5_q5',
        '_delta_a_0',
        '_a_dot',
    ]

    _fields_and_field_types = {
        'info': 'aspn23_ros_interfaces/TypeMetadataheader',
        'time_of_validity': 'aspn23_ros_interfaces/TypeTimestamp',
        'week_number': 'uint16',
        'prn': 'int32',
        'clock': 'aspn23_ros_interfaces/TypeSatnavClock',
        'orbit': 'aspn23_ros_interfaces/TypeKeplerOrbit',
        't_gd': 'double',
        'iodc': 'uint16',
        'iode': 'uint8',
        'isc_l1_ca': 'double',
        'isc_l2_c': 'double',
        'isc_l5_i5': 'double',
        'isc_l5_q5': 'double',
        'delta_a_0': 'double',
        'a_dot': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aspn23_ros_interfaces', 'msg'], 'TypeMetadataheader'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aspn23_ros_interfaces', 'msg'], 'TypeTimestamp'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aspn23_ros_interfaces', 'msg'], 'TypeSatnavClock'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aspn23_ros_interfaces', 'msg'], 'TypeKeplerOrbit'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aspn23_ros_interfaces.msg import TypeMetadataheader
        self.info = kwargs.get('info', TypeMetadataheader())
        from aspn23_ros_interfaces.msg import TypeTimestamp
        self.time_of_validity = kwargs.get('time_of_validity', TypeTimestamp())
        self.week_number = kwargs.get('week_number', int())
        self.prn = kwargs.get('prn', int())
        from aspn23_ros_interfaces.msg import TypeSatnavClock
        self.clock = kwargs.get('clock', TypeSatnavClock())
        from aspn23_ros_interfaces.msg import TypeKeplerOrbit
        self.orbit = kwargs.get('orbit', TypeKeplerOrbit())
        self.t_gd = kwargs.get('t_gd', float())
        self.iodc = kwargs.get('iodc', int())
        self.iode = kwargs.get('iode', int())
        self.isc_l1_ca = kwargs.get('isc_l1_ca', float())
        self.isc_l2_c = kwargs.get('isc_l2_c', float())
        self.isc_l5_i5 = kwargs.get('isc_l5_i5', float())
        self.isc_l5_q5 = kwargs.get('isc_l5_q5', float())
        self.delta_a_0 = kwargs.get('delta_a_0', float())
        self.a_dot = kwargs.get('a_dot', float())

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
        if self.info != other.info:
            return False
        if self.time_of_validity != other.time_of_validity:
            return False
        if self.week_number != other.week_number:
            return False
        if self.prn != other.prn:
            return False
        if self.clock != other.clock:
            return False
        if self.orbit != other.orbit:
            return False
        if self.t_gd != other.t_gd:
            return False
        if self.iodc != other.iodc:
            return False
        if self.iode != other.iode:
            return False
        if self.isc_l1_ca != other.isc_l1_ca:
            return False
        if self.isc_l2_c != other.isc_l2_c:
            return False
        if self.isc_l5_i5 != other.isc_l5_i5:
            return False
        if self.isc_l5_q5 != other.isc_l5_q5:
            return False
        if self.delta_a_0 != other.delta_a_0:
            return False
        if self.a_dot != other.a_dot:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if __debug__:
            from aspn23_ros_interfaces.msg import TypeMetadataheader
            assert \
                isinstance(value, TypeMetadataheader), \
                "The 'info' field must be a sub message of type 'TypeMetadataheader'"
        self._info = value

    @builtins.property
    def time_of_validity(self):
        """Message field 'time_of_validity'."""
        return self._time_of_validity

    @time_of_validity.setter
    def time_of_validity(self, value):
        if __debug__:
            from aspn23_ros_interfaces.msg import TypeTimestamp
            assert \
                isinstance(value, TypeTimestamp), \
                "The 'time_of_validity' field must be a sub message of type 'TypeTimestamp'"
        self._time_of_validity = value

    @builtins.property
    def week_number(self):
        """Message field 'week_number'."""
        return self._week_number

    @week_number.setter
    def week_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'week_number' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'week_number' field must be an unsigned integer in [0, 65535]"
        self._week_number = value

    @builtins.property
    def prn(self):
        """Message field 'prn'."""
        return self._prn

    @prn.setter
    def prn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prn' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'prn' field must be an integer in [-2147483648, 2147483647]"
        self._prn = value

    @builtins.property
    def clock(self):
        """Message field 'clock'."""
        return self._clock

    @clock.setter
    def clock(self, value):
        if __debug__:
            from aspn23_ros_interfaces.msg import TypeSatnavClock
            assert \
                isinstance(value, TypeSatnavClock), \
                "The 'clock' field must be a sub message of type 'TypeSatnavClock'"
        self._clock = value

    @builtins.property
    def orbit(self):
        """Message field 'orbit'."""
        return self._orbit

    @orbit.setter
    def orbit(self, value):
        if __debug__:
            from aspn23_ros_interfaces.msg import TypeKeplerOrbit
            assert \
                isinstance(value, TypeKeplerOrbit), \
                "The 'orbit' field must be a sub message of type 'TypeKeplerOrbit'"
        self._orbit = value

    @builtins.property
    def t_gd(self):
        """Message field 't_gd'."""
        return self._t_gd

    @t_gd.setter
    def t_gd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't_gd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 't_gd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._t_gd = value

    @builtins.property
    def iodc(self):
        """Message field 'iodc'."""
        return self._iodc

    @iodc.setter
    def iodc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'iodc' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'iodc' field must be an unsigned integer in [0, 65535]"
        self._iodc = value

    @builtins.property
    def iode(self):
        """Message field 'iode'."""
        return self._iode

    @iode.setter
    def iode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'iode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'iode' field must be an unsigned integer in [0, 255]"
        self._iode = value

    @builtins.property
    def isc_l1_ca(self):
        """Message field 'isc_l1_ca'."""
        return self._isc_l1_ca

    @isc_l1_ca.setter
    def isc_l1_ca(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'isc_l1_ca' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'isc_l1_ca' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._isc_l1_ca = value

    @builtins.property
    def isc_l2_c(self):
        """Message field 'isc_l2_c'."""
        return self._isc_l2_c

    @isc_l2_c.setter
    def isc_l2_c(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'isc_l2_c' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'isc_l2_c' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._isc_l2_c = value

    @builtins.property
    def isc_l5_i5(self):
        """Message field 'isc_l5_i5'."""
        return self._isc_l5_i5

    @isc_l5_i5.setter
    def isc_l5_i5(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'isc_l5_i5' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'isc_l5_i5' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._isc_l5_i5 = value

    @builtins.property
    def isc_l5_q5(self):
        """Message field 'isc_l5_q5'."""
        return self._isc_l5_q5

    @isc_l5_q5.setter
    def isc_l5_q5(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'isc_l5_q5' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'isc_l5_q5' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._isc_l5_q5 = value

    @builtins.property
    def delta_a_0(self):
        """Message field 'delta_a_0'."""
        return self._delta_a_0

    @delta_a_0.setter
    def delta_a_0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_a_0' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'delta_a_0' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._delta_a_0 = value

    @builtins.property
    def a_dot(self):
        """Message field 'a_dot'."""
        return self._a_dot

    @a_dot.setter
    def a_dot(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'a_dot' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'a_dot' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._a_dot = value
