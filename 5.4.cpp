#include <iostream>
#include <cmath>
using namespace std;

int fourth()
{
	cout << "Please, enter the coordinate value x1, y1, x2, y2 \n";
	int x1, y1, x2, y2, p, s, a, b;
	cin >> x1 >> y1 >> x2 >> y2;
	a = abs(y1 - y2);
	b = abs(x1 - x2);
	s = a * b;
	p = 2 * (a + b);
	cout << "S = "<< s << " P = " << p ; "\n";
	return 0;
}