
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "TypeTimestamp.h"

Aspn23TypeTimestamp* ASPN_NULLABLE aspn23_type_timestamp_new(int64_t elapsed_nsec) {
	Aspn23TypeTimestamp* self = (struct Aspn23TypeTimestamp*)malloc(sizeof(Aspn23TypeTimestamp));
	if (NULL == self) return NULL;
	self->elapsed_nsec = elapsed_nsec;
	return self;
}

Aspn23TypeTimestamp* ASPN_NULLABLE aspn23_type_timestamp_copy(Aspn23TypeTimestamp* input) {

	Aspn23TypeTimestamp* out = aspn23_type_timestamp_new(input->elapsed_nsec);

	return out;
}

void aspn23_type_timestamp_free(void* pointer) {
	Aspn23TypeTimestamp* self = (Aspn23TypeTimestamp*)pointer;
	if (NULL == self) return;
	aspn23_type_timestamp_free_members(self);
	free(self);
}

void aspn23_type_timestamp_free_members(Aspn23TypeTimestamp* self) {
	if (NULL == self) return;
}
