// Combination.cpp

#include "Combination.h"
#include <iostream>
#include <sstream>

using namespace std;

Combination::Combination() {
	first = 0;
	second = 1;
}

Combination::Combination(unsigned int f = 0, unsigned int s = 1) {
	first = f;
	second = s;
}

Combination::Combination(const Combination& c) {
	first = c.first;
	second = c.second;
}

Combination::~Combination(){}

unsigned int Combination::GetFirst() const {
	return first;
}

unsigned int Combination::GetSecond() const {
	return second;
}

void Combination::SetFirst(unsigned int value) {
	if (value > 0) {
		first = value;
	}
	else
		first = 0;

	if (first > second) {
		first = second - 1;
	}
}

void Combination::SetSecond(unsigned int value) {
	if (value > 1) {
		second = value;
	}
	else
		second = 1;

	if (second <= first) {
		second = first + 1;
	}
}

Combination& Combination::operator = (const Combination& c)
{
	first = c.first;
	second = c.second;
	return *this;
}

Combination::operator string () const {
	stringstream sout;
	sout << " first = " << first << endl;
	sout << " second = " << second << endl << endl;
	return sout.str();
}

ostream& operator << (ostream& out, const Combination& c)
{
	out << string(c);
	return out;
}

istream& operator >> (istream& in, Combination& c)
{
	cout << " Enter first: "; in >> c.first;
	cout << " Enter second: "; in >> c.second;
	cout << endl;
	return in;
}

Combination& Combination::operator ++() {
	++first;
	return *this;
}

Combination& Combination::operator --() {
	--first;
	return *this;
}

Combination Combination::operator ++(int) {
	Combination c(*this);
	second++;
	return c;
}

Combination Combination::operator --(int) {
	Combination c(*this);
	second--;
	return c;
}

int Factorial(unsigned int value) {
	if (value == 0) {
		return 1;
	}
	else
		return value * Factorial(value - 1);
}

int Combination::combination(unsigned int f, unsigned int s) {
	return Factorial(s) / (Factorial(f) * Factorial(s - f));
}
