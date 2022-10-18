#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints natural inregers: n to 98.
 *
 * @n: The input number from the user.
 *
 * Return: no return.
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
