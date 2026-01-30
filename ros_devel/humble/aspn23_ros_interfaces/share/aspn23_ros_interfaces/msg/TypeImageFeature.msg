
# This code is generated via firehose.
# DO NOT hand edit code.  Make any changes required using the firehose repo instead

# Image feature characteristics

# Description: Value representing the magnitude of the response of the keypoint detection algorithm
# used to locate this keypoint in the image.
# Units: none
float64 response

# Description: Value representing the orientation of the detected keypoint, as measured relative to
# the image coordinate system (radians, clockwise). Metadata flag determines if this field is
# calculated by the current keypoint detector.
# Units: rad
float64 orientation

# Description: Effective size (pixels) of the detected keypoint. This field takes into consideration
# the octave and kernel used to localize the keypoint, and normalizes to the original size of the
# image.
# Units: pixels
float64 size

# Description: ID that ties the detected keypoint to a class or group of keypoints.
# Units: none
uint16 class_id

# Description: Octave or pyramid layer from which the detected keypoint was extracted.
# Units: none
uint16 octave

# Description: Size of the descriptor in bytes.
# Units: none
uint16 descriptor_size

# Description: Feature descriptor.
# Units: none
# Note: array length is descriptor_size
uint8[] descriptor
