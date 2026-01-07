"""
This code is generated via firehose.
DO NOT hand edit code.  Make any changes required using the firehose repo instead.
"""


from dataclasses import dataclass
from typing import List, Optional

from numpy.typing import NDArray

from .aspn_base import AspnBase
from .type_direction_3d_to_point import TypeDirection3DToPoint
from .type_header import TypeHeader
from .type_timestamp import TypeTimestamp


@dataclass
class MeasurementDirection3DToPoints(AspnBase):
    """
    3D direction to points.

    ### Attributes

    header - TypeHeader:
            Standard ASPN measurement header.

    time_of_validity - TypeTimestamp:
            Time at which the measurement is considered to be valid.

    obs - List[TypeDirection3DToPoint]:
            Array of observations.
    """

    header: TypeHeader
    time_of_validity: TypeTimestamp
    obs: List[TypeDirection3DToPoint]
