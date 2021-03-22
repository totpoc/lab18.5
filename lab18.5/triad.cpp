#include "triad.h"
#include <iostream>
using namespace std;

TRIAD::TRIAD() { _first = 0; _second = 0; _third = 0; }
TRIAD::TRIAD(int first, int second, int third) { _first = first; _second = second; _third = third; }
TRIAD::TRIAD(const TRIAD& temp) { _first = temp._first; _second = temp._second; _third = temp._third; }

void TRIAD::setFirst(int first) { _first = first; }
void TRIAD::setSecond(int second) { _second = second; }
void TRIAD::setThird(int third) { _third = third; }

int TRIAD::getFirst() { return _first; }
int TRIAD::getSecond() { return _second; }
int TRIAD::getThird() { return _third; }

istream& operator >> (istream& in, TRIAD& temp)
{
	cout << "Введите первый элемент: ";
	in >> temp._first;
	cout << "Введите второй элемент: ";
	in >> temp._second;
	cout << "Введите третий элемент: ";
	in >> temp._third;
	return in;
}
ostream& operator <<(ostream& out, TRIAD& temp)
{
	return (out << temp._first << " " << temp._second << " " << temp._third << endl);
}

bool operator== (const TRIAD& c1, const TRIAD& c2)
{
	return (c1._first == c2._first &&
		c1._second == c2._second &&
		c1._third == c2._third);
}
bool operator!= (const TRIAD& c1, const TRIAD& c2)
{
	return !(c1 == c2);
}