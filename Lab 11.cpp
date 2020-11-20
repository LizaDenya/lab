#include <iostream>
#include <cmath>
using namespace std;

int first();
int second();
int third();
int fourth();
int fifth();
int sixth();

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
	if (number == 6) sixth();
	return 0;
}

int first() {
	int a, b;
	cout << "Please, enter data for variables A and B \n";
	cin >> a >> b;
	if (a > b)
	{
		b = a;
		cout << a << " " << b;
	}
	else
		if (a < b)
		{
			a = b;
			cout << a << " " << b;
		}
		else
		{
			a = 0;
			b = 0;
			cout << a << " " << b;
		}
	return 0;
}

int second() {
	int a, b, c, m, s;
	cout << "Please, enter data for variables A, B and C \n";
	cin >> a >> b >> c;
	m = a;
	s = a + b + c;
	if (b < m)
	{
		m = b;
	}
	if (c < m)
	{
		m = c;
	}
	cout << s - m;
	return 0;
}

int third()
{
	float x1, x2, x3, y1, y2, y3, s1, s2;
	cout << "enter the coordinates of point A \n ";
	cin >> x1 >> y1;
	cout << "enter the coordinates of point B \n ";
	cin >> x2 >> y2;
	cout << "enter the coordinates of point C \n ";
	cin >> x3 >> y3;
	s1 = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	s2 = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
	if (s1 < s2)
	{
		cout << "Point: " << "B; " << "distance: " << s1;
	}
	else
	{
		cout << "Point: " << "C; " << "distance: " << s2;
	}
	return 0;
}

int fourth()
{
	int a, b;
	cout << "enter the coordinates of point A \n";
	cin >> a >> b;
	if ((a > 0) and (b > 0))
	{
		cout << "1";
	}
	if ((a > 0) and (b < 0))
	{
		cout << "4";
	}
	if ((a < 0) and (b > 0))
	{
		cout << "2";
	}
	if ((a < 0) and (b < 0))
	{
		cout << "3";
	}
	return 0;
}

int fifth()
{
	int a;
	string s;
	cout << "Please enter a number \n";
	cin >> a;
	if (a == 0)
	{
		s = "Zero ";
	}
	else
	{
		if (a > 0)
		{
			s = "Positive ";
		}
		if (a < 0)
		{
			s = "Negative ";
		}
		if (a % 2 == 0)
		{
			s = s + "even ";
		}
		else
		{
			s = s + "odd ";
		}
	}
	cout << s + "number";
	return 0;
}

int sixth()
{
	int a;
	string s;
	cout << "Please enter a number \n";
	cin >> a;
	if (a % 2 == 0)
	{
		s = "Even ";
	}
	else
	{
		s = "Odd ";
	}
	if (a / 100 > 0)
	{
		s = s + "three-digit ";
	}
	else
	{
		if (a / 10 > 0)
		{
			s = s + "double-digit ";
		}
		else
		{
			s = s + "single digit ";
		}
	}
	cout << s + "number";
	return 0;
}
