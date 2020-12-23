#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	for (int i = 20; i <= 100; i++)
		if (i % 3 == 0)
			sum += i;
	cout << "sum from 20 to 100, kratnih 3=" << sum << endl;
	return 0;
}
