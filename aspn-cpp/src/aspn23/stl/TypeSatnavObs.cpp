
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "TypeSatnavObs.hpp"

#include <stdexcept>

namespace aspn23_stl {

TypeSatnavObs::TypeSatnavObs(TypeSatnavSatelliteSystem satellite_system,
                             TypeSatnavSignalDescriptor signal_descriptor,
                             int16_t prn,
                             double frequency,
                             double pseudorange,
                             float pseudorange_variance,
                             Aspn23TypeSatnavObsPseudorangeRateType pseudorange_rate_type,
                             double pseudorange_rate,
                             float pseudorange_rate_variance,
                             double carrier_phase,
                             float carrier_phase_variance,
                             float c_n0,
                             int32_t lock_count,
                             Aspn23TypeSatnavObsIonoCorrectionSource iono_correction_source,
                             bool iono_correction_applied,
                             bool tropo_correction_applied,
                             bool signal_bias_correction_applied,
                             std::vector<TypeIntegrity> integrity) {
	auto satellite_system_prep          = satellite_system.get_aspn_c();
	auto signal_descriptor_prep         = signal_descriptor.get_aspn_c();
	Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object      = integrity[ii].get_aspn_c();
		integrity_prep[ii] = *c_object;
	}

	this->c_struct = aspn23_type_satnav_obs_new(satellite_system_prep,
	                                            signal_descriptor_prep,
	                                            prn,
	                                            frequency,
	                                            pseudorange,
	                                            pseudorange_variance,
	                                            pseudorange_rate_type,
	                                            pseudorange_rate,
	                                            pseudorange_rate_variance,
	                                            carrier_phase,
	                                            carrier_phase_variance,
	                                            c_n0,
	                                            lock_count,
	                                            iono_correction_source,
	                                            iono_correction_applied,
	                                            tropo_correction_applied,
	                                            signal_bias_correction_applied,
	                                            integrity.size(),
	                                            integrity_prep);

	delete[] integrity_prep;

	this->take_ownership = true;
}

TypeSatnavObs::TypeSatnavObs(Aspn23TypeSatnavObs* c_struct, bool take_ownership)
    : take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

TypeSatnavObs::TypeSatnavObs(const TypeSatnavObs& other) {
	auto satellite_system               = other.get_satellite_system();
	auto signal_descriptor              = other.get_signal_descriptor();
	auto integrity                      = other.get_integrity();
	auto satellite_system_prep          = satellite_system.get_aspn_c();
	auto signal_descriptor_prep         = signal_descriptor.get_aspn_c();
	Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object      = integrity[ii].get_aspn_c();
		integrity_prep[ii] = *c_object;
	}

	this->c_struct = aspn23_type_satnav_obs_new(satellite_system_prep,
	                                            signal_descriptor_prep,
	                                            other.get_prn(),
	                                            other.get_frequency(),
	                                            other.get_pseudorange(),
	                                            other.get_pseudorange_variance(),
	                                            other.get_pseudorange_rate_type(),
	                                            other.get_pseudorange_rate(),
	                                            other.get_pseudorange_rate_variance(),
	                                            other.get_carrier_phase(),
	                                            other.get_carrier_phase_variance(),
	                                            other.get_c_n0(),
	                                            other.get_lock_count(),
	                                            other.get_iono_correction_source(),
	                                            other.get_iono_correction_applied(),
	                                            other.get_tropo_correction_applied(),
	                                            other.get_signal_bias_correction_applied(),
	                                            other.get_integrity().size(),
	                                            integrity_prep);

	delete[] integrity_prep;

	this->take_ownership = true;
}

