#include <iostream>
#include <cmath>
#include <Windows.h>
#include <vector>
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
	int n, i, s;
	setlocale(LC_ALL, "rus");
	cout << "Введите размер массивов \n ";
	cin >> n;
	vector<int> a;
	vector<int> b;

	for (i = 0; i < n; ++i) {
		int k;
		cout << "Введите значения массива А \n";
		cin >> k;
		a.push_back(k);
	}

	for (i = 0; i < n; ++i) {
		int k;
		cout << "Введите значения массива В \n";
		cin >> k;
		b.push_back(k);
	}

	for (i = 0; i < n; i++)
	{
		s = a[i];
		a[i] = b[i];
		b[i] = s;
		cout << a[i];
	}
	cout << " ";
	for (i = 0; i < n; i++)
	{
		cout << b[i];
	}
	return 0;
}

int second() {
	
	int n, i, s;
	setlocale(LC_ALL, "rus");
	cout << "Введите размер массивов \n ";
	cin >> n;
	vector<int> a;
	vector<int> b;
	s = 0;

	for (i = 0; i < n; ++i) {
		int k;
		cout << "Введите значения массива  \n";
		cin >> k;
		a.push_back(k);
	}

	for (i = 0; i < n; ++i) {
		int k;
		s += a[i];
		k = s / (i + 1);
		b.push_back(k);
	}

	for (i = 0; i < n; ++i) {
		cout << b[i] << " ";
	}
	return 0;
}

int third() {

	int n, i, s;
	setlocale(LC_ALL, "rus");
	cout << "Введите размер массива \n ";
	cin >> n;
	vector<int> v;
	s = 0;

	for (i = 0; i < n; ++i) {
		int k;
		cout << "Введите значения массива \n";
		cin >> k;
		v.push_back(k);
	}

	for (i = 0; i < n; ++i) {
		if (v[i] % 2 == 1) s = v[i];
	}
	for (i = 0; i < n; ++i) {
		if (v[i] % 2 == 1) {
			v[i] = v[i] + s;
			cout << v[i] << " ";
		}
		else {
			cout << v[i] << " ";
		}
	}
	return 0;
}

int fourth() {
	int n, i, s, a, b, M, m;
	setlocale(LC_ALL, "rus");
	cout << "Введите размер массива \n ";
	cin >> n;
	vector<int> v;
	a = 0;
	b = 0;

	for (i = 0; i < n; ++i) {
		int k;
		cout << "Введите значения массива \n";
		cin >> k;
		v.push_back(k);
	}
	m = v[0];
	M = v[0];

	for (i = 0; i < n; ++i) {
		if (v[i] > M) {
			M = v[i];
			a = i;
		}
		if (v[i] < m) {
			m = v[i];
			b = i;
		}
	}
	if (a < b) {
		for (i = a + 1; i < b; i++) {
			v[i] = 0;
		}
	}
	else {
		for (i = b + 1; i < a; i++) {
			v[i] = 0;
		}
	}
	for (i = 0; i < n; ++i) {
		cout << v[i] << " ";
	}
	return 0;
}

int fifth() {
	int n, i;
	setlocale(LC_ALL, "rus");
	cout << "Введите размер массива \n ";
	cin >> n;
	vector<int> v;

	for (i = 0; i < n; ++i) {
		int k;
		cout << "Введите значения массива \n";
		cin >> k;
		v.push_back(k);
	}

	if (v[0] < v[1])
	{
		cout << v[0] << " ";
	}
	cout << v[1] << " ";
	for (i = 2; i < n; i++)
	{
		if ((v[0] > v[i - 1]) and (v[0] < v[i]))
		{
			cout << v[0] << " " << v[i] << " ";
		}
		else
		{
			cout << v[i] << " ";
		}
	}
	if (v[0] > v[n - 1])
	{
		cout << v[0];
	}
	return 0;
}
