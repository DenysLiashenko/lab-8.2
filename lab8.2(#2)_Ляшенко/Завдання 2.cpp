#include <iostream> //бібліотека для роботи операторів введення / виведення
#include <math.h> //бібліотека для використання математичних функцій
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "ukr"); //дозволити використання української мови
	const int n = 30;
	int i, a[n], max = 0, k, x, m = 0,l;

	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			m++;
		}
	}

	for (l = 0; l < m; l++)
	{
		for (i = 0; i < n; i++)
		{
			if (a[i] == max)
			{
				for (k = i; k < n - 1; k++)
				{
					x = a[k];
					a[k] = a[k + 1];
					a[k + 1] = x;
				}
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		if (a[i] == max)
		{
			a[i] = 0;
		}
	}

	for (i = 0; i < n; i++)
	{
		cout << a[i] << " ";

	}
}