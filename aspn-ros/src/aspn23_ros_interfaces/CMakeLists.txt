cmake_minimum_required(VERSION 3.8)
project(aspn23_ros_interfaces)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(aspn23_ros_interfaces
  "msg/TypeDirection2DToPoint.msg"
  "msg/TypeDirection3DToPoint.msg"
  "msg/TypeHeader.msg"
  "msg/TypeImageFeature.msg"
  "msg/TypeIntegrity.msg"
  "msg/TypeKeplerOrbit.msg"
  "msg/TypeMetadataheader.msg"
  "msg/TypeMounting.msg"
  "msg/TypeRemotePoint.msg"
  "msg/TypeSatnavClock.msg"
  "msg/TypeSatnavObs.msg"
  "msg/TypeSatnavSatelliteSystem.msg"
  "msg/TypeSatnavSignalDescriptor.msg"
  "msg/TypeSatnavSvData.msg"
  "msg/TypeSatnavTime.msg"
  "msg/TypeTimestamp.msg"
  "msg/MetadataBeidouEphemeris.msg"
  "msg/MetadataGlonassEphemeris.msg"
  "msg/MetadataGpsCnavEphemeris.msg"
  "msg/MetadataGpsLnavEphemeris.msg"
  "msg/MetadataGpsMnavEphemeris.msg"
  "msg/MetadataGpsIonoUtcParameters.msg"
  "msg/MetadataGalileoEphemeris.msg"
  "msg/MetadataImu.msg"
  "msg/MetadataGeneric.msg"
  "msg/MetadataImageFeatures.msg"
  "msg/MetadataMagneticField.msg"
  "msg/MetadataSatnavObs.msg"
  "msg/MeasurementImu.msg"
  "msg/MeasurementTdoa1Tx2Rx.msg"
  "msg/MeasurementTdoa2Tx1Rx.msg"
  "msg/MeasurementAccumulatedDistanceTraveled.msg"
  "msg/MeasurementAltitude.msg"
  "msg/MeasurementAngularVelocity.msg"
  "msg/MeasurementAngularVelocity1D.msg"
  "msg/MeasurementAttitude2D.msg"
  "msg/MeasurementAttitude3D.msg"
  "msg/MeasurementBarometer.msg"
  "msg/MeasurementDeltaPosition.msg"
  "msg/MeasurementDeltaRange.msg"
  "msg/MeasurementDeltaRangeToPoint.msg"
  "msg/MeasurementDirection2DToPoints.msg"
  "msg/MeasurementDirection3DToPoints.msg"
  "msg/MeasurementDirectionOfMotion2D.msg"
  "msg/MeasurementDirectionOfMotion3D.msg"
  "msg/MeasurementFrequencyDifference.msg"
  "msg/MeasurementHeading.msg"
  "msg/MeasurementImage.msg"
  "msg/MeasurementMagneticField.msg"
  "msg/MeasurementMagneticFieldMagnitude.msg"
  "msg/MeasurementPosition.msg"
  "msg/MeasurementPositionAttitude.msg"
  "msg/MeasurementPositionVelocityAttitude.msg"
  "msg/MeasurementRangeRateToPoint.msg"
  "msg/MeasurementRangeToPoint.msg"
  "msg/MeasurementSatnav.msg"
  "msg/MeasurementSatnavSubframe.msg"
  "msg/MeasurementSatnavWithSvData.msg"
  "msg/MeasurementSpecificForce1D.msg"
  "msg/MeasurementSpeed.msg"
  "msg/MeasurementTemperature.msg"
  "msg/MeasurementTime.msg"
  "msg/MeasurementTimeDifference.msg"
  "msg/MeasurementTimeFrequencyDifference.msg"
  "msg/MeasurementVelocity.msg"
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()                