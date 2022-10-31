#include "main.h"

/**
 * print_most_numbers - functions that prints some integers while excluding others,
 * Return: Always return the num (0)..
 */

void print_most_numbers(void)
{

	int v;

	v = 0;
	while (v < 10)
	{
		if (v != 2 && v != 4)
		{
			_putchar (v + '0');
		}
	v++;
	}

	_putchar ('\n');
}
