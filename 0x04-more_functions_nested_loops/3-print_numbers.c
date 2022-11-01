#include "main.h"

/**
 * print_numbers - Prints integers from 0 to 9 after running the preogram
 * Return: the return is the same as always (0)

 */
void print_numbers(void)
{
	int m;

	m = 0;
	while (m < 10)
	{
		_putchar (m + '0');
		m++;
	}

	_putchar ('\n');
}
