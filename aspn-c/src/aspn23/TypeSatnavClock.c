
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "TypeSatnavClock.h"

Aspn23TypeSatnavClock* ASPN_NULLABLE aspn23_type_satnav_clock_new(double t_oc,
                                                                  double af_0,
                                                                  double af_1,
                                                                  double af_2) {
	Aspn23TypeSatnavClock* self =
	    (struct Aspn23TypeSatnavClock*)malloc(sizeof(Aspn23TypeSatnavClock));
	if (NULL == self) return NULL;
	self->t_oc = t_oc;
	self->af_0 = af_0;
	self->af_1 = af_1;
	self->af_2 = af_2;
	return self;
}

Aspn23TypeSatnavClock* ASPN_NULLABLE aspn23_type_satnav_clock_copy(Aspn23TypeSatnavClock* input) {

	Aspn23TypeSatnavClock* out =
	    aspn23_type_satnav_clock_new(input->t_oc, input->af_0, input->af_1, input->af_2);

	return out;
}

void aspn23_type_satnav_clock_free(void* pointer) {
	Aspn23TypeSatnavClock* self = (Aspn23TypeSatnavClock*)pointer;
	if (NULL == self) return;
	aspn23_type_satnav_clock_free_members(self);
	free(self);
}

void aspn23_type_satnav_clock_free_members(Aspn23TypeSatnavClock* self) {
	if (NULL == self) return;
}
