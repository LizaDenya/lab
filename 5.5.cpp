#include <iostream>
#include <cmath>
using namespace std;

int fifth()
{
	cout << "Please, enter the coordinate value x1, y1, x2, y2, x3, y3 \n";
	float x1, y1, x2, y2, x3, y3, a, b, c, p, s;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	a = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	b = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
	c = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "P = " << p * 2 << " S = " << s; "\n";
	return 0;
}