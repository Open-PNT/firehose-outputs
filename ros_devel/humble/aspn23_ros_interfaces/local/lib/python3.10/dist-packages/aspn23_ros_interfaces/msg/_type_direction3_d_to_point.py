# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aspn23_ros_interfaces:msg/TypeDirection3DToPoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'error_model_params'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'obs'
# Member 'covariance'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TypeDirection3DToPoint(type):
    """Metaclass of message 'TypeDirection3DToPoint'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_AZ_EL': 0,
        'ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_PIXEL': 1,
        'ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_NORMALIZED_IMAGE': 2,
        'ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_SINE_SPACE': 3,
        'ASPN23_TYPE_DIRECTION_3D_TO_POINT_ERROR_MODEL_NONE': 0,
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
                'aspn23_ros_interfaces.msg.TypeDirection3DToPoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__type_direction3_d_to_point
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__type_direction3_d_to_point
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__type_direction3_d_to_point
            cls._TYPE_SUPPORT = module.type_support_msg__msg__type_direction3_d_to_point
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__type_direction3_d_to_point

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
            'ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_AZ_EL': cls.__constants['ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_AZ_EL'],
            'ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_PIXEL': cls.__constants['ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_PIXEL'],
            'ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_NORMALIZED_IMAGE': cls.__constants['ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_NORMALIZED_IMAGE'],
            'ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_SINE_SPACE': cls.__constants['ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_SINE_SPACE'],
            'ASPN23_TYPE_DIRECTION_3D_TO_POINT_ERROR_MODEL_NONE': cls.__constants['ASPN23_TYPE_DIRECTION_3D_TO_POINT_ERROR_MODEL_NONE'],
        }

    @property
    def ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_AZ_EL(self):
        """Message constant 'ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_AZ_EL'."""
        return Metaclass_TypeDirection3DToPoint.__constants['ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_AZ_EL']

    @property
    def ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_PIXEL(self):
        """Message constant 'ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_PIXEL'."""
        return Metaclass_TypeDirection3DToPoint.__constants['ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_PIXEL']

    @property
    def ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_NORMALIZED_IMAGE(self):
        """Message constant 'ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_NORMALIZED_IMAGE'."""
        return Metaclass_TypeDirection3DToPoint.__constants['ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_NORMALIZED_IMAGE']

    @property
    def ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_SINE_SPACE(self):
        """Message constant 'ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_SINE_SPACE'."""
        return Metaclass_TypeDirection3DToPoint.__constants['ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_SINE_SPACE']

    @property
    def ASPN23_TYPE_DIRECTION_3D_TO_POINT_ERROR_MODEL_NONE(self):
        """Message constant 'ASPN23_TYPE_DIRECTION_3D_TO_POINT_ERROR_MODEL_NONE'."""
        return Metaclass_TypeDirection3DToPoint.__constants['ASPN23_TYPE_DIRECTION_3D_TO_POINT_ERROR_MODEL_NONE']


class TypeDirection3DToPoint(metaclass=Metaclass_TypeDirection3DToPoint):
    """
    Message class 'TypeDirection3DToPoint'.

    Constants:
      ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_AZ_EL
      ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_PIXEL
      ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_NORMALIZED_IMAGE
      ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_SINE_SPACE
      ASPN23_TYPE_DIRECTION_3D_TO_POINT_ERROR_MODEL_NONE
    """

    __slots__ = [
        '_remote_point',
        '_reference_frame',
        '_obs',
        '_covariance',
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
        'reference_frame': 'uint8',
        'obs': 'double[2]',
        'covariance': 'double[4]',
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
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 4),  # noqa: E501
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
        self.reference_frame = kwargs.get('reference_frame', int())
        if 'obs' not in kwargs:
            self.obs = numpy.zeros(2, dtype=numpy.float64)
        else:
            self.obs = kwargs.get('obs')
        if 'covariance' not in kwargs:
            self.covariance = numpy.zeros(4, dtype=numpy.float64)
        else:
            self.covariance = kwargs.get('covariance')
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
        if self.reference_frame != other.reference_frame:
            return False
        if any(self.obs != other.obs):
            return False
        if any(self.covariance != other.covariance):
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
    def reference_frame(self):
        """Message field 'reference_frame'."""
        return self._reference_frame

    @reference_frame.setter
    def reference_frame(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reference_frame' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'reference_frame' field must be an unsigned integer in [0, 255]"
        self._reference_frame = value

    @builtins.property
    def obs(self):
        """Message field 'obs'."""
        return self._obs

    @obs.setter
    def obs(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'obs' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 2, \
                "The 'obs' numpy.ndarray() must have a size of 2"
            self._obs = value
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
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'obs' field must be a set or sequence with length 2 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._obs = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def covariance(self):
        """Message field 'covariance'."""
        return self._covariance

    @covariance.setter
    def covariance(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'covariance' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 4, \
                "The 'covariance' numpy.ndarray() must have a size of 4"
            self._covariance = value
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
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'covariance' field must be a set or sequence with length 4 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._covariance = numpy.array(value, dtype=numpy.float64)

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
