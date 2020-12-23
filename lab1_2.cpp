#include<iostream>
using namespace std;
int main()
{
	int n, m, rez;
	cout << "Input n,m" << endl;
	cin >> n >> m;
	cout << "n=" << n << " m=" << m << endl;
	rez = n++ * m;
	cout << " (n++*m)=" << rez << endl;
	cout << "n=" << n << " m=" << m << endl;
	rez = n++ < m;
	cout << " (n++<m)=" << rez << endl;
	cout << "n=" << n << " m=" << m << endl;
	rez = m-- > m;
	cout << " (m-->m)=" << rez << endl;
	cout << "n=" << n << " m=" << m << endl;
	return 0;
}
