
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "MeasurementPositionVelocityAttitude.h"

Aspn23MeasurementPositionVelocityAttitude* ASPN_NULLABLE
aspn23_measurement_position_velocity_attitude_new(
    Aspn23TypeHeader* header,
    Aspn23TypeTimestamp* time_of_validity,
    enum Aspn23MeasurementPositionVelocityAttitudeReferenceFrame reference_frame,
    double p1,
    double p2,
    double p3,
    double v1,
    double v2,
    double v3,
    double quaternion[4],
    uint8_t num_meas,
    double* covariance,
    enum Aspn23MeasurementPositionVelocityAttitudeErrorModel error_model,
    uint16_t num_error_model_params,
    double* error_model_params,
    uint8_t num_integrity,
    Aspn23TypeIntegrity* integrity) {
	size_t covariance_elements;
	Aspn23MeasurementPositionVelocityAttitude* self =
	    (struct Aspn23MeasurementPositionVelocityAttitude*)malloc(
	        sizeof(Aspn23MeasurementPositionVelocityAttitude));
	if (NULL == self) return NULL;

	Aspn23TypeHeader* header_prep = aspn23_type_header_copy(header);
	self->header                  = *header_prep;
	free(header_prep);

	Aspn23TypeTimestamp* time_of_validity_prep = aspn23_type_timestamp_copy(time_of_validity);
	self->time_of_validity                     = *time_of_validity_prep;
	free(time_of_validity_prep);

	self->reference_frame = reference_frame;
	self->p1              = p1;
	self->p2              = p2;
	self->p3              = p3;
	self->v1              = v1;
	self->v2              = v2;
	self->v3              = v3;

	if (quaternion != NULL)
		memcpy(self->quaternion, quaternion, 4 * sizeof(double));
	else
		for (size_t ii = 0; ii < 4; ii++) self->quaternion[ii] = NAN;

	self->num_meas = num_meas;

	self->covariance = NULL;
	if (covariance != NULL && num_meas != 0 && num_meas != 0) {
		covariance_elements = num_meas * num_meas;
		if (covariance_elements > 0) {
			self->covariance = (double*)calloc(covariance_elements, sizeof(double));
			memcpy(self->covariance, covariance, covariance_elements * sizeof(double));
		} else {
			fprintf(stderr,
			        "An error occurred: (%s * %s) defines the row and column lengths of '%s' and "
			        "both must be a positive integer",
			        "num_meas",
			        "num_meas",
			        "covariance");
			aspn23_measurement_position_velocity_attitude_free(self);
			return NULL;
		}
	}

	self->error_model            = error_model;
	self->num_error_model_params = num_error_model_params;

	self->error_model_params = NULL;
	if (error_model_params != NULL && num_error_model_params != 0) {
		if (num_error_model_params == 0)
			self->error_model_params = NULL;
		else if (num_error_model_params > 0) {

			self->error_model_params = (double*)calloc(num_error_model_params, sizeof(double));
			memcpy(self->error_model_params,
			       error_model_params,
			       sizeof(double) * num_error_model_params);

		} else {
			fprintf(
			    stderr,
			    "An error occurred: '%s' defines the length '%s' and must be a positive integer",
			    "num_error_model_params",
			    "error_model_params");
			aspn23_measurement_position_velocity_attitude_free(self);
			return NULL;
		}
	}

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
			aspn23_measurement_position_velocity_attitude_free(self);
			return NULL;
		}
	}

	return self;
}

Aspn23MeasurementPositionVelocityAttitude* ASPN_NULLABLE
aspn23_measurement_position_velocity_attitude_copy(
    Aspn23MeasurementPositionVelocityAttitude* input) {
	Aspn23TypeHeader* header_prep = aspn23_type_header_copy(&input->header);
	Aspn23TypeTimestamp* time_of_validity_prep =
	    aspn23_type_timestamp_copy(&input->time_of_validity);
	Aspn23MeasurementPositionVelocityAttitude* out =
	    aspn23_measurement_position_velocity_attitude_new(header_prep,
	                                                      time_of_validity_prep,
	                                                      input->reference_frame,
	                                                      input->p1,
	                                                      input->p2,
	                                                      input->p3,
	                                                      input->v1,
	                                                      input->v2,
	                                                      input->v3,
	                                                      input->quaternion,
	                                                      input->num_meas,
	                                                      input->covariance,
	                                                      input->error_model,
	                                                      input->num_error_model_params,
	                                                      input->error_model_params,
	                                                      input->num_integrity,
	                                                      input->integrity);
	aspn23_type_header_free(header_prep);
	aspn23_type_timestamp_free(time_of_validity_prep);
	return out;
}

void aspn23_measurement_position_velocity_attitude_free(void* pointer) {
	Aspn23MeasurementPositionVelocityAttitude* self =
	    (Aspn23MeasurementPositionVelocityAttitude*)pointer;
	if (NULL == self) return;
	aspn23_measurement_position_velocity_attitude_free_members(self);
	free(self);
}

void aspn23_measurement_position_velocity_attitude_free_members(
    Aspn23MeasurementPositionVelocityAttitude* self) {
	if (NULL == self) return;
	aspn23_type_header_free_members(&self->header);
	aspn23_type_timestamp_free_members(&self->time_of_validity);
	free(self->covariance);

	if (self->error_model_params != NULL && self->num_error_model_params != 0) {
		free(self->error_model_params);
	}

	if (self->integrity != NULL && self->num_integrity != 0) {
		for (size_t ii = 0; ii < self->num_integrity; ii++)
			aspn23_type_integrity_free_members(&self->integrity[ii]);
		free(self->integrity);
	}
}
