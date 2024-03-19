#include <iostream> //бібліотека для роботи операторів введення / виведення
#include <math.h> //бібліотека для використання математичних функцій
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "ukr"); //дозволити використання української мови
	const int n = 5;
	int i, a[n], num, max = 0, sum = 0;

	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (i = 0; i < n; i++)
	{
		if (fabs(a[i]) > max)
		{
			max = fabs(a[i]);
			num = i + 1;
		}
	}
	cout << num << endl;

	for (i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			for (i = i + 1; i < n; i++)
			{
				sum = sum + a[i];
			}
			break;
		}
	}
	cout << sum;

}