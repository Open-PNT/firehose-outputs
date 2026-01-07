
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "MeasurementAttitude3D.h"

Aspn23MeasurementAttitude3D* ASPN_NULLABLE
aspn23_measurement_attitude_3d_new(Aspn23TypeHeader* header,
                                   Aspn23TypeTimestamp* time_of_validity,
                                   enum Aspn23MeasurementAttitude3DReferenceFrame reference_frame,
                                   double quaternion[4],
                                   double tilt_error_covariance[3][3],
                                   enum Aspn23MeasurementAttitude3DErrorModel error_model,
                                   uint16_t num_error_model_params,
                                   double* error_model_params,
                                   uint8_t num_integrity,
                                   Aspn23TypeIntegrity* integrity) {
	Aspn23MeasurementAttitude3D* self =
	    (struct Aspn23MeasurementAttitude3D*)malloc(sizeof(Aspn23MeasurementAttitude3D));
	if (NULL == self) return NULL;

	Aspn23TypeHeader* header_prep = aspn23_type_header_copy(header);
	self->header                  = *header_prep;
	free(header_prep);

	Aspn23TypeTimestamp* time_of_validity_prep = aspn23_type_timestamp_copy(time_of_validity);
	self->time_of_validity                     = *time_of_validity_prep;
	free(time_of_validity_prep);

	self->reference_frame = reference_frame;

	if (quaternion != NULL)
		memcpy(self->quaternion, quaternion, 4 * sizeof(double));
	else
		for (size_t ii = 0; ii < 4; ii++) self->quaternion[ii] = NAN;

	if (tilt_error_covariance != NULL)
		memcpy(self->tilt_error_covariance, tilt_error_covariance, 9 * sizeof(double));
	else
		for (size_t ii = 0; ii < 3; ii++)
			for (size_t jj = 0; jj < 3; jj++) self->tilt_error_covariance[ii][jj] = NAN;

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
			aspn23_measurement_attitude_3d_free(self);
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
			aspn23_measurement_attitude_3d_free(self);
			return NULL;
		}
	}

	return self;
}

Aspn23MeasurementAttitude3D* ASPN_NULLABLE
aspn23_measurement_attitude_3d_copy(Aspn23MeasurementAttitude3D* input) {
	Aspn23TypeHeader* header_prep = aspn23_type_header_copy(&input->header);
	Aspn23TypeTimestamp* time_of_validity_prep =
	    aspn23_type_timestamp_copy(&input->time_of_validity);
	Aspn23MeasurementAttitude3D* out =
	    aspn23_measurement_attitude_3d_new(header_prep,
	                                       time_of_validity_prep,
	                                       input->reference_frame,
	                                       input->quaternion,
	                                       input->tilt_error_covariance,
	                                       input->error_model,
	                                       input->num_error_model_params,
	                                       input->error_model_params,
	                                       input->num_integrity,
	                                       input->integrity);
	aspn23_type_header_free(header_prep);
	aspn23_type_timestamp_free(time_of_validity_prep);
	return out;
}

void aspn23_measurement_attitude_3d_free(void* pointer) {
	Aspn23MeasurementAttitude3D* self = (Aspn23MeasurementAttitude3D*)pointer;
	if (NULL == self) return;
	aspn23_measurement_attitude_3d_free_members(self);
	free(self);
}

void aspn23_measurement_attitude_3d_free_members(Aspn23MeasurementAttitude3D* self) {
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
