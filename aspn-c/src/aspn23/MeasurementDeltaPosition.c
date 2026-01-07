
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "MeasurementDeltaPosition.h"

Aspn23MeasurementDeltaPosition* ASPN_NULLABLE aspn23_measurement_delta_position_new(
    Aspn23TypeHeader* header,
    Aspn23TypeTimestamp* time_of_validity,
    enum Aspn23MeasurementDeltaPositionReferenceFrame reference_frame,
    double delta_t,
    uint8_t num_meas,
    double term1,
    double term2,
    double term3,
    double* covariance,
    enum Aspn23MeasurementDeltaPositionErrorModel error_model,
    uint16_t num_error_model_params,
    double* error_model_params,
    uint8_t num_integrity,
    Aspn23TypeIntegrity* integrity) {
	size_t covariance_elements;
	Aspn23MeasurementDeltaPosition* self =
	    (struct Aspn23MeasurementDeltaPosition*)malloc(sizeof(Aspn23MeasurementDeltaPosition));
	if (NULL == self) return NULL;

	Aspn23TypeHeader* header_prep = aspn23_type_header_copy(header);
	self->header                  = *header_prep;
	free(header_prep);

	Aspn23TypeTimestamp* time_of_validity_prep = aspn23_type_timestamp_copy(time_of_validity);
	self->time_of_validity                     = *time_of_validity_prep;
	free(time_of_validity_prep);

	self->reference_frame = reference_frame;
	self->delta_t         = delta_t;
	self->num_meas        = num_meas;
	self->term1           = term1;
	self->term2           = term2;
	self->term3           = term3;

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
			aspn23_measurement_delta_position_free(self);
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
			aspn23_measurement_delta_position_free(self);
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
			aspn23_measurement_delta_position_free(self);
			return NULL;
		}
	}

	return self;
}

Aspn23MeasurementDeltaPosition* ASPN_NULLABLE
aspn23_measurement_delta_position_copy(Aspn23MeasurementDeltaPosition* input) {
	Aspn23TypeHeader* header_prep = aspn23_type_header_copy(&input->header);
	Aspn23TypeTimestamp* time_of_validity_prep =
	    aspn23_type_timestamp_copy(&input->time_of_validity);
	Aspn23MeasurementDeltaPosition* out =
	    aspn23_measurement_delta_position_new(header_prep,
	                                          time_of_validity_prep,
	                                          input->reference_frame,
	                                          input->delta_t,
	                                          input->num_meas,
	                                          input->term1,
	                                          input->term2,
	                                          input->term3,
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

void aspn23_measurement_delta_position_free(void* pointer) {
	Aspn23MeasurementDeltaPosition* self = (Aspn23MeasurementDeltaPosition*)pointer;
	if (NULL == self) return;
	aspn23_measurement_delta_position_free_members(self);
	free(self);
}

void aspn23_measurement_delta_position_free_members(Aspn23MeasurementDeltaPosition* self) {
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
