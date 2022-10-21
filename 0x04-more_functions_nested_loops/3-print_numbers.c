#include "main.h"
/**
 * print_most_numbers - Prints integers from 0 to 9.
 * Return: Always (0)
 */
void print_most_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		_putchar (i);
		i++;
	}

	_putchar ('\n');
}
