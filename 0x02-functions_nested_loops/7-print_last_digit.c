#include "main.h"

/**
 * print_last_digit - print the last digit of an integer wich is to be returned.
 * @n: A number whose last didit we require
 * Return: Last digit of n is to be returned within parentheses
 */

int print_last_digit(int n)
{
	int rain;
	{
		if (n > 0)
		{
			rain = (n % 10);
		}

		else
		{
			rain = ((n % 10) * -1);
		}
	}
	_putchar(rain + '0');

	return (rain);
}
