#include <iostream>
#include <cmath>
using namespace std;

int third()
{
	cout << "Please, enter data for variables A, B and C in random order \n";
	int A, B, C, AC, BC, x, pr;
	cin >> A >> B >> C;
	if (A > C)
	{
		x = C;
		C = A;
		A = x;
	}
	if (C > B)
	{
		x = B;
		B = C;
		C = x;
	}
	if (A > C)
	{
		x = C;
		C = A;
		A = x;
	}
	AC = C - A;
	BC = B - C;
	pr = AC * BC;
	cout << "AC * BC = " << pr; "\n";
	return 0;
}