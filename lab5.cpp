#include<iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void input(int ms[10][10], int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			ms[i][j] = rand() % 90 + 10;
}
void output(int ms[10][10], int n, int m)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << ms[i][j] << " ";
		cout << endl;
	}
}
void del(int ms[10][10], int n, int m, int k)
{
	for (int j = 0; j < m; j++)
		for (int i = k + 1; i < n; i++)
			ms[i - 1][j] = ms[i][j];
}
int main()
{
	srand(time(NULL));
	int mas[10][10], nn, mm;
	cout << "Input n,m" << endl;
	cin >> nn >> mm;
	input(mas, nn, mm);
	cout << "Matrix:" << endl;
	output(mas, nn, mm);
	int a, b;
	cout << "Input a,b (from 1 to " << nn << ")" << endl;
	cin >> a >> b;
	for (int t = a - 1; t <= b - 1; t++)
	{
		del(mas, nn, mm, a - 1);
		nn--;
	}
	cout << "New matrix" << endl;
	output(mas, nn, mm);
	return 0;
}

