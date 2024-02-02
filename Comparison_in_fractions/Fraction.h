#pragma once


class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator);

	void fraction_conversion(Fraction& other);

	bool operator==(Fraction& other);

	bool operator!=(Fraction& other);

	bool operator<(Fraction& other);

	bool operator>(Fraction& other);

	bool operator<=(Fraction& other);

	bool operator>=(Fraction& other);

	int get_n();
	int get_d();
};