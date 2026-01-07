"""
This code is generated via firehose.
DO NOT hand edit code.  Make any changes required using the firehose repo instead.
"""


from dataclasses import dataclass
from typing import Optional

from numpy.typing import NDArray

from .aspn_base import AspnBase
from .type_metadataheader import TypeMetadataheader
from .type_mounting import TypeMounting
from .type_timestamp import TypeTimestamp


@dataclass
class MetadataGeneric(AspnBase):
    """
    Metadata for a generic sensor.

    ### Attributes

    info - TypeMetadataheader:
            Standard ASPN metadata header.

    time_of_validity - TypeTimestamp:
            Time at which the measurement is considered to be valid.

    mounting - TypeMounting:
            Standard ASPN mounting information.
    """

    info: TypeMetadataheader
    time_of_validity: TypeTimestamp
    mounting: TypeMounting
