#include<iostream>
#include <iomanip>
#include<math.h>
using namespace std;
int main()
{
	int n = 10, i;
	float e = 0.0001;
	float a = 0.1, b = 0.8, h = (b - a) / 10, s, el, el1;
	cout << "X\t\t SN\t\t SE \t\t Y" << endl;
	for (float x = a; x <= b; x += h)
	{
		s = 0;
		el = -1;
		for (i = 1; i <= n; i++)
		{
			el *= (-1);
			s += el * pow(x, 2 * i) / (2 * i * (2 * i - 1));
		}
		cout << setiosflags(ios::fixed) << setprecision(6) << x << "\t" << s << "\t";
		i = 1;
		s = 0;
		el = -1;
		while (1 == 1)
		{
			el *= (-1);
			el1 = el * pow(x, 2 * i) / (2 * i * (2 * i - 1));
			if (fabs(el1) < e) break;
			i++;
			s += el1;
		}
		cout << s << "\t" << x * atan(x) - log(sqrt(1 + x * x)) << endl;
	}

	return 0;
}