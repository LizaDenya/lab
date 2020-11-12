#include <iostream>
#include <cmath>
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

int first()
{
	cout << "Please, enter data for variables A and B \n";
	int A, B, C;
	cin >> A >> B;
	C = A;
	A = B;
	B = C;
	cout << "A = " << A << " B = " << B << "\n";
	return 0;
}

int second()
{
	cout << "Please, enter data for variables A, B and C \n";
	int A, B, C, D;
	cin >> A >> B >> C;
	D = A;
	A = C;
	C = D;
	D = B;
	B = C;
	C = D;
	cout << "A = " << A << " B = " << B << " C = " << C << "\n";
	return 0;
}

int third()
{
	cout << "Please, enter data for variables A, B and C \n";
	int A, B, C, D;
	cin >> A >> B >> C;
	D = A;
	A = C;
	C = D;
	D = B;
	B = A;
	A = D;
	cout << "A = " << A << " B = " << B << " C = " << C << "\n";
	return 0;
}

int fourth()
{
	cout << "Please, enter data for variable x \n";
	int x, z, y;
	cin >> x;
	z = pow(x, 2);
	y = 3 * pow(z, 3) - 6 * z - 7;
	cout << " y = " << y << "\n";
	return 0;
}

int fifth()
{
	cout << "Please, enter data for variable x \n";
	int x, z, y;
	cin >> x;
	z = pow((x - 3), 3);
	y = 4 * pow(z, 2) - 7 * z + 2;
	cout << " y = " << y << "\n";
	return 0;
}

int sixth()
{
	cout << "Please, enter data for variable A \n";
	int A, x;
	cin >> A;
	x = A * A;
	A = x * x;
	A = A * A;
	cout << " A^8 = " << A << "\n";
	return 0;
}

int seventh()
{
	cout << "Please, enter data for variable A \n";
	int A, x, y;
	cin >> A;
	x = A * A;
	y = x * A;
	x = y * y;
	A = y * x * x;
	cout << " A^15 = " << A << "\n";
	return 0;
}