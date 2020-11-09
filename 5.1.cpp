#include <iostream>
#include <cmath>
using namespace std;

int first()
{
	cout << "Please, enter the coordinate value x1, y1, x2, y2 \n" ;
	int x1, y1, x2, y2, a, b;
	cin >> x1 >> y1 >> x2 >> y2;
	a = abs(y1 - y2);
	b = abs(x1 - x2);
	cout << sqrt(a * a + b * b); "\n";
	return 0;
}