# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aspn23_ros_interfaces:msg/TypeSatnavSvData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'sv_pos'
# Member 'sv_vel'
# Member 'group_delay_vector'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TypeSatnavSvData(type):
    """Metaclass of message 'TypeSatnavSvData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_SET_BY_SYSTEM': 0,
        'ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_LNAV': 1,
        'ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_CNAV': 2,
        'ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_MNAV': 3,
        'ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_ITRF': 0,
        'ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_ECEF': 1,
        'ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_GTRF': 2,
        'ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_PZ90': 3,
        'ASPN23_TYPE_SATNAV_SV_DATA_GROUP_DELAY_ENUM_TGD_LNAV': 0,
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
                'aspn23_ros_interfaces.msg.TypeSatnavSvData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__type_satnav_sv_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__type_satnav_sv_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__type_satnav_sv_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__type_satnav_sv_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__type_satnav_sv_data

            from aspn23_ros_interfaces.msg import TypeSatnavSatelliteSystem
            if TypeSatnavSatelliteSystem.__class__._TYPE_SUPPORT is None:
                TypeSatnavSatelliteSystem.__class__.__import_type_support__()

            from aspn23_ros_interfaces.msg import TypeSatnavTime
            if TypeSatnavTime.__class__._TYPE_SUPPORT is None:
                TypeSatnavTime.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_SET_BY_SYSTEM': cls.__constants['ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_SET_BY_SYSTEM'],
            'ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_LNAV': cls.__constants['ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_LNAV'],
            'ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_CNAV': cls.__constants['ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_CNAV'],
            'ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_MNAV': cls.__constants['ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_MNAV'],
            'ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_ITRF': cls.__constants['ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_ITRF'],
            'ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_ECEF': cls.__constants['ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_ECEF'],
            'ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_GTRF': cls.__constants['ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_GTRF'],
            'ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_PZ90': cls.__constants['ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_PZ90'],
            'ASPN23_TYPE_SATNAV_SV_DATA_GROUP_DELAY_ENUM_TGD_LNAV': cls.__constants['ASPN23_TYPE_SATNAV_SV_DATA_GROUP_DELAY_ENUM_TGD_LNAV'],
        }

    @property
    def ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_SET_BY_SYSTEM(self):
        """Message constant 'ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_SET_BY_SYSTEM'."""
        return Metaclass_TypeSatnavSvData.__constants['ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_SET_BY_SYSTEM']

    @property
    def ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_LNAV(self):
        """Message constant 'ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_LNAV'."""
        return Metaclass_TypeSatnavSvData.__constants['ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_LNAV']

    @property
    def ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_CNAV(self):
        """Message constant 'ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_CNAV'."""
        return Metaclass_TypeSatnavSvData.__constants['ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_CNAV']

    @property
    def ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_MNAV(self):
        """Message constant 'ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_MNAV'."""
        return Metaclass_TypeSatnavSvData.__constants['ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_MNAV']

    @property
    def ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_ITRF(self):
        """Message constant 'ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_ITRF'."""
        return Metaclass_TypeSatnavSvData.__constants['ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_ITRF']

    @property
    def ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_ECEF(self):
        """Message constant 'ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_ECEF'."""
        return Metaclass_TypeSatnavSvData.__constants['ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_ECEF']

    @property
    def ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_GTRF(self):
        """Message constant 'ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_GTRF'."""
        return Metaclass_TypeSatnavSvData.__constants['ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_GTRF']

    @property
    def ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_PZ90(self):
        """Message constant 'ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_PZ90'."""
        return Metaclass_TypeSatnavSvData.__constants['ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_PZ90']

    @property
    def ASPN23_TYPE_SATNAV_SV_DATA_GROUP_DELAY_ENUM_TGD_LNAV(self):
        """Message constant 'ASPN23_TYPE_SATNAV_SV_DATA_GROUP_DELAY_ENUM_TGD_LNAV'."""
        return Metaclass_TypeSatnavSvData.__constants['ASPN23_TYPE_SATNAV_SV_DATA_GROUP_DELAY_ENUM_TGD_LNAV']


class TypeSatnavSvData(metaclass=Metaclass_TypeSatnavSvData):
    """
    Message class 'TypeSatnavSvData'.

    Constants:
      ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_SET_BY_SYSTEM
      ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_LNAV
      ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_CNAV
      ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_MNAV
      ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_ITRF
      ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_ECEF
      ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_GTRF
      ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_PZ90
      ASPN23_TYPE_SATNAV_SV_DATA_GROUP_DELAY_ENUM_TGD_LNAV
    """

    __slots__ = [
        '_prn',
        '_satellite_system',
        '_ephemeris_type',
        '_sv_data_time',
        '_coordinate_frame',
        '_sv_pos',
        '_sv_vel',
        '_sv_clock_bias',
        '_sv_clock_drift',
        '_group_delay_enum',
        '_group_delay_vector',
    ]

    _fields_and_field_types = {
        'prn': 'int16',
        'satellite_system': 'aspn23_ros_interfaces/TypeSatnavSatelliteSystem',
        'ephemeris_type': 'uint8',
        'sv_data_time': 'aspn23_ros_interfaces/TypeSatnavTime',
        'coordinate_frame': 'uint8',
        'sv_pos': 'double[3]',
        'sv_vel': 'double[3]',
        'sv_clock_bias': 'double',
        'sv_clock_drift': 'double',
        'group_delay_enum': 'uint8',
        'group_delay_vector': 'float[4]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aspn23_ros_interfaces', 'msg'], 'TypeSatnavSatelliteSystem'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aspn23_ros_interfaces', 'msg'], 'TypeSatnavTime'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.prn = kwargs.get('prn', int())
        from aspn23_ros_interfaces.msg import TypeSatnavSatelliteSystem
        self.satellite_system = kwargs.get('satellite_system', TypeSatnavSatelliteSystem())
        self.ephemeris_type = kwargs.get('ephemeris_type', int())
        from aspn23_ros_interfaces.msg import TypeSatnavTime
        self.sv_data_time = kwargs.get('sv_data_time', TypeSatnavTime())
        self.coordinate_frame = kwargs.get('coordinate_frame', int())
        if 'sv_pos' not in kwargs:
            self.sv_pos = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.sv_pos = kwargs.get('sv_pos')
        if 'sv_vel' not in kwargs:
            self.sv_vel = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.sv_vel = kwargs.get('sv_vel')
        self.sv_clock_bias = kwargs.get('sv_clock_bias', float())
        self.sv_clock_drift = kwargs.get('sv_clock_drift', float())
        self.group_delay_enum = kwargs.get('group_delay_enum', int())
        if 'group_delay_vector' not in kwargs:
            self.group_delay_vector = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.group_delay_vector = kwargs.get('group_delay_vector')

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
        if self.prn != other.prn:
            return False
        if self.satellite_system != other.satellite_system:
            return False
        if self.ephemeris_type != other.ephemeris_type:
            return False
        if self.sv_data_time != other.sv_data_time:
            return False
        if self.coordinate_frame != other.coordinate_frame:
            return False
        if any(self.sv_pos != other.sv_pos):
            return False
        if any(self.sv_vel != other.sv_vel):
            return False
        if self.sv_clock_bias != other.sv_clock_bias:
            return False
        if self.sv_clock_drift != other.sv_clock_drift:
            return False
        if self.group_delay_enum != other.group_delay_enum:
            return False
        if any(self.group_delay_vector != other.group_delay_vector):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
            assert value >= -32768 and value < 32768, \
                "The 'prn' field must be an integer in [-32768, 32767]"
        self._prn = value

    @builtins.property
    def satellite_system(self):
        """Message field 'satellite_system'."""
        return self._satellite_system

    @satellite_system.setter
    def satellite_system(self, value):
        if __debug__:
            from aspn23_ros_interfaces.msg import TypeSatnavSatelliteSystem
            assert \
                isinstance(value, TypeSatnavSatelliteSystem), \
                "The 'satellite_system' field must be a sub message of type 'TypeSatnavSatelliteSystem'"
        self._satellite_system = value

    @builtins.property
    def ephemeris_type(self):
        """Message field 'ephemeris_type'."""
        return self._ephemeris_type

    @ephemeris_type.setter
    def ephemeris_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ephemeris_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ephemeris_type' field must be an unsigned integer in [0, 255]"
        self._ephemeris_type = value

    @builtins.property
    def sv_data_time(self):
        """Message field 'sv_data_time'."""
        return self._sv_data_time

    @sv_data_time.setter
    def sv_data_time(self, value):
        if __debug__:
            from aspn23_ros_interfaces.msg import TypeSatnavTime
            assert \
                isinstance(value, TypeSatnavTime), \
                "The 'sv_data_time' field must be a sub message of type 'TypeSatnavTime'"
        self._sv_data_time = value

    @builtins.property
    def coordinate_frame(self):
        """Message field 'coordinate_frame'."""
        return self._coordinate_frame

    @coordinate_frame.setter
    def coordinate_frame(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'coordinate_frame' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'coordinate_frame' field must be an unsigned integer in [0, 255]"
        self._coordinate_frame = value

    @builtins.property
    def sv_pos(self):
        """Message field 'sv_pos'."""
        return self._sv_pos

    @sv_pos.setter
    def sv_pos(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'sv_pos' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'sv_pos' numpy.ndarray() must have a size of 3"
            self._sv_pos = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'sv_pos' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._sv_pos = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def sv_vel(self):
        """Message field 'sv_vel'."""
        return self._sv_vel

    @sv_vel.setter
    def sv_vel(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'sv_vel' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'sv_vel' numpy.ndarray() must have a size of 3"
            self._sv_vel = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'sv_vel' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._sv_vel = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def sv_clock_bias(self):
        """Message field 'sv_clock_bias'."""
        return self._sv_clock_bias

    @sv_clock_bias.setter
    def sv_clock_bias(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sv_clock_bias' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'sv_clock_bias' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._sv_clock_bias = value

    @builtins.property
    def sv_clock_drift(self):
        """Message field 'sv_clock_drift'."""
        return self._sv_clock_drift

    @sv_clock_drift.setter
    def sv_clock_drift(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sv_clock_drift' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'sv_clock_drift' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._sv_clock_drift = value

    @builtins.property
    def group_delay_enum(self):
        """Message field 'group_delay_enum'."""
        return self._group_delay_enum

    @group_delay_enum.setter
    def group_delay_enum(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'group_delay_enum' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'group_delay_enum' field must be an unsigned integer in [0, 255]"
        self._group_delay_enum = value

    @builtins.property
    def group_delay_vector(self):
        """Message field 'group_delay_vector'."""
        return self._group_delay_vector

    @group_delay_vector.setter
    def group_delay_vector(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'group_delay_vector' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'group_delay_vector' numpy.ndarray() must have a size of 4"
            self._group_delay_vector = value
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
                 len(value) == 4 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'group_delay_vector' field must be a set or sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._group_delay_vector = numpy.array(value, dtype=numpy.float32)
