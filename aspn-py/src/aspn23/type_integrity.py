"""
This code is generated via firehose.
DO NOT hand edit code.  Make any changes required using the firehose repo instead.
"""


from dataclasses import dataclass
from typing import Optional

from numpy.typing import NDArray


@dataclass
class TypeIntegrity:
    """
    Integrity provides a numerical measure of the trustworthiness of the associated measurement. The
    integrity_method enum specifies the integrity method and the appropriate interpretation of the
    integrity_value.

    ### Attributes

    integrity_method - int:
            Enumerated field which describes the meaning of the integrity value. Integrity
            methods may use multiple enum entries if there is a need to pass multiple integrity
            values. For example, an integrity method with 3 parameters may use 3 enum entries (e.g.,
            MY_METHOD_VALUE1, MY_METHOD_VALUE2, MY_METHOD_VALUE3). When integrity is reported in a
            message, a vector of integrity types is passed. In the MY_METHOD example, num_integrity
            = 3 just for the MY_METHOD integrity. If additional integrity methods are also reported,
            then num_integrity would be greater than 3 to include those additional methods.

    integrity_value - Optional[Optional[float]]:
            Measurement integrity value to be interpreted based on the definition in the
            integrity_type enum.
    """

    integrity_method: int
    integrity_value: Optional[float]
