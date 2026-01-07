
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "MeasurementMagneticField.h"

Aspn23MeasurementMagneticField* ASPN_NULLABLE
aspn23_measurement_magnetic_field_new(Aspn23TypeHeader* header,
                                      Aspn23TypeTimestamp* time_of_validity,
                                      uint8_t num_meas,
                                      double x_field_strength,
                                      double y_field_strength,
                                      double z_field_strength,
                                      double* covariance,
                                      enum Aspn23MeasurementMagneticFieldErrorModel error_model,
                                      uint16_t num_error_model_params,
                                      double* error_model_params,
                                      uint8_t num_integrity,
                                      Aspn23TypeIntegrity* integrity) {
	size_t covariance_elements;
	Aspn23MeasurementMagneticField* self =
	    (struct Aspn23MeasurementMagneticField*)malloc(sizeof(Aspn23MeasurementMagneticField));
	if (NULL == self) return NULL;

	Aspn23TypeHeader* header_prep = aspn23_type_header_copy(header);
	self->header                  = *header_prep;
	free(header_prep);

	Aspn23TypeTimestamp* time_of_validity_prep = aspn23_type_timestamp_copy(time_of_validity);
	self->time_of_validity                     = *time_of_validity_prep;
	free(time_of_validity_prep);

	self->num_meas         = num_meas;
	self->x_field_strength = x_field_strength;
	self->y_field_strength = y_field_strength;
	self->z_field_strength = z_field_strength;

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
			aspn23_measurement_magnetic_field_free(self);
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
			aspn23_measurement_magnetic_field_free(self);
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
			aspn23_measurement_magnetic_field_free(self);
			return NULL;
		}
	}

	return self;
}

Aspn23MeasurementMagneticField* ASPN_NULLABLE
aspn23_measurement_magnetic_field_copy(Aspn23MeasurementMagneticField* input) {
	Aspn23TypeHeader* header_prep = aspn23_type_header_copy(&input->header);
	Aspn23TypeTimestamp* time_of_validity_prep =
	    aspn23_type_timestamp_copy(&input->time_of_validity);
	Aspn23MeasurementMagneticField* out =
	    aspn23_measurement_magnetic_field_new(header_prep,
	                                          time_of_validity_prep,
	                                          input->num_meas,
	                                          input->x_field_strength,
	                                          input->y_field_strength,
	                                          input->z_field_strength,
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

void aspn23_measurement_magnetic_field_free(void* pointer) {
	Aspn23MeasurementMagneticField* self = (Aspn23MeasurementMagneticField*)pointer;
	if (NULL == self) return;
	aspn23_measurement_magnetic_field_free_members(self);
	free(self);
}

void aspn23_measurement_magnetic_field_free_members(Aspn23MeasurementMagneticField* self) {
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
