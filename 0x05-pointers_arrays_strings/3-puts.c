#include "main.h"

/**
 * _puts - function tp display strings
 * @str: The strings being displayed..
 * Return: return constantly (0)
 */
\
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}

	_putchar('\n');
}
