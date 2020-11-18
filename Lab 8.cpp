#include <iostream>
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

int first() {
	cout << "Please, enter data for variable b (bytes) \n";
	int c, k;
	cin >> c;
	k = c / 1024;
	cout << c << " bytes = " << k << " full kilobytes";
	return 0;
}

int second() {
	cout << "Please, enter data for variables A and B \n";
	int A, B, K;
	cin >> A >> B;
	K = A / B;
	cout << K;
	return 0;
}

int third() {
	cout << "Please, enter data for variables A and B \n";
	int A, B, K;
	cin >> A >> B;
	K = A - B * (A / B);
	cout << K;
	return 0;
}

int fourth() {
	cout << "Please, enter two-digit number \n";
	int A, B;
	cin >> A;
	B = A % 10;
	A = A / 10;
    cout << B << A;
	return 0;
}

int fifth() {
	cout << "Please, enter three-digit number \n";
	int A, B, C;
	cin >> A;
	B = A / 100;
	C = A % 100;
	cout << C << B;
	return 0;
}