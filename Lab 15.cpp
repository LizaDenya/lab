#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int first();
int second();
int third();
int fourth();
int fifth();

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Введите номер задания\n";
	int number;
	cin >> number;
	if (number == 1) first();
	if (number == 2) second();
	if (number == 3) third();
	if (number == 4) fourth();
	if (number == 5) fifth();
	return 0;
}

float PowerA3(float a, float b)
{
	b = a * a * a;
	return b;
}

int first()
{
	float a, b, i;
	setlocale(LC_ALL, "rus");
	b = 0;
	cout << "Введите A \n";
	for (i = 0; i < 5; i++)
	{

		cin >> a;
		b = PowerA3(a, b);
		cout << b << " ";
	}
	return 0;
}

int Sign(float x)
{
	if (x < 0)
	{
		x = -1;
	}
	if (x > 0)
	{
		x = 1;
	}
	if (x == 0)
	{
		x = 0;
	}
	return x;
}

int second()
{
	float x, x2;
	setlocale(LC_ALL, "rus");
	cout << "Введите X и x2 \n";
	cin >> x >> x2;
	x = Sign(x);
	x2 = Sign(x2);
	cout << x + x2;
	return 0;
}

float RingS(float r1, float r2)
{
	return (3.14 * pow(r1, 2) - 3.14 * pow(r2, 2));
}

int third()
{
	float r, r2, i; 
		setlocale(LC_ALL, "rus");
	for (i = 0; i < 3; i++)
	{
		cout << "Введите r и r2 \n ";
		cin >> r >> r2;
		cout << RingS(r, r2) << endl << endl;
	}
	return 0;
}

float Quarter(float x, float y)
{
	if ((x > 0) and (y > 0))
	{
		return 1;
	}
	if ((x > 0) and (y < 0))
	{
		return 2;
	}
	if ((x < 0) and (y < 0))
	{
		return 3;
	}
	if ((x < 0) and (y > 0))
	{
		return 4;
	}
}

int fourth()
{
	float x, y, i;
	setlocale(LC_ALL, "rus");
	for (i = 0; i < 3; i++)
	{
		cout << "Введите x и y \n ";
		cin >> x >> y;
		cout << Quarter(x, y) << endl << endl;
	}
	return 0;
}

double Fact2(int n)
{
	double ff = 1;
	for (; n > 1; n -= 2)
		ff *= n;
	return ff;
}

int fifth()
{
	int  N, i;
	setlocale(LC_ALL, "rus");
	for (i = 0; i < 3; i++)
	{
		cout << "Введите N \n ";
		cin >> N;
		cout << Fact2(N) << endl << endl;
	}
	return 0;
}