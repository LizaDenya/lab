#include <iostream>
#include <cmath>
using namespace std;

int second()
{
	cout << "Please, enter data for variables A, B and C \n";
	int A, B, C, AC, BC, summa;
	cin >> A >> B >> C;
	AC = abs(A - C);
	BC = abs(B - C);
	summa = AC + BC;
	cout << "AC = " << AC << ", BC = " << BC << ", sum of AC and BC = " << summa << "\n";
	return 0;
}