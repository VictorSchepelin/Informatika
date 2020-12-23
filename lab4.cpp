#include<iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;
int main()
{
	srand(time(NULL));
	int mas[100], n, i;
	cout << "Input n" << endl;
	cin >> n;
	cout << "Massiv:" << endl;
	for (i = 0; i < n; i++)
	{
		mas[i] = rand() % 201 - 100;
		cout << mas[i] << " ";
	}
	cout << endl;
	for (i = 2; i < n; i += 3)
		mas[i] = -300;
	i = 0;
	while (i < n)
	{
		if (mas[i] == -300) {
			for (int j = i + 1; j < n; j++)
				mas[j - 1] = mas[j];
			n--;
		}
		i++;
	}
	cout << "New Massiv without i%3:" << endl;
	for (i = 0; i < n; i++)
		cout << mas[i] << " ";
	cout << endl;
	i = 0;
	while (i < n)
	{
		if (mas[i] < 0) {
			n++;
			for (int j = n - 1; j > i; j--)
				mas[j] = mas[j - 1];
			mas[i + 1] = fabs(mas[i] + 1);
		}
		i++;
	}
	cout << "New Massiv:" << endl;
	for (i = 0; i < n; i++)
		cout << mas[i] << " ";
	cout << endl;
	return 0;
}