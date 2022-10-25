#include "main.h"

/**
 * _puts - PrintS a string followed by a new line.
 * @str: The string to be printed's name.
 *
 * Return: Always RETURNS (0).
 */

void _puts(char *str)
{
	int num;

	for (num = 0; str[num] != '\0'; num++)
	{
		_putchar(str[num]);
	}

	_putchar('\n');
}
