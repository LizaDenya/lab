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
	cout << "Please, enter data for variable N (seconds) \n";
	int N, S;
	cin >> N;
	if (N <= 60) cout << 0;
	else {
		S = N % 60;
		cout << S;
	}
	return 0;
}

int second() {
	cout << "Please, enter data for variable K (day) \n";
	int K;
	cin >> K;
	K = K % 7;
	cout << K;
	return 0;
}

int third() {
	cout << "Please, enter data for variables K and N \n";
	int K, N;
	cin >> K >> N;
	K = (K + N - 2) % 7 + 1;
	cout << K;
	return 0;
}

int fourth() {
	cout << "Please, enter data for variables A, B and C \n";
	int A, B, C, x, y;
	cin >> A >> B >> C;
	x = (A / C) * (B / C);
	y = x * (C * C);
	A = A * B - y;
	cout << x << "; " << A;
	return 0;
}

int fifth() {
	cout << "Please, enter data for variable N (year) \n";
	int N;
	cin >> N;
	N = (N - 1) / 100;
	N += 1;
	cout << N;
	return 0;
}