
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "MeasurementImu.h"

Aspn23MeasurementImu* ASPN_NULLABLE
aspn23_measurement_imu_new(Aspn23TypeHeader* header,
                           Aspn23TypeTimestamp* time_of_validity,
                           enum Aspn23MeasurementImuImuType imu_type,
                           double meas_accel[3],
                           double meas_gyro[3],
                           uint8_t num_integrity,
                           Aspn23TypeIntegrity* integrity) {
	Aspn23MeasurementImu* self = (struct Aspn23MeasurementImu*)malloc(sizeof(Aspn23MeasurementImu));
	if (NULL == self) return NULL;

	Aspn23TypeHeader* header_prep = aspn23_type_header_copy(header);
	self->header                  = *header_prep;
	free(header_prep);

	Aspn23TypeTimestamp* time_of_validity_prep = aspn23_type_timestamp_copy(time_of_validity);
	self->time_of_validity                     = *time_of_validity_prep;
	free(time_of_validity_prep);

	self->imu_type = imu_type;

	if (meas_accel != NULL)
		memcpy(self->meas_accel, meas_accel, 3 * sizeof(double));
	else
		for (size_t ii = 0; ii < 3; ii++) self->meas_accel[ii] = NAN;

	if (meas_gyro != NULL)
		memcpy(self->meas_gyro, meas_gyro, 3 * sizeof(double));
	else
		for (size_t ii = 0; ii < 3; ii++) self->meas_gyro[ii] = NAN;

	self->num_integrity = num_integrity;

	self->integrity = NULL;
	if (integrity != NULL && num_integrity != 0) {
		if (num_integrity == 0)
			self->integrity = NULL;
		else if (num_integrity > 0) {

			self->integrity =
			    (Aspn23TypeIntegrity*)calloc(num_integrity, sizeof(Aspn23TypeIntegrity));
			for (size_t ii = 0; ii < num_integrity; ii++) {
				Aspn23TypeIntegrity* pointer = aspn23_type_integrity_copy(&integrity[ii]);
				self->integrity[ii]          = *pointer;
				free(pointer);
			}

		} else {
			fprintf(
			    stderr,
			    "An error occurred: '%s' defines the length '%s' and must be a positive integer",
			    "num_integrity",
			    "integrity");
			aspn23_measurement_imu_free(self);
			return NULL;
		}
	}

	return self;
}

Aspn23MeasurementImu* ASPN_NULLABLE aspn23_measurement_imu_copy(Aspn23MeasurementImu* input) {
	Aspn23TypeHeader* header_prep = aspn23_type_header_copy(&input->header);
	Aspn23TypeTimestamp* time_of_validity_prep =
	    aspn23_type_timestamp_copy(&input->time_of_validity);
	Aspn23MeasurementImu* out = aspn23_measurement_imu_new(header_prep,
	                                                       time_of_validity_prep,
	                                                       input->imu_type,
	                                                       input->meas_accel,
	                                                       input->meas_gyro,
	                                                       input->num_integrity,
	                                                       input->integrity);
	aspn23_type_header_free(header_prep);
	aspn23_type_timestamp_free(time_of_validity_prep);
	return out;
}

void aspn23_measurement_imu_free(void* pointer) {
	Aspn23MeasurementImu* self = (Aspn23MeasurementImu*)pointer;
	if (NULL == self) return;
	aspn23_measurement_imu_free_members(self);
	free(self);
}

void aspn23_measurement_imu_free_members(Aspn23MeasurementImu* self) {
	if (NULL == self) return;
	aspn23_type_header_free_members(&self->header);
	aspn23_type_timestamp_free_members(&self->time_of_validity);

	if (self->integrity != NULL && self->num_integrity != 0) {
		for (size_t ii = 0; ii < self->num_integrity; ii++)
			aspn23_type_integrity_free_members(&self->integrity[ii]);
		free(self->integrity);
	}
}
