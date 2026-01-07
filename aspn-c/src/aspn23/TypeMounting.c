
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "TypeMounting.h"

Aspn23TypeMounting* ASPN_NULLABLE
aspn23_type_mounting_new(double lever_arm[3],
                         double lever_arm_sigma[3],
                         double orientation_quaternion[4],
                         double orientation_tilt_error_covariance[3][3]) {
	Aspn23TypeMounting* self = (struct Aspn23TypeMounting*)malloc(sizeof(Aspn23TypeMounting));
	if (NULL == self) return NULL;

	if (lever_arm != NULL)
		memcpy(self->lever_arm, lever_arm, 3 * sizeof(double));
	else
		for (size_t ii = 0; ii < 3; ii++) self->lever_arm[ii] = NAN;

	if (lever_arm_sigma != NULL)
		memcpy(self->lever_arm_sigma, lever_arm_sigma, 3 * sizeof(double));
	else
		for (size_t ii = 0; ii < 3; ii++) self->lever_arm_sigma[ii] = NAN;

	if (orientation_quaternion != NULL)
		memcpy(self->orientation_quaternion, orientation_quaternion, 4 * sizeof(double));
	else
		for (size_t ii = 0; ii < 4; ii++) self->orientation_quaternion[ii] = NAN;

	if (orientation_tilt_error_covariance != NULL)
		memcpy(self->orientation_tilt_error_covariance,
		       orientation_tilt_error_covariance,
		       9 * sizeof(double));
	else
		for (size_t ii = 0; ii < 3; ii++)
			for (size_t jj = 0; jj < 3; jj++) self->orientation_tilt_error_covariance[ii][jj] = NAN;

	return self;
}

Aspn23TypeMounting* ASPN_NULLABLE aspn23_type_mounting_copy(Aspn23TypeMounting* input) {

	Aspn23TypeMounting* out = aspn23_type_mounting_new(input->lever_arm,
	                                                   input->lever_arm_sigma,
	                                                   input->orientation_quaternion,
	                                                   input->orientation_tilt_error_covariance);

	return out;
}

void aspn23_type_mounting_free(void* pointer) {
	Aspn23TypeMounting* self = (Aspn23TypeMounting*)pointer;
	if (NULL == self) return;
	aspn23_type_mounting_free_members(self);
	free(self);
}

void aspn23_type_mounting_free_members(Aspn23TypeMounting* self) {
	if (NULL == self) return;
}
