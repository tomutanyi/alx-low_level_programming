#include "main.h"

/**
 * print_last_digit - print the last digit of an integer
 *
 * @n: A number
 *
 * Return: Last digit of n
 */

int print_last_digit(int n)
{
	int last_digit;
	{
		if (n > 0)
		{
			last_digit = (n % 10);
		}

		else
		{
			last_digit = ((n % 10) * -1);
		}
	}
	_putchar(last_digit + '0');

	return (last_digit);
}
