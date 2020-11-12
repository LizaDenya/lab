#include <iostream>
#include <cmath>
using namespace std;

int first();
int second();
int third();
int fourth();
int fifth();

int main()
{
	cout << "Please, write the number of the task \n";
	int number;
	cin >> number;
	if (number == 1) first();
	if (number == 2) second();
	if (number == 3) third();
	if (number == 4) fourth();
	if (number == 5) fifth();
	return 0;
}

int first()
{
	cout << "Please, enter the coordinate value x1, y1, x2, y2 \n";
	int x1, y1, x2, y2, a, b;
	cin >> x1 >> y1 >> x2 >> y2;
	a = abs(y1 - y2);
	b = abs(x1 - x2);
	cout << sqrt(a * a + b * b); "\n";
	return 0;
}

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

int fourth()
{
	cout << "Please, enter the coordinate value x1, y1, x2, y2 \n";
	int x1, y1, x2, y2, p, s, a, b;
	cin >> x1 >> y1 >> x2 >> y2;
	a = abs(y1 - y2);
	b = abs(x1 - x2);
	s = a * b;
	p = 2 * (a + b);
	cout << "S = " << s << " P = " << p; "\n";
	return 0;
}

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