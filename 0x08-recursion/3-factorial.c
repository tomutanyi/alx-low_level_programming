#include "main.h"

/**
 * factorial - function to display factorials .
 * @n: the number on display .
 * Return: the factorials in question .
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
