
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "TypeSatnavTime.hpp"

#include <stdexcept>

#include <limits>
#include <iostream>

namespace aspn23_stl {

TypeSatnavTime::TypeSatnavTime(uint16_t week_number,
                               double seconds_of_week,
                               Aspn23TypeSatnavTimeTimeReference time_reference) {

	this->c_struct = aspn23_type_satnav_time_new(week_number, seconds_of_week, time_reference);

	this->take_ownership = true;
}

TypeSatnavTime::TypeSatnavTime(Aspn23TypeSatnavTime* c_struct, bool take_ownership)
    : take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

TypeSatnavTime::TypeSatnavTime(const TypeSatnavTime& other) {

	this->c_struct = aspn23_type_satnav_time_new(
	    other.get_week_number(), other.get_seconds_of_week(), other.get_time_reference());

	this->take_ownership = true;
}

TypeSatnavTime& TypeSatnavTime::operator=(const TypeSatnavTime& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_type_satnav_time_free(this->c_struct);

		this->c_struct = aspn23_type_satnav_time_new(
		    other.get_week_number(), other.get_seconds_of_week(), other.get_time_reference());

		this->take_ownership = true;
	}
	return *this;
}

TypeSatnavTime::TypeSatnavTime(TypeSatnavTime&& other) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

TypeSatnavTime& TypeSatnavTime::operator=(TypeSatnavTime&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_type_satnav_time_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

TypeSatnavTime::~TypeSatnavTime() {
	if (c_struct != nullptr && take_ownership) aspn23_type_satnav_time_free(this->c_struct);
}

Aspn23TypeSatnavTime* TypeSatnavTime::get_aspn_c() const { return c_struct; }

void TypeSatnavTime::reset_aspn_c(Aspn23TypeSatnavTime* replacement_struct, bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_type_satnav_time_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

uint16_t TypeSatnavTime::get_week_number() const {
	nullptr_check();
	return c_struct->week_number;
}

void TypeSatnavTime::set_week_number(uint16_t week_number) {
	nullptr_check();
	c_struct->week_number = week_number;
}

double TypeSatnavTime::get_seconds_of_week() const {
	nullptr_check();
	return c_struct->seconds_of_week;
}

void TypeSatnavTime::set_seconds_of_week(double seconds_of_week) {
	nullptr_check();
	c_struct->seconds_of_week = seconds_of_week;
}

Aspn23TypeSatnavTimeTimeReference TypeSatnavTime::get_time_reference() const {
	nullptr_check();
	return c_struct->time_reference;
}

void TypeSatnavTime::set_time_reference(Aspn23TypeSatnavTimeTimeReference time_reference) {
	nullptr_check();
	c_struct->time_reference = time_reference;
}

void TypeSatnavTime::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error("TypeSatnavTime is holding a null pointer to ASPN-C data!");
}

namespace {
constexpr double SECONDS_PER_WEEK = (60 * 60 * 24 * 7);

void compare_time_reference(const TypeSatnavTime& t1, const TypeSatnavTime& t2) {
	if (t1.get_time_reference() != t2.get_time_reference()) {
		std::cerr << "Cannot compare times. t1 has a time reference of " << t1.get_time_reference()
		          << ", but t2 has a time reference of " << t2.get_time_reference() << std::endl;
	}
}

TypeSatnavTime correct_for_week_rollover(const TypeSatnavTime& t) {
	auto seconds = t.get_seconds_of_week();
	if (seconds > SECONDS_PER_WEEK || seconds < 0) {
		auto week_delta = std::floor(t.get_seconds_of_week() / SECONDS_PER_WEEK);
		auto new_week   = t.get_week_number() + week_delta;
		auto new_sec    = seconds - week_delta * SECONDS_PER_WEEK;
		// check for negative week number
		if (new_week < 0) {
			std::cerr << "Week number is " << new_week << " after correcting for rollover. "
			          << std::endl;
		}
		return TypeSatnavTime(new_week, new_sec, t.get_time_reference());
	}
	return t;
}
}  // namespace

TypeSatnavTime operator+(const TypeSatnavTime& t, double t2_sec) {
	TypeSatnavTime t_out(
	    t.get_week_number(), t.get_seconds_of_week() + t2_sec, t.get_time_reference());
	return correct_for_week_rollover(t_out);
}

TypeSatnavTime operator-(const TypeSatnavTime& t, double t2_sec) { return t + -t2_sec; }

double operator-(const TypeSatnavTime& t1, const TypeSatnavTime& t2) {
	compare_time_reference(t1, t2);

	double dt = t1.get_seconds_of_week() - t2.get_seconds_of_week();
	dt += (t1.get_week_number() - t2.get_week_number()) * SECONDS_PER_WEEK;
	return dt;
}

bool operator==(const TypeSatnavTime& t1, const TypeSatnavTime& t2) {
	auto corr_t1 = correct_for_week_rollover(t1);
	auto corr_t2 = correct_for_week_rollover(t2);

	return corr_t1.get_time_reference() == corr_t2.get_time_reference() &&
	       corr_t1.get_week_number() == corr_t2.get_week_number() &&
	       std::fabs(corr_t1.get_seconds_of_week() - corr_t2.get_seconds_of_week()) <
	           std::numeric_limits<double>::epsilon();
}

bool operator!=(const TypeSatnavTime& t1, const TypeSatnavTime& t2) { return !(t1 == t2); }

bool operator>(const TypeSatnavTime& t1, const TypeSatnavTime& t2) {
	compare_time_reference(t1, t2);
	auto corr_t1 = correct_for_week_rollover(t1);
	auto corr_t2 = correct_for_week_rollover(t2);

	return corr_t1.get_week_number() > corr_t2.get_week_number() ||
	       (corr_t1.get_week_number() == corr_t2.get_week_number() &&
	        corr_t1.get_seconds_of_week() > corr_t2.get_seconds_of_week());
}

bool operator>=(const TypeSatnavTime& t1, const TypeSatnavTime& t2) {
	compare_time_reference(t1, t2);
	auto corr_t1 = correct_for_week_rollover(t1);
	auto corr_t2 = correct_for_week_rollover(t2);

	return corr_t1.get_week_number() > corr_t2.get_week_number() ||
	       (corr_t1.get_week_number() == corr_t2.get_week_number() &&
	        corr_t1.get_seconds_of_week() >= corr_t2.get_seconds_of_week());
}

bool operator<(const TypeSatnavTime& t1, const TypeSatnavTime& t2) { return !(t1 >= t2); }

bool operator<=(const TypeSatnavTime& t1, const TypeSatnavTime& t2) { return !(t1 > t2); }

std::ostream& operator<<(std::ostream& os, const TypeSatnavTime& t) {
	auto corr_t = correct_for_week_rollover(t);

	os << "[" << corr_t.get_week_number() << "] " << corr_t.get_seconds_of_week();
	return os;
}

}  // namespace aspn23_stl
