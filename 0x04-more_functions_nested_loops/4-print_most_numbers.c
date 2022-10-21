#include "main.h"
/**
 * print_most_numbers - Prints all numbers except 2 and 4
 * between 1 and 9.
 * Return: Always (0).
 */
void print_most_numbers(void)
{

	int i;

	i = 0;
	while (i < 10)
	{
		if (i != 2 && i != 4)
		{
			_putchar (i + '0');
		}
	i++;
	}

	_putchar ('\n');
}
