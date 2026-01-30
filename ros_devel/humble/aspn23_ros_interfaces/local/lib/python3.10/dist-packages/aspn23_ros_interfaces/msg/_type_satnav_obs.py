# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aspn23_ros_interfaces:msg/TypeSatnavObs.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TypeSatnavObs(type):
    """Metaclass of message 'TypeSatnavObs'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ASPN23_TYPE_SATNAV_OBS_PSEUDORANGE_RATE_TYPE_PSR_RATE_DOPPLER': 0,
        'ASPN23_TYPE_SATNAV_OBS_PSEUDORANGE_RATE_TYPE_PSR_RATE_DELTA_RANGE': 1,
        'ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_UNKNOWN': 0,
        'ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_MODELED': 1,
        'ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_MEASURED': 2,
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
                'aspn23_ros_interfaces.msg.TypeSatnavObs')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__type_satnav_obs
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__type_satnav_obs
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__type_satnav_obs
            cls._TYPE_SUPPORT = module.type_support_msg__msg__type_satnav_obs
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__type_satnav_obs

            from aspn23_ros_interfaces.msg import TypeIntegrity
            if TypeIntegrity.__class__._TYPE_SUPPORT is None:
                TypeIntegrity.__class__.__import_type_support__()

            from aspn23_ros_interfaces.msg import TypeSatnavSatelliteSystem
            if TypeSatnavSatelliteSystem.__class__._TYPE_SUPPORT is None:
                TypeSatnavSatelliteSystem.__class__.__import_type_support__()

            from aspn23_ros_interfaces.msg import TypeSatnavSignalDescriptor
            if TypeSatnavSignalDescriptor.__class__._TYPE_SUPPORT is None:
                TypeSatnavSignalDescriptor.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ASPN23_TYPE_SATNAV_OBS_PSEUDORANGE_RATE_TYPE_PSR_RATE_DOPPLER': cls.__constants['ASPN23_TYPE_SATNAV_OBS_PSEUDORANGE_RATE_TYPE_PSR_RATE_DOPPLER'],
            'ASPN23_TYPE_SATNAV_OBS_PSEUDORANGE_RATE_TYPE_PSR_RATE_DELTA_RANGE': cls.__constants['ASPN23_TYPE_SATNAV_OBS_PSEUDORANGE_RATE_TYPE_PSR_RATE_DELTA_RANGE'],
            'ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_UNKNOWN': cls.__constants['ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_UNKNOWN'],
            'ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_MODELED': cls.__constants['ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_MODELED'],
            'ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_MEASURED': cls.__constants['ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_MEASURED'],
        }

    @property
    def ASPN23_TYPE_SATNAV_OBS_PSEUDORANGE_RATE_TYPE_PSR_RATE_DOPPLER(self):
        """Message constant 'ASPN23_TYPE_SATNAV_OBS_PSEUDORANGE_RATE_TYPE_PSR_RATE_DOPPLER'."""
        return Metaclass_TypeSatnavObs.__constants['ASPN23_TYPE_SATNAV_OBS_PSEUDORANGE_RATE_TYPE_PSR_RATE_DOPPLER']

    @property
    def ASPN23_TYPE_SATNAV_OBS_PSEUDORANGE_RATE_TYPE_PSR_RATE_DELTA_RANGE(self):
        """Message constant 'ASPN23_TYPE_SATNAV_OBS_PSEUDORANGE_RATE_TYPE_PSR_RATE_DELTA_RANGE'."""
        return Metaclass_TypeSatnavObs.__constants['ASPN23_TYPE_SATNAV_OBS_PSEUDORANGE_RATE_TYPE_PSR_RATE_DELTA_RANGE']

    @property
    def ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_UNKNOWN(self):
        """Message constant 'ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_UNKNOWN'."""
        return Metaclass_TypeSatnavObs.__constants['ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_UNKNOWN']

    @property
    def ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_MODELED(self):
        """Message constant 'ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_MODELED'."""
        return Metaclass_TypeSatnavObs.__constants['ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_MODELED']

    @property
    def ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_MEASURED(self):
        """Message constant 'ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_MEASURED'."""
        return Metaclass_TypeSatnavObs.__constants['ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_MEASURED']


class TypeSatnavObs(metaclass=Metaclass_TypeSatnavObs):
    """
    Message class 'TypeSatnavObs'.

    Constants:
      ASPN23_TYPE_SATNAV_OBS_PSEUDORANGE_RATE_TYPE_PSR_RATE_DOPPLER
      ASPN23_TYPE_SATNAV_OBS_PSEUDORANGE_RATE_TYPE_PSR_RATE_DELTA_RANGE
      ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_UNKNOWN
      ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_MODELED
      ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_MEASURED
    """

    __slots__ = [
        '_satellite_system',
        '_signal_descriptor',
        '_prn',
        '_frequency',
        '_pseudorange',
        '_pseudorange_variance',
        '_pseudorange_rate_type',
        '_pseudorange_rate',
        '_pseudorange_rate_variance',
        '_carrier_phase',
        '_carrier_phase_variance',
        '_c_n0',
        '_lock_count',
        '_iono_correction_source',
        '_iono_correction_applied',
        '_tropo_correction_applied',
        '_signal_bias_correction_applied',
        '_num_integrity',
        '_integrity',
    ]

    _fields_and_field_types = {
        'satellite_system': 'aspn23_ros_interfaces/TypeSatnavSatelliteSystem',
        'signal_descriptor': 'aspn23_ros_interfaces/TypeSatnavSignalDescriptor',
        'prn': 'int16',
        'frequency': 'double',
        'pseudorange': 'double',
        'pseudorange_variance': 'float',
        'pseudorange_rate_type': 'uint8',
        'pseudorange_rate': 'double',
        'pseudorange_rate_variance': 'float',
        'carrier_phase': 'double',
        'carrier_phase_variance': 'float',
        'c_n0': 'float',
        'lock_count': 'int32',
        'iono_correction_source': 'uint8',
        'iono_correction_applied': 'boolean',
        'tropo_correction_applied': 'boolean',
        'signal_bias_correction_applied': 'boolean',
        'num_integrity': 'uint8',
        'integrity': 'sequence<aspn23_ros_interfaces/TypeIntegrity>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aspn23_ros_interfaces', 'msg'], 'TypeSatnavSatelliteSystem'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aspn23_ros_interfaces', 'msg'], 'TypeSatnavSignalDescriptor'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['aspn23_ros_interfaces', 'msg'], 'TypeIntegrity')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aspn23_ros_interfaces.msg import TypeSatnavSatelliteSystem
        self.satellite_system = kwargs.get('satellite_system', TypeSatnavSatelliteSystem())
        from aspn23_ros_interfaces.msg import TypeSatnavSignalDescriptor
        self.signal_descriptor = kwargs.get('signal_descriptor', TypeSatnavSignalDescriptor())
        self.prn = kwargs.get('prn', int())
        self.frequency = kwargs.get('frequency', float())
        self.pseudorange = kwargs.get('pseudorange', float())
        self.pseudorange_variance = kwargs.get('pseudorange_variance', float())
        self.pseudorange_rate_type = kwargs.get('pseudorange_rate_type', int())
        self.pseudorange_rate = kwargs.get('pseudorange_rate', float())
        self.pseudorange_rate_variance = kwargs.get('pseudorange_rate_variance', float())
        self.carrier_phase = kwargs.get('carrier_phase', float())
        self.carrier_phase_variance = kwargs.get('carrier_phase_variance', float())
        self.c_n0 = kwargs.get('c_n0', float())
        self.lock_count = kwargs.get('lock_count', int())
        self.iono_correction_source = kwargs.get('iono_correction_source', int())
        self.iono_correction_applied = kwargs.get('iono_correction_applied', bool())
        self.tropo_correction_applied = kwargs.get('tropo_correction_applied', bool())
        self.signal_bias_correction_applied = kwargs.get('signal_bias_correction_applied', bool())
        self.num_integrity = kwargs.get('num_integrity', int())
        self.integrity = kwargs.get('integrity', [])

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
        if self.satellite_system != other.satellite_system:
            return False
        if self.signal_descriptor != other.signal_descriptor:
            return False
        if self.prn != other.prn:
            return False
        if self.frequency != other.frequency:
            return False
        if self.pseudorange != other.pseudorange:
            return False
        if self.pseudorange_variance != other.pseudorange_variance:
            return False
        if self.pseudorange_rate_type != other.pseudorange_rate_type:
            return False
        if self.pseudorange_rate != other.pseudorange_rate:
            return False
        if self.pseudorange_rate_variance != other.pseudorange_rate_variance:
            return False
        if self.carrier_phase != other.carrier_phase:
            return False
        if self.carrier_phase_variance != other.carrier_phase_variance:
            return False
        if self.c_n0 != other.c_n0:
            return False
        if self.lock_count != other.lock_count:
            return False
        if self.iono_correction_source != other.iono_correction_source:
            return False
        if self.iono_correction_applied != other.iono_correction_applied:
            return False
        if self.tropo_correction_applied != other.tropo_correction_applied:
            return False
        if self.signal_bias_correction_applied != other.signal_bias_correction_applied:
            return False
        if self.num_integrity != other.num_integrity:
            return False
        if self.integrity != other.integrity:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def signal_descriptor(self):
        """Message field 'signal_descriptor'."""
        return self._signal_descriptor

    @signal_descriptor.setter
    def signal_descriptor(self, value):
        if __debug__:
            from aspn23_ros_interfaces.msg import TypeSatnavSignalDescriptor
            assert \
                isinstance(value, TypeSatnavSignalDescriptor), \
                "The 'signal_descriptor' field must be a sub message of type 'TypeSatnavSignalDescriptor'"
        self._signal_descriptor = value

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
    def frequency(self):
        """Message field 'frequency'."""
        return self._frequency

    @frequency.setter
    def frequency(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'frequency' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'frequency' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._frequency = value

    @builtins.property
    def pseudorange(self):
        """Message field 'pseudorange'."""
        return self._pseudorange

    @pseudorange.setter
    def pseudorange(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pseudorange' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pseudorange' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pseudorange = value

    @builtins.property
    def pseudorange_variance(self):
        """Message field 'pseudorange_variance'."""
        return self._pseudorange_variance

    @pseudorange_variance.setter
    def pseudorange_variance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pseudorange_variance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pseudorange_variance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pseudorange_variance = value

    @builtins.property
    def pseudorange_rate_type(self):
        """Message field 'pseudorange_rate_type'."""
        return self._pseudorange_rate_type

    @pseudorange_rate_type.setter
    def pseudorange_rate_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pseudorange_rate_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'pseudorange_rate_type' field must be an unsigned integer in [0, 255]"
        self._pseudorange_rate_type = value

    @builtins.property
    def pseudorange_rate(self):
        """Message field 'pseudorange_rate'."""
        return self._pseudorange_rate

    @pseudorange_rate.setter
    def pseudorange_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pseudorange_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pseudorange_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pseudorange_rate = value

    @builtins.property
    def pseudorange_rate_variance(self):
        """Message field 'pseudorange_rate_variance'."""
        return self._pseudorange_rate_variance

    @pseudorange_rate_variance.setter
    def pseudorange_rate_variance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pseudorange_rate_variance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pseudorange_rate_variance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pseudorange_rate_variance = value

    @builtins.property
    def carrier_phase(self):
        """Message field 'carrier_phase'."""
        return self._carrier_phase

    @carrier_phase.setter
    def carrier_phase(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'carrier_phase' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'carrier_phase' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._carrier_phase = value

    @builtins.property
    def carrier_phase_variance(self):
        """Message field 'carrier_phase_variance'."""
        return self._carrier_phase_variance

    @carrier_phase_variance.setter
    def carrier_phase_variance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'carrier_phase_variance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'carrier_phase_variance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._carrier_phase_variance = value

    @builtins.property
    def c_n0(self):
        """Message field 'c_n0'."""
        return self._c_n0

    @c_n0.setter
    def c_n0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'c_n0' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'c_n0' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._c_n0 = value

    @builtins.property
    def lock_count(self):
        """Message field 'lock_count'."""
        return self._lock_count

    @lock_count.setter
    def lock_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lock_count' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'lock_count' field must be an integer in [-2147483648, 2147483647]"
        self._lock_count = value

    @builtins.property
    def iono_correction_source(self):
        """Message field 'iono_correction_source'."""
        return self._iono_correction_source

    @iono_correction_source.setter
    def iono_correction_source(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'iono_correction_source' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'iono_correction_source' field must be an unsigned integer in [0, 255]"
        self._iono_correction_source = value

    @builtins.property
    def iono_correction_applied(self):
        """Message field 'iono_correction_applied'."""
        return self._iono_correction_applied

    @iono_correction_applied.setter
    def iono_correction_applied(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'iono_correction_applied' field must be of type 'bool'"
        self._iono_correction_applied = value

    @builtins.property
    def tropo_correction_applied(self):
        """Message field 'tropo_correction_applied'."""
        return self._tropo_correction_applied

    @tropo_correction_applied.setter
    def tropo_correction_applied(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'tropo_correction_applied' field must be of type 'bool'"
        self._tropo_correction_applied = value

    @builtins.property
    def signal_bias_correction_applied(self):
        """Message field 'signal_bias_correction_applied'."""
        return self._signal_bias_correction_applied

    @signal_bias_correction_applied.setter
    def signal_bias_correction_applied(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'signal_bias_correction_applied' field must be of type 'bool'"
        self._signal_bias_correction_applied = value

    @builtins.property
    def num_integrity(self):
        """Message field 'num_integrity'."""
        return self._num_integrity

    @num_integrity.setter
    def num_integrity(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_integrity' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'num_integrity' field must be an unsigned integer in [0, 255]"
        self._num_integrity = value

    @builtins.property
    def integrity(self):
        """Message field 'integrity'."""
        return self._integrity

    @integrity.setter
    def integrity(self, value):
        if __debug__:
            from aspn23_ros_interfaces.msg import TypeIntegrity
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
                 all(isinstance(v, TypeIntegrity) for v in value) and
                 True), \
                "The 'integrity' field must be a set or sequence and each value of type 'TypeIntegrity'"
        self._integrity = value
