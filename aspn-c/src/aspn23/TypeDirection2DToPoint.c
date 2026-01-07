
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "TypeDirection2DToPoint.h"

Aspn23TypeDirection2DToPoint* ASPN_NULLABLE
aspn23_type_direction_2d_to_point_new(Aspn23TypeRemotePoint* remote_point,
                                      enum Aspn23TypeDirection2DToPointReference reference,
                                      double obs,
                                      double variance,
                                      bool has_observation_characteristics,
                                      Aspn23TypeImageFeature* observation_characteristics,
                                      enum Aspn23TypeDirection2DToPointErrorModel error_model,
                                      uint16_t num_error_model_params,
                                      double* error_model_params,
                                      uint8_t num_integrity,
                                      Aspn23TypeIntegrity* integrity) {
	Aspn23TypeDirection2DToPoint* self =
	    (struct Aspn23TypeDirection2DToPoint*)malloc(sizeof(Aspn23TypeDirection2DToPoint));
	if (NULL == self) return NULL;

	Aspn23TypeRemotePoint* remote_point_prep = aspn23_type_remote_point_copy(remote_point);
	self->remote_point                       = *remote_point_prep;
	free(remote_point_prep);

	self->reference                       = reference;
	self->obs                             = obs;
	self->variance                        = variance;
	self->has_observation_characteristics = has_observation_characteristics;

	if (has_observation_characteristics) {
		Aspn23TypeImageFeature* observation_characteristics_prep =
		    aspn23_type_image_feature_copy(observation_characteristics);
		self->observation_characteristics = *observation_characteristics_prep;
		free(observation_characteristics_prep);
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
			aspn23_type_direction_2d_to_point_free(self);
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
			aspn23_type_direction_2d_to_point_free(self);
			return NULL;
		}
	}

	return self;
}

Aspn23TypeDirection2DToPoint* ASPN_NULLABLE
aspn23_type_direction_2d_to_point_copy(Aspn23TypeDirection2DToPoint* input) {
	Aspn23TypeRemotePoint* remote_point_prep = aspn23_type_remote_point_copy(&input->remote_point);

	Aspn23TypeImageFeature* observation_characteristics_prep = NULL;
	if (input->has_observation_characteristics)
		observation_characteristics_prep =
		    aspn23_type_image_feature_copy(&input->observation_characteristics);

	Aspn23TypeDirection2DToPoint* out =
	    aspn23_type_direction_2d_to_point_new(remote_point_prep,
	                                          input->reference,
	                                          input->obs,
	                                          input->variance,
	                                          input->has_observation_characteristics,
	                                          observation_characteristics_prep,
	                                          input->error_model,
	                                          input->num_error_model_params,
	                                          input->error_model_params,
	                                          input->num_integrity,
	                                          input->integrity);
	aspn23_type_remote_point_free(remote_point_prep);

	if (input->has_observation_characteristics)
		aspn23_type_image_feature_free(observation_characteristics_prep);

	return out;
}

void aspn23_type_direction_2d_to_point_free(void* pointer) {
	Aspn23TypeDirection2DToPoint* self = (Aspn23TypeDirection2DToPoint*)pointer;
	if (NULL == self) return;
	aspn23_type_direction_2d_to_point_free_members(self);
	free(self);
}

void aspn23_type_direction_2d_to_point_free_members(Aspn23TypeDirection2DToPoint* self) {
	if (NULL == self) return;
	aspn23_type_remote_point_free_members(&self->remote_point);

	if (self->has_observation_characteristics)
		aspn23_type_image_feature_free_members(&self->observation_characteristics);

	if (self->error_model_params != NULL && self->num_error_model_params != 0) {
		free(self->error_model_params);
	}

	if (self->integrity != NULL && self->num_integrity != 0) {
		for (size_t ii = 0; ii < self->num_integrity; ii++)
			aspn23_type_integrity_free_members(&self->integrity[ii]);
		free(self->integrity);
	}
}
