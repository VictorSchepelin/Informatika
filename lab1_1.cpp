#include<iostream>
using namespace std;
int main()
{
	float a, b, r, c, d, e, f, g;
	cout << "Input a,b" << endl;
	cin >> a >> b;
	c = (a + b) * (a + b) * (a + b);
	d = a * a * a;
	e = 3 * a * b * b;
	f = b * b * b;
	g = 3 * a * a * b;
	r = (c - d) / (e + f + g);
	cout << "rez as float = " << r << endl;
	double a1, b1, r1, c1, d1, e1, f1, g1;
	cout << "Input a,b" << endl;
	cin >> a1 >> b1;
	c1 = (a1 + b1) * (a1 + b1) * (a1 + b1);
	d1 = a1 * a1 * a1;
	e1 = 3 * a1 * b1 * b1;
	f1 = b1 * b1 * b1;
	g1 = 3 * a1 * a1 * b1;
	r1 = (c1 - d1) / (e1 + f1 + g1);
	cout << "rez as double = " << r1 << endl;
	return 0;
}

