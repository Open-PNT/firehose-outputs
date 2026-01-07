
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "MeasurementTime.h"

Aspn23MeasurementTime* ASPN_NULLABLE
aspn23_measurement_time_new(Aspn23TypeHeader* header,
                            Aspn23TypeTimestamp* time_of_validity,
                            int32_t time_of_validity_attosec,
                            uint8_t num_obs,
                            uint8_t* clock_id,
                            int64_t* elapsed_nsec,
                            int32_t* elapsed_attosec,
                            uint8_t digits_of_precision,
                            double* covariance,
                            enum Aspn23MeasurementTimeErrorModel error_model,
                            uint16_t num_error_model_params,
                            double* error_model_params,
                            uint8_t num_integrity,
                            Aspn23TypeIntegrity* integrity) {
	size_t covariance_elements;
	Aspn23MeasurementTime* self =
	    (struct Aspn23MeasurementTime*)malloc(sizeof(Aspn23MeasurementTime));
	if (NULL == self) return NULL;

	Aspn23TypeHeader* header_prep = aspn23_type_header_copy(header);
	self->header                  = *header_prep;
	free(header_prep);

	Aspn23TypeTimestamp* time_of_validity_prep = aspn23_type_timestamp_copy(time_of_validity);
	self->time_of_validity                     = *time_of_validity_prep;
	free(time_of_validity_prep);

	self->time_of_validity_attosec = time_of_validity_attosec;
	self->num_obs                  = num_obs;

	self->clock_id = NULL;
	if (clock_id != NULL && num_obs != 0) {
		if (num_obs == 0)
			self->clock_id = NULL;
		else if (num_obs > 0) {

			self->clock_id = (uint8_t*)calloc(num_obs, sizeof(uint8_t));
			memcpy(self->clock_id, clock_id, sizeof(uint8_t) * num_obs);

		} else {
			fprintf(
			    stderr,
			    "An error occurred: '%s' defines the length '%s' and must be a positive integer",
			    "num_obs",
			    "clock_id");
			aspn23_measurement_time_free(self);
			return NULL;
		}
	}

	self->elapsed_nsec = NULL;
	if (elapsed_nsec != NULL && num_obs != 0) {
		if (num_obs == 0)
			self->elapsed_nsec = NULL;
		else if (num_obs > 0) {

			self->elapsed_nsec = (int64_t*)calloc(num_obs, sizeof(int64_t));
			memcpy(self->elapsed_nsec, elapsed_nsec, sizeof(int64_t) * num_obs);

		} else {
			fprintf(
			    stderr,
			    "An error occurred: '%s' defines the length '%s' and must be a positive integer",
			    "num_obs",
			    "elapsed_nsec");
			aspn23_measurement_time_free(self);
			return NULL;
		}
	}

	self->elapsed_attosec = NULL;
	if (elapsed_attosec != NULL && num_obs != 0) {
		if (num_obs == 0)
			self->elapsed_attosec = NULL;
		else if (num_obs > 0) {

			self->elapsed_attosec = (int32_t*)calloc(num_obs, sizeof(int32_t));
			memcpy(self->elapsed_attosec, elapsed_attosec, sizeof(int32_t) * num_obs);

		} else {
			fprintf(
			    stderr,
			    "An error occurred: '%s' defines the length '%s' and must be a positive integer",
			    "num_obs",
			    "elapsed_attosec");
			aspn23_measurement_time_free(self);
			return NULL;
		}
	}

	self->digits_of_precision = digits_of_precision;

	self->covariance = NULL;
	if (covariance != NULL && num_obs != 0 && num_obs != 0) {
		covariance_elements = num_obs * num_obs;
		if (covariance_elements > 0) {
			self->covariance = (double*)calloc(covariance_elements, sizeof(double));
			memcpy(self->covariance, covariance, covariance_elements * sizeof(double));
		} else {
			fprintf(stderr,
			        "An error occurred: (%s * %s) defines the row and column lengths of '%s' and "
			        "both must be a positive integer",
			        "num_obs",
			        "num_obs",
			        "covariance");
			aspn23_measurement_time_free(self);
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
			aspn23_measurement_time_free(self);
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
			aspn23_measurement_time_free(self);
			return NULL;
		}
	}

	return self;
}

Aspn23MeasurementTime* ASPN_NULLABLE aspn23_measurement_time_copy(Aspn23MeasurementTime* input) {
	Aspn23TypeHeader* header_prep = aspn23_type_header_copy(&input->header);
	Aspn23TypeTimestamp* time_of_validity_prep =
	    aspn23_type_timestamp_copy(&input->time_of_validity);
	Aspn23MeasurementTime* out = aspn23_measurement_time_new(header_prep,
	                                                         time_of_validity_prep,
	                                                         input->time_of_validity_attosec,
	                                                         input->num_obs,
	                                                         input->clock_id,
	                                                         input->elapsed_nsec,
	                                                         input->elapsed_attosec,
	                                                         input->digits_of_precision,
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

void aspn23_measurement_time_free(void* pointer) {
	Aspn23MeasurementTime* self = (Aspn23MeasurementTime*)pointer;
	if (NULL == self) return;
	aspn23_measurement_time_free_members(self);
	free(self);
}

void aspn23_measurement_time_free_members(Aspn23MeasurementTime* self) {
	if (NULL == self) return;
	aspn23_type_header_free_members(&self->header);
	aspn23_type_timestamp_free_members(&self->time_of_validity);

	if (self->clock_id != NULL && self->num_obs != 0) {
		free(self->clock_id);
	}

	if (self->elapsed_nsec != NULL && self->num_obs != 0) {
		free(self->elapsed_nsec);
	}

	if (self->elapsed_attosec != NULL && self->num_obs != 0) {
		free(self->elapsed_attosec);
	}

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
