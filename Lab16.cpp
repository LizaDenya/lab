#include <iostream>
#include <cmath>
#include <Windows.h>
#include <vector>
#include <algorithm>
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
	int N, k;
	setlocale(LC_ALL, "rus");
	cout << "Введите N \n ";
	cin >> N;
	for (k = 0; k < N * 2; k = k + 2)
	{
		cout << k + 1 << " ";
	}
	return 0;
}

int second()
{
	int m[10], n, a, d, k;
	setlocale(LC_ALL, "rus");
	cout << "Введите размер массива \n";
	cin >> n;
	cout << "Введите первый член \n";
	cin >> a;
	cout << "Введите знаменатель \n ";
	cin >> d;
	for (k = 0; k < n; k++)
	{
		m[k] = a * pow(d, k);
		cout << m[k] << " ";
	}
	return 0;
}

int third()
{
	int m[10], N, A, B, s, k;
	setlocale(LC_ALL, "rus");
	cout << "Введите размер массива \n ";
	cin >> N;
	cout << "Введите первый член \n ";
	cin >> A;
	cout << "Введите второй член \n ";
	cin >> B;
	s = A + B;
	m[0] = A;
	m[1] = B;
	cout << m[0] << " " << m[1] << " ";
	for (k = 2; k < N; k++)
	{
		m[k] = s;
		s = s + m[k];
		cout << m[k] << " ";
	}
	return 0;
}

int fourth()
{
	setlocale(LC_ALL, "rus");
	int n, i;
	cout << "Введите размер массива \n ";
	cin >> n;
	vector<int> a;
	for (i = 0; i < n; ++i) {
		int k;
		cout << "Введите значения массива \n";
		cin >> k;
		a.push_back(k);
	}
	i = 0;
	while (i < n) {
		if ((n - 1) != i){
			cout << a[i] << " " << a[n - 1] << " ";
		}
		else
		{
			cout << a[i];
		}
		i++;
		n--;
	}
	return 0;
}

int fifth() {

	setlocale(LC_ALL, "rus");
	int n, i;
	cout << "Введите размер массива \n ";
	cin >> n;
	vector<int> a;
	
	for (i = 0; i < n; ++i) {
		int k;
		cout << "Введите значения массива \n";
		cin >> k;
		a.push_back(k);
	}
	

	for (i = 1; i < n; i += 2) {
		cout << a[i] << " ";
	}

	for (int i = ((n - 1) % 2 == 0 ? n - 1 : n - 2); i >= 0; i -= 2) {
		cout << a[i] << " ";
	}
	return 0;
}