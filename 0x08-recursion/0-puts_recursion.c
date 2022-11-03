#include "main.h"

/**
 *_puts_recursion - This is a function that prints
 * a string followed  by a newline .
 *@s: the designation of the string to be printed .
 *Return: always (0) .
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
