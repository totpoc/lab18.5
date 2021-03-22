#include "triad.h"
#include "object.h"
#include "vector.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	TRIAD A, B(12, 59, 33), C(B);
	A.setFirst(6);
	A.setSecond(6);
	A.setThird(6);

	cout << "Первый элемент: " << A << endl;
	cout << "Второй элемент: " << B << endl;
	cout << "Третий элемент: " << C << endl;

	if (A == B)
		cout << "A = B" << endl;
	else
		cout << "A != B" << endl;
	return 0;
}