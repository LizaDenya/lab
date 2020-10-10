#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a, b, s, r, p, c;
	cin >> a >> b;
	s = abs(a) + abs(b);
	r = abs(a) - abs(b);
	p = abs(a) * abs(b);
	c = abs(a) / abs(b);
	cout << s << " " << r << " " << p << " " << c;
	return 0;
}
