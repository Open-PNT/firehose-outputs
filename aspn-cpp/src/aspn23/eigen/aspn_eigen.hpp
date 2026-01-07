
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

#include <functional>
#include <memory>

#include <aspn23/aspn.h>
#include "TypeDirection2DToPoint.hpp"
#include "TypeDirection3DToPoint.hpp"
#include "TypeHeader.hpp"
#include "TypeImageFeature.hpp"
#include "TypeIntegrity.hpp"
#include "TypeKeplerOrbit.hpp"
#include "TypeMetadataheader.hpp"
#include "TypeMounting.hpp"
#include "TypeRemotePoint.hpp"
#include "TypeSatnavClock.hpp"
#include "TypeSatnavObs.hpp"
#include "TypeSatnavSatelliteSystem.hpp"
#include "TypeSatnavSignalDescriptor.hpp"
#include "TypeSatnavSvData.hpp"
#include "TypeSatnavTime.hpp"
#include "TypeTimestamp.hpp"
#include "MetadataBeidouEphemeris.hpp"
#include "MetadataGlonassEphemeris.hpp"
#include "MetadataGpsCnavEphemeris.hpp"
#include "MetadataGpsLnavEphemeris.hpp"
#include "MetadataGpsMnavEphemeris.hpp"
#include "MetadataGpsIonoUtcParameters.hpp"
#include "MetadataGalileoEphemeris.hpp"
#include "MetadataImu.hpp"
#include "MetadataGeneric.hpp"
#include "MetadataImageFeatures.hpp"
#include "MetadataMagneticField.hpp"
#include "MetadataSatnavObs.hpp"
#include "MeasurementImu.hpp"
#include "MeasurementTdoa1Tx2Rx.hpp"
#include "MeasurementTdoa2Tx1Rx.hpp"
#include "MeasurementAccumulatedDistanceTraveled.hpp"
#include "MeasurementAltitude.hpp"
#include "MeasurementAngularVelocity.hpp"
#include "MeasurementAngularVelocity1D.hpp"
#include "MeasurementAttitude2D.hpp"
#include "MeasurementAttitude3D.hpp"
#include "MeasurementBarometer.hpp"
#include "MeasurementDeltaPosition.hpp"
#include "MeasurementDeltaRange.hpp"
#include "MeasurementDeltaRangeToPoint.hpp"
#include "MeasurementDirection2DToPoints.hpp"
#include "MeasurementDirection3DToPoints.hpp"
#include "MeasurementDirectionOfMotion2D.hpp"
#include "MeasurementDirectionOfMotion3D.hpp"
#include "MeasurementFrequencyDifference.hpp"
#include "MeasurementHeading.hpp"
#include "MeasurementImage.hpp"
#include "MeasurementMagneticField.hpp"
#include "MeasurementMagneticFieldMagnitude.hpp"
#include "MeasurementPosition.hpp"
#include "MeasurementPositionAttitude.hpp"
#include "MeasurementPositionVelocityAttitude.hpp"
#include "MeasurementRangeRateToPoint.hpp"
#include "MeasurementRangeToPoint.hpp"
#include "MeasurementSatnav.hpp"
#include "MeasurementSatnavSubframe.hpp"
#include "MeasurementSatnavWithSvData.hpp"
#include "MeasurementSpecificForce1D.hpp"
#include "MeasurementSpeed.hpp"
#include "MeasurementTemperature.hpp"
#include "MeasurementTime.hpp"
#include "MeasurementTimeDifference.hpp"
#include "MeasurementTimeFrequencyDifference.hpp"
#include "MeasurementVelocity.hpp"

namespace aspn_eigen = aspn23_eigen;

namespace aspn23_eigen {

// An alias for cases where the object has been up-casted and should be
// down-casted before using it.
using AspnBase = TypeHeader;

bool is_core_message(std::shared_ptr<aspn23_eigen::AspnBase> base);

TypeTimestamp get_time(std::shared_ptr<aspn23_eigen::AspnBase> parent);
void set_time(std::shared_ptr<aspn23_eigen::AspnBase> parent, TypeTimestamp time);

TypeTimestamp convert_time(const AspnTypeTimestamp& time);
AspnTypeTimestamp convert_time(const TypeTimestamp& time);

/**
 * Downcasts \p parent to the type specified by parent->message_type,
 * passes it to the appropriate ASPN-C++ class' constructor, then returns the
 * up-casted result. This process renders \p parent unusable by stealing the
 * underlying data.
 *
 * If \p take_ownership is set to true, then the C++ object will assume
 * ownership of the C object. This means that the C++ object will destroy
 * the C object at the end of the C++ object's life. If \p take_ownership is
 * set to false then the caller is responsible for cleaning up the C object.
 *
 * If \p custom_deleter is set, then the returned shared_ptr will use the
 * custom deleter when cleaning up memory for the return type.
 *
 * Warning: this function should only be called with message type that has
 * been up-casted to a Aspn23TypeHeader (AspnBase), never an actual
 * Aspn23TypeHeader.
 */
std::shared_ptr<aspn23_eigen::AspnBase> convert_message(
    Aspn23TypeHeader* parent,
    bool take_ownership = true,
    std::function<void(aspn23_eigen::AspnBase*)> custom_deleter =
        std::default_delete<aspn23_eigen::AspnBase>());

/**
 * Downcasts \p parent to the type specified by parent->get_message_type(),
 * copies the data, then returns the up-casted result.
 *
 * Warning: this function should only be called with message type that has
 * been up-casted to a TypeHeader (aspn23_eigen::AspnBase), never an actual TypeHeader.
 */
std::shared_ptr<aspn23_eigen::AspnBase> copy_message(
    std::shared_ptr<aspn23_eigen::AspnBase> parent);

}  // namespace aspn23_eigen
