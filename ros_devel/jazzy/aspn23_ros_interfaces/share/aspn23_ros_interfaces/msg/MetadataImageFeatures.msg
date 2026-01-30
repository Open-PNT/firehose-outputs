
# This code is generated via firehose.
# DO NOT hand edit code.  Make any changes required using the firehose repo instead

# Features from an optical camera.

# Description: Standard ASPN metadata header.
# Units: none
TypeMetadataheader info

# Description: Time at which the measurement is considered to be valid.
# Units: none
TypeTimestamp time_of_validity

# Enumerated field which provides the type of keypoint detector used.
uint8 keypoint_detector

# Keypoint detected using AGAST based detector.
uint8 ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_AGAST=0

# Keypoint detected using AKAZE based detector.
uint8 ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_AKAZE=1

# Keypoint detected using BRISK based detector.
uint8 ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_BRISK=2

# Keypoint detected using FAST based detector.
uint8 ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_FAST=3

# Keypoint detected using GFTT based detector.
uint8 ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_GFTT=4

# Keypoint detected using KAZE based detector.
uint8 ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_KAZE=5

# Keypoint detected using MSER based detector.
uint8 ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_MSER=6

# Keypoint detected using ORB based detector.
uint8 ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_ORB=7

# Keypoint detected using SIFT based detector.
uint8 ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_SIFT=8

# Keypoint detected using SURF based detector.
uint8 ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_SURF=9

# Keypoint detected using Harris based detector.
uint8 ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_HARRIS=10

# Keypoint detected using Shi-Tomasi based detector.
uint8 ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_SHI=11

# Keypoint detected using a detector not represented in this enum.
uint8 ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_OTHER=12

# Description: Set to true if the keypoint detector or descriptor extractor calculates and assigns a
# primary orientation to the features represented in the measurements.
# Units: none
bool orientation_calculated

# Enumerated field which provides the type of descriptor extractor used to generate the measurement
# descriptor vector.
uint8 descriptor_extractor

# Descriptor computed using the AKAZE extractor.
uint8 ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_AKAZE=0

# Descriptor computed using the BRISK extractor.
uint8 ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_BRISK=1

# Descriptor computed using the KAZE extractor.
uint8 ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_KAZE=2

# Descriptor computed using the ORB extractor.
uint8 ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_ORB=3

# Descriptor computed using the SIFT extractor.
uint8 ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_SIFT=4

# Descriptor computed using the SURF extractor.
uint8 ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_SURF=5

# Descriptor computed using an extractor not represented in this enum.
uint8 ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_OTHER=6

# Description: True if the descriptor byte order is big endian, false if it is little endian. Only
# applicable for descriptor_types with multi-byte elements.
# Units: none
bool is_bigendian

# Enumerated field describing the underlying datatype of the provided descriptor vector.
uint8 descriptor_type

# The descriptor data should be interpreted as an array of unsigned 8-bit ints.
uint8 ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_TYPE_UINT8=0

# The descriptor data should be interpreted as an array of 32-bit floats.
uint8 ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_TYPE_FLOAT32=1

# Description: The number of elements of type 'descriptor_type' in the descriptor data array. In
# type_image_feature, descriptor data is represented as an array of uint8 values whose length is given
# by 'descriptor_size'. Inconjunction with descriptor_type, these fields describe how that data should
# be interpreted. For example - descriptor_type UINT8: descriptor_number_of_elements ==
# descriptor_size - descriptor_type FLOAT32: (descriptor_number_of_elements * 4) == descriptor_size
# Units: none
uint16 descriptor_number_of_elements
