// Source.cpp
// Михайлов Олександр
// Конструктори та перевантаження операцій для класів з двома полями
// Варіант 19

#include <iostream>
#include "Combination.h"

using namespace std;

Combination MakeCombination(unsigned int f, unsigned int s) {
	Combination c(f, s);
	return c;
}

int main()
{
	Combination C1(1, 2);
	Combination C2;

	cout << C1 << endl;
	cout << ++C1 << endl;
	cout << --C1 << endl;
	cout << C1++ << endl;
	cout << C1-- << endl;

	cin >> C2;

	unsigned int first, second;
	cout << " Enter first: "; cin >> first;
	cout << " Enter second: "; cin >> second;

	C2 = MakeCombination(first, second);
	cout << endl << " C(n,k) = " << C2.combination(first, second) << endl << endl;
	

	cin.get();
	return 0;
}
