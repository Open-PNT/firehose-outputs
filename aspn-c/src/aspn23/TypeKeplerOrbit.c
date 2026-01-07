
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "TypeKeplerOrbit.h"

Aspn23TypeKeplerOrbit* ASPN_NULLABLE aspn23_type_kepler_orbit_new(double m_0,
                                                                  double delta_n,
                                                                  double e,
                                                                  double sqrt_a,
                                                                  double omega_0,
                                                                  double i_0,
                                                                  double i_dot,
                                                                  double omega,
                                                                  double omega_dot,
                                                                  double c_uc,
                                                                  double c_us,
                                                                  double c_rc,
                                                                  double c_rs,
                                                                  double c_ic,
                                                                  double c_is,
                                                                  double t_oe) {
	Aspn23TypeKeplerOrbit* self =
	    (struct Aspn23TypeKeplerOrbit*)malloc(sizeof(Aspn23TypeKeplerOrbit));
	if (NULL == self) return NULL;
	self->m_0       = m_0;
	self->delta_n   = delta_n;
	self->e         = e;
	self->sqrt_a    = sqrt_a;
	self->omega_0   = omega_0;
	self->i_0       = i_0;
	self->i_dot     = i_dot;
	self->omega     = omega;
	self->omega_dot = omega_dot;
	self->c_uc      = c_uc;
	self->c_us      = c_us;
	self->c_rc      = c_rc;
	self->c_rs      = c_rs;
	self->c_ic      = c_ic;
	self->c_is      = c_is;
	self->t_oe      = t_oe;
	return self;
}

Aspn23TypeKeplerOrbit* ASPN_NULLABLE aspn23_type_kepler_orbit_copy(Aspn23TypeKeplerOrbit* input) {

	Aspn23TypeKeplerOrbit* out = aspn23_type_kepler_orbit_new(input->m_0,
	                                                          input->delta_n,
	                                                          input->e,
	                                                          input->sqrt_a,
	                                                          input->omega_0,
	                                                          input->i_0,
	                                                          input->i_dot,
	                                                          input->omega,
	                                                          input->omega_dot,
	                                                          input->c_uc,
	                                                          input->c_us,
	                                                          input->c_rc,
	                                                          input->c_rs,
	                                                          input->c_ic,
	                                                          input->c_is,
	                                                          input->t_oe);

	return out;
}

void aspn23_type_kepler_orbit_free(void* pointer) {
	Aspn23TypeKeplerOrbit* self = (Aspn23TypeKeplerOrbit*)pointer;
	if (NULL == self) return;
	aspn23_type_kepler_orbit_free_members(self);
	free(self);
}

void aspn23_type_kepler_orbit_free_members(Aspn23TypeKeplerOrbit* self) {
	if (NULL == self) return;
}
