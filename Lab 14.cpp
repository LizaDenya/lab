#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int first();
int second();
int third();
int fourth();
int fifth();
int sixth();

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
	if (number == 6) sixth();
	return 0;
}

int first() {
	int a, b, s;
	setlocale(LC_ALL, "rus");
	cout << "Введите значение A \n ";
	cin >> a;
	cout << "Введите значение B \n ";
	cin >> b;
	while (a != (b + 1))
	{
		for (s = 1; s <= a; s++)
		{
			cout << a << " ";
		}
		a = a + 1;
	}
	return 0;
}

int second() {
	int a, b;
	setlocale(LC_ALL, "rus");
	cout << "Введите значение A \n ";
	cin >> a;
	cout << "Введите значение B \n ";
	cin >> b;
	while (a >= b)
	{
		a = a - b;
		if (b == 0)
		{
			b = a + 1;
		}
	}
	cout << a;
	return 0;
}

int third() {
	int a, b, s;
	setlocale(LC_ALL, "rus");
	cout << "Введите значение A \n ";
	cin >> a;
	b = 1;
	s = 0;
	while (s < a)
	{
		s = s + b;
		b++;
	}
	cout << b - 1 << " " << s;
	return 0;
}

int fourth()
{
	int a, P, s;
	float b;
	setlocale(LC_ALL, "rus");
	cout << "Введите P% \n ";
	cin >> P;
	a = 0;
	b = 1000;
	while (b <= 1100) {
		b = b + (b * (0.01 * P));
		a++;
	}
	cout << "Количество месяцев  " << a << "; Размер вклада " << b;
	return 0;
}

int fifth() {
	int a, b;
	setlocale(LC_ALL, "rus");
	cout << "Введите значение A \n ";
	cin >> a;
	cout << "Введите значение B \n ";
	cin >> b;
	while (a != b)
	{
		if (a > b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}
	cout << a;
	return 0;
}

int sixth() {
	int n;
	cout << "Введите значение N \n ";
	cin >> n;
	int f1 = 1, f2 = 1, f = 0, k = 2;

	while (f < n) {
		++k;
		f = f2 + f1;
		f2 = f1;
		f1 = f;
	}
	cout << "K = " << k;
	return 0;
}
