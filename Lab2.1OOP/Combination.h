// Combination.h

#pragma once
#include <iostream>
#include <string>

using namespace std;

class Combination
{
private:
	unsigned int first, second;
public:
	Combination();
	Combination(unsigned int, unsigned int);
	Combination(const Combination&);
	~Combination();

	unsigned int GetFirst() const;
	unsigned int GetSecond() const;
	void SetFirst(unsigned int);
	void SetSecond(unsigned int);

	Combination& operator = (const Combination&);
	operator string() const;

	friend ostream& operator << (ostream&, const Combination&);
	friend istream& operator >> (istream&, Combination&);

	Combination& operator ++();
	Combination& operator --();
	Combination operator ++(int);
	Combination operator --(int);

	int combination(unsigned int, unsigned int);
};
