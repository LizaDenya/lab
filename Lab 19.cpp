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
	cout << "Введите размер массива \n ";
	cin >> n;
	vector<int> v;

	for (i = 0; i < n; ++i) {
		int k;
		cout << "Введите значения массива  \n";
		cin >> k;
		v.push_back(k);
	}
	s = v[0];
	for (i = 0; i < n - 1; i++)
	{
		if ((v[i] == v[i + 1]) or (v[i + 1] == s))
		{
			s = v[i + 1];
			auto iter = v.cbegin(); 
			v.erase(iter + (i + 1));
			n = v.size();
		}
	}
	for (i = 0; i < n; i++)
	{
			cout << v[i] << " ";
	}
	return 0;
}

int second() {
	int n, i, s, c, l, f;
	setlocale(LC_ALL, "rus");
	cout << "Введите размер массива \n ";
	cin >> n;
	vector<int> v;
	l = 0;
	f = 0;

	for (i = 0; i < n; ++i) {
		int k;
		cout << "Введите значения массива  \n";
		cin >> k;
		v.push_back(k);
	}
	
	for (i = 0; i < n - 1; i++)
	{
		for (c = 0; c < n; c++) { 
			if (v[i] == v[c]){
				l += 1;
				f = c;
			}
		}
		if (l == 2) {
			auto iter = v.cbegin();
			v.erase(iter + i);
			n = v.size();
		}
		if (l == 2) {
			auto iter = v.cbegin();
			v.erase(iter + f - 1);
			n = v.size();
		}
		l = 0;
	
	}

	for (i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
	cout << " " << n;
	return 0;
}

int third() {
	int n, i, ms, Ms, m, M;
	setlocale(LC_ALL, "rus");
	cout << "Введите размер массива \n ";
	cin >> n;
	vector<int> v;

	for (i = 0; i < n; ++i) {
		int k;
		cout << "Введите значения массива  \n";
		cin >> k;
		v.push_back(k);
	}
	m = v[0];
	M = v[0];
	ms = 0;
	Ms = 0;
	for (i = 1; i < n; i++) {
		if (M < v[i]) {
			M = v[i];
			Ms = i;
		}
		if (m > v[i]) {
			m = v[i];
			ms = i;
		}
	}
	auto iter = v.cbegin();
	v.emplace(iter + Ms + 1, 0);
	auto iter2 = v.cbegin();
	if (ms < Ms) {
		v.emplace(iter2 + ms, 0);
	}
	else {
		v.emplace(iter2 + ms + 1, 0);
	}
	n = v.size();
	for (i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
	
	return 0;
}

int fourth() {
	int n, i, s;
	setlocale(LC_ALL, "rus");
	cout << "Введите размер массива \n ";
	cin >> n;
	vector<int> v;

	for (i = 0; i < n; ++i) {
		int k;
		cout << "Введите значения массива  \n";
		cin >> k;
		v.push_back(k);
	}

	for (i = 0; i < n; ++i) {
		if (v[i] < 0) {
			s = i;
			auto iter = v.cbegin();
			v.emplace(iter + s + 1, 0);
			n = v.size();
		}
	}
	for (i = 0; i < n; ++i) {
		cout << v[i] << " ";
	}
	return 0;
}

int fifth() {
	int n, i, s;
	setlocale(LC_ALL, "rus");
	cout << "Введите размер массива \n ";
	cin >> n;
	vector<int> v;

	for (i = 0; i < n; ++i) {
		int k;
		cout << "Введите значения массива  \n";
		cin >> k;
		v.push_back(k);
	}

	for (i = n - 1; i >= 0; --i) {
		if (v[i] > 0) {
			s = i;
			auto iter = v.cbegin();
			v.emplace(iter + s, 0);
			n = v.size();
		}
	}
	for (i = 0; i < n; ++i) {
		cout << v[i] << " ";
	}
	return 0;
}