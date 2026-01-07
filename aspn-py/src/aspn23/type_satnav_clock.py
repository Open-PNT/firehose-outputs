"""
This code is generated via firehose.
DO NOT hand edit code.  Make any changes required using the firehose repo instead.
"""


from dataclasses import dataclass
from typing import Optional

from numpy.typing import NDArray


@dataclass
class TypeSatnavClock:
    """
    satnav broadcast parameters required to calculate sv clock corrections

    ### Attributes

    t_oc - float:
            Clock reference time.

    af_0 - float:
            Satellite clock bias.

    af_1 - float:
            Satellite clock drift.

    af_2 - float:
            Satellite clock drift rate.
    """

    t_oc: float
    af_0: float
    af_1: float
    af_2: float
