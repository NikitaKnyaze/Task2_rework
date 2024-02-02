#include "Fraction.h"

Fraction::Fraction(int numerator, int denominator)
{
	numerator_ = numerator;
	denominator_ = denominator;
};

void Fraction::fraction_conversion(Fraction& other) {
	numerator_ *= other.denominator_;
	other.numerator_ *= denominator_;
};

bool Fraction::operator==(Fraction& other) {
	return numerator_ == other.numerator_;
};

bool Fraction::operator!=(Fraction& other) {
	return !(*this == other);
};

bool Fraction::operator<(Fraction& other) {
	return numerator_ < other.numerator_;
};

bool Fraction::operator>(Fraction& other) {
	return other < *this;
};

bool Fraction::operator<=(Fraction& other) {
	return !(*this > other);
};

bool Fraction::operator>=(Fraction& other) {
	return !(*this < other);
};

int  Fraction::get_n() {
	return  numerator_;
};

int  Fraction::get_d() {
	return  denominator_;
};