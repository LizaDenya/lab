#include <iostream>
#include <cmath>
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
