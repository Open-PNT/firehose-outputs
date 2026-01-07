
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "MeasurementAngularVelocity1D.h"

Aspn23MeasurementAngularVelocity1D* ASPN_NULLABLE aspn23_measurement_angular_velocity_1d_new(
    Aspn23TypeHeader* header,
    Aspn23TypeTimestamp* time_of_validity,
    enum Aspn23MeasurementAngularVelocity1DSensorType sensor_type,
    double obs,
    double variance,
    enum Aspn23MeasurementAngularVelocity1DErrorModel error_model,
    uint16_t num_error_model_params,
    double* error_model_params,
    uint8_t num_integrity,
    Aspn23TypeIntegrity* integrity) {
	Aspn23MeasurementAngularVelocity1D* self = (struct Aspn23MeasurementAngularVelocity1D*)malloc(
	    sizeof(Aspn23MeasurementAngularVelocity1D));
	if (NULL == self) return NULL;

	Aspn23TypeHeader* header_prep = aspn23_type_header_copy(header);
	self->header                  = *header_prep;
	free(header_prep);

	Aspn23TypeTimestamp* time_of_validity_prep = aspn23_type_timestamp_copy(time_of_validity);
	self->time_of_validity                     = *time_of_validity_prep;
	free(time_of_validity_prep);

	self->sensor_type            = sensor_type;
	self->obs                    = obs;
	self->variance               = variance;
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
			aspn23_measurement_angular_velocity_1d_free(self);
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
			aspn23_measurement_angular_velocity_1d_free(self);
			return NULL;
		}
	}

	return self;
}

Aspn23MeasurementAngularVelocity1D* ASPN_NULLABLE
aspn23_measurement_angular_velocity_1d_copy(Aspn23MeasurementAngularVelocity1D* input) {
	Aspn23TypeHeader* header_prep = aspn23_type_header_copy(&input->header);
	Aspn23TypeTimestamp* time_of_validity_prep =
	    aspn23_type_timestamp_copy(&input->time_of_validity);
	Aspn23MeasurementAngularVelocity1D* out =
	    aspn23_measurement_angular_velocity_1d_new(header_prep,
	                                               time_of_validity_prep,
	                                               input->sensor_type,
	                                               input->obs,
	                                               input->variance,
	                                               input->error_model,
	                                               input->num_error_model_params,
	                                               input->error_model_params,
	                                               input->num_integrity,
	                                               input->integrity);
	aspn23_type_header_free(header_prep);
	aspn23_type_timestamp_free(time_of_validity_prep);
	return out;
}

void aspn23_measurement_angular_velocity_1d_free(void* pointer) {
	Aspn23MeasurementAngularVelocity1D* self = (Aspn23MeasurementAngularVelocity1D*)pointer;
	if (NULL == self) return;
	aspn23_measurement_angular_velocity_1d_free_members(self);
	free(self);
}

void aspn23_measurement_angular_velocity_1d_free_members(Aspn23MeasurementAngularVelocity1D* self) {
	if (NULL == self) return;
	aspn23_type_header_free_members(&self->header);
	aspn23_type_timestamp_free_members(&self->time_of_validity);

	if (self->error_model_params != NULL && self->num_error_model_params != 0) {
		free(self->error_model_params);
	}

	if (self->integrity != NULL && self->num_integrity != 0) {
		for (size_t ii = 0; ii < self->num_integrity; ii++)
			aspn23_type_integrity_free_members(&self->integrity[ii]);
		free(self->integrity);
	}
}
