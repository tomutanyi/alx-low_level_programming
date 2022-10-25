#include "main.h"

/**
 * _puts - It writes a string followed by a new line.
 * @str: The string to be written out.
 * Return: Always (0).
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}

	_putchar('\n');
}