TypeSatnavObs& TypeSatnavObs::operator=(const TypeSatnavObs& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_type_satnav_obs_free(this->c_struct);
		auto satellite_system               = other.get_satellite_system();
		auto signal_descriptor              = other.get_signal_descriptor();
		auto integrity                      = other.get_integrity();
		auto satellite_system_prep          = satellite_system.get_aspn_c();
		auto signal_descriptor_prep         = signal_descriptor.get_aspn_c();
		Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
		for (size_t ii = 0; ii < integrity.size(); ii++) {
			auto c_object      = integrity[ii].get_aspn_c();
			integrity_prep[ii] = *c_object;
		}

		this->c_struct = aspn23_type_satnav_obs_new(satellite_system_prep,
		                                            signal_descriptor_prep,
		                                            other.get_prn(),
		                                            other.get_frequency(),
		                                            other.get_pseudorange(),
		                                            other.get_pseudorange_variance(),
		                                            other.get_pseudorange_rate_type(),
		                                            other.get_pseudorange_rate(),
		                                            other.get_pseudorange_rate_variance(),
		                                            other.get_carrier_phase(),
		                                            other.get_carrier_phase_variance(),
		                                            other.get_c_n0(),
		                                            other.get_lock_count(),
		                                            other.get_iono_correction_source(),
		                                            other.get_iono_correction_applied(),
		                                            other.get_tropo_correction_applied(),
		                                            other.get_signal_bias_correction_applied(),
		                                            other.get_integrity().size(),
		                                            integrity_prep);

		delete[] integrity_prep;

		this->take_ownership = true;
	}
	return *this;
}

TypeSatnavObs::TypeSatnavObs(TypeSatnavObs&& other) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

