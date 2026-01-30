# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aspn23_ros_interfaces:msg/TypeDirection2DToPoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'error_model_params'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TypeDirection2DToPoint(type):
    """Metaclass of message 'TypeDirection2DToPoint'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_NE_TO': 0,
        'ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_NE_FROM': 1,
        'ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_ELEVATION': 2,
        'ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_SENSOR': 3,
        'ASPN23_TYPE_DIRECTION_2D_TO_POINT_ERROR_MODEL_NONE': 0,
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
                'aspn23_ros_interfaces.msg.TypeDirection2DToPoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__type_direction2_d_to_point
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__type_direction2_d_to_point
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__type_direction2_d_to_point
            cls._TYPE_SUPPORT = module.type_support_msg__msg__type_direction2_d_to_point
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__type_direction2_d_to_point

            from aspn23_ros_interfaces.msg import TypeImageFeature
            if TypeImageFeature.__class__._TYPE_SUPPORT is None:
                TypeImageFeature.__class__.__import_type_support__()

            from aspn23_ros_interfaces.msg import TypeIntegrity
            if TypeIntegrity.__class__._TYPE_SUPPORT is None:
                TypeIntegrity.__class__.__import_type_support__()

            from aspn23_ros_interfaces.msg import TypeRemotePoint
            if TypeRemotePoint.__class__._TYPE_SUPPORT is None:
                TypeRemotePoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_NE_TO': cls.__constants['ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_NE_TO'],
            'ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_NE_FROM': cls.__constants['ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_NE_FROM'],
            'ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_ELEVATION': cls.__constants['ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_ELEVATION'],
            'ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_SENSOR': cls.__constants['ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_SENSOR'],
            'ASPN23_TYPE_DIRECTION_2D_TO_POINT_ERROR_MODEL_NONE': cls.__constants['ASPN23_TYPE_DIRECTION_2D_TO_POINT_ERROR_MODEL_NONE'],
        }

    @property
    def ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_NE_TO(self):
        """Message constant 'ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_NE_TO'."""
        return Metaclass_TypeDirection2DToPoint.__constants['ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_NE_TO']

    @property
    def ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_NE_FROM(self):
        """Message constant 'ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_NE_FROM'."""
        return Metaclass_TypeDirection2DToPoint.__constants['ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_NE_FROM']

    @property
    def ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_ELEVATION(self):
        """Message constant 'ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_ELEVATION'."""
        return Metaclass_TypeDirection2DToPoint.__constants['ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_ELEVATION']

    @property
    def ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_SENSOR(self):
        """Message constant 'ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_SENSOR'."""
        return Metaclass_TypeDirection2DToPoint.__constants['ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_SENSOR']

    @property
    def ASPN23_TYPE_DIRECTION_2D_TO_POINT_ERROR_MODEL_NONE(self):
        """Message constant 'ASPN23_TYPE_DIRECTION_2D_TO_POINT_ERROR_MODEL_NONE'."""
        return Metaclass_TypeDirection2DToPoint.__constants['ASPN23_TYPE_DIRECTION_2D_TO_POINT_ERROR_MODEL_NONE']


class TypeDirection2DToPoint(metaclass=Metaclass_TypeDirection2DToPoint):
    """
    Message class 'TypeDirection2DToPoint'.

    Constants:
      ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_NE_TO
      ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_NE_FROM
      ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_ELEVATION
      ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_SENSOR
      ASPN23_TYPE_DIRECTION_2D_TO_POINT_ERROR_MODEL_NONE
    """

    __slots__ = [
        '_remote_point',
        '_reference',
        '_obs',
        '_variance',
        '_has_observation_characteristics',
        '_observation_characteristics',
        '_error_model',
        '_num_error_model_params',
        '_error_model_params',
        '_num_integrity',
        '_integrity',
    ]

    _fields_and_field_types = {
        'remote_point': 'aspn23_ros_interfaces/TypeRemotePoint',
        'reference': 'uint8',
        'obs': 'double',
        'variance': 'double',
        'has_observation_characteristics': 'boolean',
        'observation_characteristics': 'aspn23_ros_interfaces/TypeImageFeature',
        'error_model': 'uint8',
        'num_error_model_params': 'uint16',
        'error_model_params': 'sequence<double>',
        'num_integrity': 'uint8',
        'integrity': 'sequence<aspn23_ros_interfaces/TypeIntegrity>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aspn23_ros_interfaces', 'msg'], 'TypeRemotePoint'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aspn23_ros_interfaces', 'msg'], 'TypeImageFeature'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['aspn23_ros_interfaces', 'msg'], 'TypeIntegrity')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aspn23_ros_interfaces.msg import TypeRemotePoint
        self.remote_point = kwargs.get('remote_point', TypeRemotePoint())
        self.reference = kwargs.get('reference', int())
        self.obs = kwargs.get('obs', float())
        self.variance = kwargs.get('variance', float())
        self.has_observation_characteristics = kwargs.get('has_observation_characteristics', bool())
        from aspn23_ros_interfaces.msg import TypeImageFeature
        self.observation_characteristics = kwargs.get('observation_characteristics', TypeImageFeature())
        self.error_model = kwargs.get('error_model', int())
        self.num_error_model_params = kwargs.get('num_error_model_params', int())
        self.error_model_params = array.array('d', kwargs.get('error_model_params', []))
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
        if self.remote_point != other.remote_point:
            return False
        if self.reference != other.reference:
            return False
        if self.obs != other.obs:
            return False
        if self.variance != other.variance:
            return False
        if self.has_observation_characteristics != other.has_observation_characteristics:
            return False
        if self.observation_characteristics != other.observation_characteristics:
            return False
        if self.error_model != other.error_model:
            return False
        if self.num_error_model_params != other.num_error_model_params:
            return False
        if self.error_model_params != other.error_model_params:
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
    def remote_point(self):
        """Message field 'remote_point'."""
        return self._remote_point

    @remote_point.setter
    def remote_point(self, value):
        if __debug__:
            from aspn23_ros_interfaces.msg import TypeRemotePoint
            assert \
                isinstance(value, TypeRemotePoint), \
                "The 'remote_point' field must be a sub message of type 'TypeRemotePoint'"
        self._remote_point = value

    @builtins.property
    def reference(self):
        """Message field 'reference'."""
        return self._reference

    @reference.setter
    def reference(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reference' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'reference' field must be an unsigned integer in [0, 255]"
        self._reference = value

    @builtins.property
    def obs(self):
        """Message field 'obs'."""
        return self._obs

    @obs.setter
    def obs(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'obs' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'obs' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._obs = value

    @builtins.property
    def variance(self):
        """Message field 'variance'."""
        return self._variance

    @variance.setter
    def variance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'variance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'variance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._variance = value

    @builtins.property
    def has_observation_characteristics(self):
        """Message field 'has_observation_characteristics'."""
        return self._has_observation_characteristics

    @has_observation_characteristics.setter
    def has_observation_characteristics(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_observation_characteristics' field must be of type 'bool'"
        self._has_observation_characteristics = value

    @builtins.property
    def observation_characteristics(self):
        """Message field 'observation_characteristics'."""
        return self._observation_characteristics

    @observation_characteristics.setter
    def observation_characteristics(self, value):
        if __debug__:
            from aspn23_ros_interfaces.msg import TypeImageFeature
            assert \
                isinstance(value, TypeImageFeature), \
                "The 'observation_characteristics' field must be a sub message of type 'TypeImageFeature'"
        self._observation_characteristics = value

    @builtins.property
    def error_model(self):
        """Message field 'error_model'."""
        return self._error_model

    @error_model.setter
    def error_model(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error_model' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'error_model' field must be an unsigned integer in [0, 255]"
        self._error_model = value

    @builtins.property
    def num_error_model_params(self):
        """Message field 'num_error_model_params'."""
        return self._num_error_model_params

    @num_error_model_params.setter
    def num_error_model_params(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_error_model_params' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'num_error_model_params' field must be an unsigned integer in [0, 65535]"
        self._num_error_model_params = value

    @builtins.property
    def error_model_params(self):
        """Message field 'error_model_params'."""
        return self._error_model_params

    @error_model_params.setter
    def error_model_params(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'error_model_params' array.array() must have the type code of 'd'"
            self._error_model_params = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'error_model_params' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._error_model_params = array.array('d', value)

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
