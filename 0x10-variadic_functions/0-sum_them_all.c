#include "variadic_functions.h"

/**
* sum_them_all - returns the sum .
* @n: parameter
* Return: the sum
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int k;
	va_list sum;
	int all = 0;

	if (n)
	{
		va_start(sum, n);

		for (k = 0; k < n; k++)
		{
			all += va_arg(sum, int);
		}

		va_end(sum);
	}
	return (all);
}