TypeSatnavObs& TypeSatnavObs::operator=(TypeSatnavObs&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_type_satnav_obs_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

TypeSatnavObs::~TypeSatnavObs() {
	if (c_struct != nullptr && take_ownership) aspn23_type_satnav_obs_free(this->c_struct);
}

Aspn23TypeSatnavObs* TypeSatnavObs::get_aspn_c() const { return c_struct; }

void TypeSatnavObs::reset_aspn_c(Aspn23TypeSatnavObs* replacement_struct, bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_type_satnav_obs_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

TypeSatnavSatelliteSystem TypeSatnavObs::get_satellite_system() const {
	nullptr_check();
	return aspn23_type_satnav_satellite_system_copy(&c_struct->satellite_system);
}

void TypeSatnavObs::set_satellite_system(TypeSatnavSatelliteSystem satellite_system) {
	nullptr_check();
	auto c_object              = std::move(satellite_system).get_aspn_c();
	c_struct->satellite_system = *c_object;
}

TypeSatnavSignalDescriptor TypeSatnavObs::get_signal_descriptor() const {
	nullptr_check();
	return aspn23_type_satnav_signal_descriptor_copy(&c_struct->signal_descriptor);
}

void TypeSatnavObs::set_signal_descriptor(TypeSatnavSignalDescriptor signal_descriptor) {
	nullptr_check();
	auto c_object               = std::move(signal_descriptor).get_aspn_c();
	c_struct->signal_descriptor = *c_object;
}

int16_t TypeSatnavObs::get_prn() const {
	nullptr_check();
	return c_struct->prn;
}

void TypeSatnavObs::set_prn(int16_t prn) {
	nullptr_check();
	c_struct->prn = prn;
}

double TypeSatnavObs::get_frequency() const {
	nullptr_check();
	return c_struct->frequency;
}

void TypeSatnavObs::set_frequency(double frequency) {
	nullptr_check();
	c_struct->frequency = frequency;
}

double TypeSatnavObs::get_pseudorange() const {
	nullptr_check();
	return c_struct->pseudorange;
}

void TypeSatnavObs::set_pseudorange(double pseudorange) {
	nullptr_check();
	c_struct->pseudorange = pseudorange;
}

float TypeSatnavObs::get_pseudorange_variance() const {
	nullptr_check();
	return c_struct->pseudorange_variance;
}

void TypeSatnavObs::set_pseudorange_variance(float pseudorange_variance) {
	nullptr_check();
	c_struct->pseudorange_variance = pseudorange_variance;
}

Aspn23TypeSatnavObsPseudorangeRateType TypeSatnavObs::get_pseudorange_rate_type() const {
	nullptr_check();
	return c_struct->pseudorange_rate_type;
}

void TypeSatnavObs::set_pseudorange_rate_type(
    Aspn23TypeSatnavObsPseudorangeRateType pseudorange_rate_type) {
	nullptr_check();
	c_struct->pseudorange_rate_type = pseudorange_rate_type;
}

double TypeSatnavObs::get_pseudorange_rate() const {
	nullptr_check();
	return c_struct->pseudorange_rate;
}

void TypeSatnavObs::set_pseudorange_rate(double pseudorange_rate) {
	nullptr_check();
	c_struct->pseudorange_rate = pseudorange_rate;
}

float TypeSatnavObs::get_pseudorange_rate_variance() const {
	nullptr_check();
	return c_struct->pseudorange_rate_variance;
}

void TypeSatnavObs::set_pseudorange_rate_variance(float pseudorange_rate_variance) {
	nullptr_check();
	c_struct->pseudorange_rate_variance = pseudorange_rate_variance;
}

double TypeSatnavObs::get_carrier_phase() const {
	nullptr_check();
	return c_struct->carrier_phase;
}

void TypeSatnavObs::set_carrier_phase(double carrier_phase) {
	nullptr_check();
	c_struct->carrier_phase = carrier_phase;
}

float TypeSatnavObs::get_carrier_phase_variance() const {
	nullptr_check();
	return c_struct->carrier_phase_variance;
}

void TypeSatnavObs::set_carrier_phase_variance(float carrier_phase_variance) {
	nullptr_check();
	c_struct->carrier_phase_variance = carrier_phase_variance;
}

float TypeSatnavObs::get_c_n0() const {
	nullptr_check();
	return c_struct->c_n0;
}

void TypeSatnavObs::set_c_n0(float c_n0) {
	nullptr_check();
	c_struct->c_n0 = c_n0;
}

int32_t TypeSatnavObs::get_lock_count() const {
	nullptr_check();
	return c_struct->lock_count;
}

void TypeSatnavObs::set_lock_count(int32_t lock_count) {
	nullptr_check();
	c_struct->lock_count = lock_count;
}

Aspn23TypeSatnavObsIonoCorrectionSource TypeSatnavObs::get_iono_correction_source() const {
	nullptr_check();
	return c_struct->iono_correction_source;
}

void TypeSatnavObs::set_iono_correction_source(
    Aspn23TypeSatnavObsIonoCorrectionSource iono_correction_source) {
	nullptr_check();
	c_struct->iono_correction_source = iono_correction_source;
}

bool TypeSatnavObs::get_iono_correction_applied() const {
	nullptr_check();
	return c_struct->iono_correction_applied;
}

void TypeSatnavObs::set_iono_correction_applied(bool iono_correction_applied) {
	nullptr_check();
	c_struct->iono_correction_applied = iono_correction_applied;
}

bool TypeSatnavObs::get_tropo_correction_applied() const {
	nullptr_check();
	return c_struct->tropo_correction_applied;
}

void TypeSatnavObs::set_tropo_correction_applied(bool tropo_correction_applied) {
	nullptr_check();
	c_struct->tropo_correction_applied = tropo_correction_applied;
}

bool TypeSatnavObs::get_signal_bias_correction_applied() const {
	nullptr_check();
	return c_struct->signal_bias_correction_applied;
}

void TypeSatnavObs::set_signal_bias_correction_applied(bool signal_bias_correction_applied) {
	nullptr_check();
	c_struct->signal_bias_correction_applied = signal_bias_correction_applied;
}

uint8_t TypeSatnavObs::get_num_integrity() const {
	nullptr_check();
	return c_struct->num_integrity;
}

std::vector<TypeIntegrity> TypeSatnavObs::get_integrity() const {
	nullptr_check();
	if (c_struct->integrity == nullptr) return {};
	std::vector<TypeIntegrity> out;
	for (size_t ii = 0; ii < c_struct->num_integrity; ii++) {
		out.push_back(aspn23_type_integrity_copy(&c_struct->integrity[ii]));
	}
	return out;
}

void TypeSatnavObs::set_integrity(std::vector<TypeIntegrity> integrity) {
	nullptr_check();
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object           = integrity[ii].get_aspn_c();
		c_struct->integrity[ii] = *c_object;
	}
	c_struct->num_integrity = integrity.size();
}

void TypeSatnavObs::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error("TypeSatnavObs is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_stl
