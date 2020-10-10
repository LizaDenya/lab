#include <iostream>

using namespace std;

int main()
{
	float a, b, s, r, p, c;
	cin >> a >> b;
	s = pow(a, 2) + pow(b, 2);
	r = pow(a, 2) - pow(b, 2);
	p = pow(a, 2) * pow(b, 2);
	c = pow(a, 2) / pow(b, 2);
	cout << s << " " << r << " " << p << " " << c;
	return 0;
}
