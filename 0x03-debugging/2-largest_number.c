#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers in a program
 * @b: 2nd integer
 * @c: 3rd integer
 * @a: 1st integer
 * Return: largest number in the array
 */

int largest_number(int a, int b, int c)
{
	int orc;

	if (c >= a && c >= b)
	{
		orc = c;
	}
	else if (b >= a && b >= c)
	{
		orc = b;
	}
	else
	{
		orc = a;
	}

	return (orc);
}
