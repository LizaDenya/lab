#include <iostream>
using namespace std;

int first();
int second();
int third();
int fourth();
int fifth();
int sixth();
int seventh();

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
	if (number == 7) seventh();
	return 0;
}

int first() {
	int a, b;
	cout << "Please, enter data for variables A and B \n";
	cin >> a >> b;
	if ((a > 2) and (b <= 3)) {
		cout << "True";
	}
	else {
		cout << "False";
	}
	return 0;
}

int second() {
	int a, b, c;
	cout << "Please, enter data for variables A, B and C \n";
	cin >> a >> b >> c;
	if ((a < b) and (b < c))
	{
		cout << "True";
	}
	else
	{
		cout << "False";
	}
	return 0;
}

int third()
{
	int a;
	cout << "Please, enter data for variable A \n";
	cin >> a;
	if ((a % 2 == 0) and (a > 9) and (a < 100))
	{
		cout << "True";
	}
	else
	{
		cout << "False";
	}
	return 0;
}

int fourth()
{
	int a, s;
	cout << "Please, enter data for variable A \n";
	cin >> a;
	s = (a - ((a / 100) * 100)) / 10;
	if (((a % 10 > s) and (s > a / 100)) or ((a % 10 < s) and (s < a / 100)))
	{
		cout << "True";
	}
	else
	{
		cout << "False";
	}
	return 0;
}

int fifth()
{
	int a, s;
	cout << "Please, enter data for variable A \n";
	cin >> a;
	s = (a - ((a / 1000) * 1000) - (a % 10)) / 10;
	if ((a % 10 == a / 1000) and (s % 10 == s / 10))
	{
		cout << "True";
	}
	else
	{
		cout << "False";
	}
	return 0;
}

int sixth()
{
	int a, b, c;
	cout << "Please, enter data for variables a, b and c \n";
	cin >> a >> b >> c;
	if ((pow(a, 2) == pow(b, 2) + pow(c, 2)) or
		(pow(b, 2) == pow(c, 2) + pow(a, 2)) or
		(pow(c, 2) == pow(a, 2) + pow(b, 2)))
	{
		cout << "True";
	}
	else
	{
		cout << "False";
	}
	return 0;
}

int seventh()
{
	int a, b, c;
	cout << "Please, enter data for variables a, b and c \n";
	cin >> a >> b >> c;
	if ((a + b > c) and (b + c > a) and (c + a > b))
	{
		cout << "True";
	}
	else
	{
		cout << "False";
	}
	return 0;
}