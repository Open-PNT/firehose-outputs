"""
This code is generated via firehose.
DO NOT hand edit code.  Make any changes required using the firehose repo instead.
"""

from dataclasses import dataclass
from enum import Enum
from typing import List, Optional

import numpy as np
from numpy.typing import NDArray

from .aspn_base import AspnBase
from .type_header import TypeHeader
from .type_integrity import TypeIntegrity
from .type_timestamp import TypeTimestamp


class MeasurementDirectionOfMotion3DReferenceFrame(Enum):

    """
    Defines measurement reference.
    """

    """
    Direction of motion with respect to earth-centered inertial (ECi) frame, expressed in an
    earth-centered inertial frame. See also ECi coordinate frame definition for x, y, and z definitions.
    """
    ECI = 0

    """
    Direction of motion with respect to earth-fixed frame expressed in earth-centered, earth-fixed
    (ECEF) frame. See also ECEF coordinate frame definition for x, y, and z definitions.
    """
    ECEF = 1

    """
    Local level, geodetic velocity: Velocity with respect to earth-fixed frame expressed in the
    North-East-Down (NED), local level frame. See also NED coordinate frame definition for N, E, and D
    definitions.
    """
    NED = 2

    """
    Direction of motion with respect to earth-fixed frame expressed in sensor coordinate frame.
    Sensor coordinate frame is defined in sensor metadataHeader.
    """
    SENSOR = 3


class MeasurementDirectionOfMotion3DErrorModel(Enum):

    """
    Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
    """

    """
    No additional error model provided (num_error_model_params = 0).
    """
    NONE = 0


@dataclass
class MeasurementDirectionOfMotion3D(AspnBase):
    """
    Direction of motion represented as a unit vector.

    ### Attributes

    header - TypeHeader:
            Standard ASPN measurement header.

    time_of_validity - TypeTimestamp:
            Time at which the measurement is considered to be valid.

    reference_frame - MeasurementDirectionOfMotion3DReferenceFrame:
            Defines measurement reference.

    obs - NDArray[np.float64]:
            Direction of motion represented as a unit vector.

    error_vector - NDArray[np.float64]:
            Error is expressed as rotation uncertainty about two axes, error_vector and and a
            second error vector that is orthogonal to both the obs vector and the error_vector.

    covariance - NDArray[np.float64]:
            Error is expressed as rotation uncertainty about the following two axes: 1)
            error_vector, and 2) a second error vector that is orthogonal to both the obs direction
            vector and the error_vector.

    error_model - MeasurementDirectionOfMotion3DErrorModel:
            Defines an optional error model for other than zero-mean, additive, white Gaussian
            noise (AWGN).

    error_model_params - NDArray[np.float64]:
            Error model parameters that characterize the optional error model.

    integrity - List[TypeIntegrity]:
            Measurement integrity. Includes the integrity method used and an integrity value
            (which is to be interpreted based upon the integrity method). The intent of allowing
            num_integrity > 1 is to report multiple integrity values based on multiple integrity
            methods.
    """

    header: TypeHeader
    time_of_validity: TypeTimestamp
    reference_frame: MeasurementDirectionOfMotion3DReferenceFrame
    obs: NDArray[np.float64]
    error_vector: NDArray[np.float64]
    covariance: NDArray[np.float64]
    error_model: MeasurementDirectionOfMotion3DErrorModel
    error_model_params: NDArray[np.float64]
    integrity: List[TypeIntegrity]
