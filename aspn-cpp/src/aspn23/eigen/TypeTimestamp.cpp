
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "TypeTimestamp.hpp"

#include <stdexcept>

#include <iomanip>

namespace aspn23_eigen {

TypeTimestamp::TypeTimestamp(int64_t elapsed_nsec) {

	this->c_struct = aspn23_type_timestamp_new(elapsed_nsec);

	this->take_ownership = true;
}

TypeTimestamp::TypeTimestamp(Aspn23TypeTimestamp* c_struct, bool take_ownership)
    : take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

TypeTimestamp::TypeTimestamp(const TypeTimestamp& other) {

	this->c_struct = aspn23_type_timestamp_new(other.get_elapsed_nsec());

	this->take_ownership = true;
}

TypeTimestamp& TypeTimestamp::operator=(const TypeTimestamp& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_type_timestamp_free(this->c_struct);

		this->c_struct = aspn23_type_timestamp_new(other.get_elapsed_nsec());

		this->take_ownership = true;
	}
	return *this;
}

TypeTimestamp::TypeTimestamp(TypeTimestamp&& other) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

TypeTimestamp& TypeTimestamp::operator=(TypeTimestamp&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_type_timestamp_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

TypeTimestamp::~TypeTimestamp() {
	if (c_struct != nullptr && take_ownership) aspn23_type_timestamp_free(this->c_struct);
}

Aspn23TypeTimestamp* TypeTimestamp::get_aspn_c() const { return c_struct; }

void TypeTimestamp::reset_aspn_c(Aspn23TypeTimestamp* replacement_struct, bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_type_timestamp_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

int64_t TypeTimestamp::get_elapsed_nsec() const {
	nullptr_check();
	return c_struct->elapsed_nsec;
}

void TypeTimestamp::set_elapsed_nsec(int64_t elapsed_nsec) {
	nullptr_check();
	c_struct->elapsed_nsec = elapsed_nsec;
}

void TypeTimestamp::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error("TypeTimestamp is holding a null pointer to ASPN-C data!");
}

constexpr int NANO_PER_SEC = 1000000000;

TypeTimestamp to_type_timestamp(double time_in_sec) {
	return TypeTimestamp(static_cast<int64_t>(std::round(time_in_sec * NANO_PER_SEC)));
}

TypeTimestamp to_type_timestamp(int64_t sec, int64_t nsec) {
	return TypeTimestamp((sec * NANO_PER_SEC) + nsec);
}

double to_seconds(const TypeTimestamp& time) { return time.get_elapsed_nsec() * 1e-9; }

TypeTimestamp operator+(const TypeTimestamp& t1, const TypeTimestamp& t2) {
	return TypeTimestamp(t1.get_elapsed_nsec() + t2.get_elapsed_nsec());
}

TypeTimestamp operator+(const TypeTimestamp& t1, double t2_sec) {
	return t1 + to_type_timestamp(t2_sec);
}

TypeTimestamp operator+(double t1_sec, const TypeTimestamp& t2) {
	return to_type_timestamp(t1_sec) + t2;
}

TypeTimestamp operator-(const TypeTimestamp& t1, const TypeTimestamp& t2) {
	return TypeTimestamp(t1.get_elapsed_nsec() - t2.get_elapsed_nsec());
}

TypeTimestamp operator-(const TypeTimestamp& t1, double t2_sec) {
	return t1 - to_type_timestamp(t2_sec);
}

TypeTimestamp operator-(double t1_sec, const TypeTimestamp& t2) {
	return to_type_timestamp(t1_sec) - t2;
}

bool operator==(const TypeTimestamp& t1, const TypeTimestamp& t2) {
	return t1.get_elapsed_nsec() == t2.get_elapsed_nsec();
}

bool operator==(const TypeTimestamp& t1, double t2_sec) { return t1 == to_type_timestamp(t2_sec); }

bool operator==(double t1_sec, const TypeTimestamp& t2) { return to_type_timestamp(t1_sec) == t2; }

bool operator!=(const TypeTimestamp& t1, const TypeTimestamp& t2) {
	return t1.get_elapsed_nsec() != t2.get_elapsed_nsec();
}

bool operator!=(const TypeTimestamp& t1, double t2_sec) { return t1 != to_type_timestamp(t2_sec); }

bool operator!=(double t1_sec, const TypeTimestamp& t2) { return to_type_timestamp(t1_sec) != t2; }

bool operator<(const TypeTimestamp& t1, const TypeTimestamp& t2) {
	return t1.get_elapsed_nsec() < t2.get_elapsed_nsec();
}

bool operator<(const TypeTimestamp& t1, double t2_sec) { return t1 < to_type_timestamp(t2_sec); }

bool operator<(double t1_sec, const TypeTimestamp& t2) { return to_type_timestamp(t1_sec) < t2; }

bool operator>=(const TypeTimestamp& t1, const TypeTimestamp& t2) {
	return t1.get_elapsed_nsec() >= t2.get_elapsed_nsec();
}

bool operator>=(const TypeTimestamp& t1, double t2_sec) { return t1 >= to_type_timestamp(t2_sec); }

bool operator>=(double t1_sec, const TypeTimestamp& t2) { return to_type_timestamp(t1_sec) >= t2; }

bool operator>(const TypeTimestamp& t1, const TypeTimestamp& t2) {
	return t1.get_elapsed_nsec() > t2.get_elapsed_nsec();
}

bool operator>(const TypeTimestamp& t1, double t2_sec) { return t1 > to_type_timestamp(t2_sec); }

bool operator>(double t1_sec, const TypeTimestamp& t2) { return to_type_timestamp(t1_sec) > t2; }

bool operator<=(const TypeTimestamp& t1, const TypeTimestamp& t2) {
	return t1.get_elapsed_nsec() <= t2.get_elapsed_nsec();
}

bool operator<=(const TypeTimestamp& t1, double t2_sec) { return t1 <= to_type_timestamp(t2_sec); }

bool operator<=(double t1_sec, const TypeTimestamp& t2) { return to_type_timestamp(t1_sec) <= t2; }

std::ostream& operator<<(std::ostream& output, const TypeTimestamp& time) {
	int64_t nsec     = time.get_elapsed_nsec();
	int64_t sec      = nsec / NANO_PER_SEC;
	std::string sign = (nsec < 0) ? "-" : "";
	auto rounded_sec = nsec - (sec * NANO_PER_SEC);

	return output << sign << std::abs(sec) << '.' << std::setw(9) << std::setfill('0')
	              << std::abs(rounded_sec) << "s";
}

}  // namespace aspn23_eigen
