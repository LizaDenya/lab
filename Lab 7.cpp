
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

int first()
{
	cout << "Please, enter data for variable a \n";
	float a, p;
	p = 180;
	cin >> a;
	if (a <= 360 & 0 < a) {
		a = a / p;
		cout << "a = " << a << "pi radians";
	}
	else {
		cout << "0 < a <= 360";
	}
	return 0;
}

int second()
{
	cout << "Please, enter data for variable a \n";
	float a, p;
	p = 180;
	cin >> a;
	a = a * p / 3.141592653589793;
	cout << "a = " << a << " degrees";
	return 0;
}

int third()
{
	cout << "Please, enter data for variables X, A and Y \n";
	int X, A, Y;
	cin >> X >> A >> Y;
	cout << "One kilogram of candy costs " << A / X << " rubles. \n";
	cout << Y << " kilograms of candy costs " << Y * (A / X) << " rubles. \n";
	return 0;
}

int fourth()
{
	cout << "Please, enter data for variables V1, V2, S and T \n";
	int V1, V2, S, T;
	cin >> V1 >> V2 >> S >> T;
	cout << "S2 = " << S + T * (V1 + V2);
	return 0;
}

int fifth()
{
	cout << "Please, enter data for variables A and B \n";
	int A, B, x;
	cin >> A >> B;
	if (A != 0) {
		x = -B / A;
		cout << "x = " << x;
	}
	else cout << "A != 0";
	return 0;
}

int sixth() {
	cout << "Please, enter data for variables A1, B1, C1, A2, B2 and C2 \n";
	int A1, B1, C1, A2, B2, C2, Z, x, y;
	cin >> A1 >> B1 >> C1 >> A2 >> B2 >> C2;
	Z = A1 * B2 - A2 * B1;
	if (Z != 0) {
		x = (C1 * B2 - C2 * B1) / Z;
		y = (A1 * C2 - A2 * C1) / Z;
		cout << "x = " << x << "; y = " << y;
	}
	else {
		cout << " A1 * B2 - A2 * B1 = 0";
	}
	return 0;
}