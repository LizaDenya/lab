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

int first()
{
	int n, i, k, l, s;
	cout << "Введите размер массива \n ";
	cin >> n;
	vector<int> v;

	for (i = 0; i < n; ++i) {
		int k;
		cout << "Введите значения массива \n";
		cin >> k;
		v.push_back(k);
	}

	cout << "Введите начало диапозона \n";
	cin >> k;
	k--;
	cout << "Введите конец диапозона \n ";
	cin >> l;
	s = 0;
	for (i = k; i < l; i++)
	{
		s = s + v[i];
	}
	s = s / (l - k);
	cout << s;
	return 0;
}

int second()
{
	int n, i, a, b;
	cout << "Введите размер массива \n ";
	cin >> n;
	vector<int> v;

	for (i = 0; i < n; ++i) {
		int k;
		cout << "Введите значения массива \n";
		cin >> k;
		v.push_back(k);
	}
	a = v[1] - v[0];
	b = a;
	for (i = 1; i < n - 1; i++)
	{
		if ((v[i + 1] - v[i]) != a)
		{
			b = 0;
		}
	}
	cout << b;
	
	return 0;
}

int third() {
	int n, i, m;
	cout << "Введите размер массива \n ";
	cin >> n;
	vector<int> v;

	for (i = 0; i < n; ++i) {
		int k;
		cout << "Введите значения массива \n";
		cin >> k;
		v.push_back(k);
	}
	
	m = v[0];
	for (i = 0; i < n; ++i) {
		if ((v[i] < m) and (i % 2 == 0)) m = v[i];
	}
	cout << m;
	return 0;
}

int fourth() {
	int n, i, m, M;
	cout << "Введите размер массива \n ";
	cin >> n;
	vector<int> v;

	for (i = 0; i < n; ++i) {
		int k;
		cout << "Введите значения массива \n";
		cin >> k;
		v.push_back(k);
	}

	M = v[0];

	for (i = 1; i < n; ++i) {
		if (v[i] > v[i - 1]) {
			m = i;
			M = v[i];
		}
	}

		if (v[0] > M) m = 0;
		cout << m;
		return 0; 
}

int fifth() {
	int n, i, j;
	cout << "Введите размер массива \n ";
	cin >> n;
	vector<int> v;

	for (i = 0; i < n; ++i) {
		int k;
		cout << "Введите значения массива \n";
		cin >> k;
		v.push_back(k);
	}
	for (i = 0; i < n - 1; i++) {
		for (j = 1; j < n; j++) {
			if ((v[i] == v[j]) and (i != j)){
				if (i > j) cout << j << " " << i;
				else cout << i << " " << j;
			}
		}
	}
	return 0;
}