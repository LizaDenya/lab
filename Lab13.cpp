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

int first() {
	float k;
	setlocale(LC_ALL, "rus");
	cout << "Введите стоимость конфет за 1 кг \n";
	cin >> k;
	cout << k / 10 << "; " << (k / 10) * 2 << "; " << (k / 10) * 3 << "; " << (k / 10) * 4 << "; "
		<< k / 2 << "; " << (k / 10) * 6 << "; " << (k / 10) * 7 << "; " << (k / 10) * 8 << "; "
		<< (k / 10) * 9 << "; " << k;
	return 0;
}

int second()
{
	float N, a, b;
	setlocale(LC_ALL, "rus");
	cout << "Введите N \n";
	cin >> N;
	a = 1;
	b = 1.1;
	while (N != a)
	{
		a += 1;
		b = b * (1 + (a / 10));
	}
	cout << b;
	return 0;
}

int third() {
	int N, b, s;
	setlocale(LC_ALL, "rus");
	cout << "Введите N \n ";
	cin >> N;
	s = 0;
	for (b = 1; b <= N; b++)
	{
		s = s + (b * 2 - 1);
		cout << s << " ";
	}
	return 0;
}

int fourth()
{
	int N, k;
	float a, s;
	setlocale(LC_ALL, "rus");
	cout << "Введите A и N \n";
	cin >> a >> N;
	s = 0;
	for (k = 0; k <= N - 1; k++)
	{
		s = s + pow(a, k);
	}
	cout << s;
	return 0;
}

int fifth()
{
	int N, k;
	float a, s;
	setlocale(LC_ALL, "rus");
	cout << "Введите A и N \n";
	cin >> a >> N;
	s = 0;
	for (k = 0; k <= N - 1; k++)
	{
		if (k % 2 == 0)
		{
			s = s + pow(a, k);
		}
		else
		{
			s = s - pow(a, k);
		}
	}
	cout << s;
	return 0;
}


