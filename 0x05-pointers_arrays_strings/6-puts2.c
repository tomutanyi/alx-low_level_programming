#include "main.h"
/**
 * puts2 - A function that prints all even chars of a string.
 * @str: The string whose even numbered chars are displayed.
 * Return: Always (0).
 */
void puts2(char *str)
{
	int o;
	char k;

	for (o = 0; str[o] != 0; o++)
	{
		if (o % 2 == 0)
		{
			k = str[o];
			_putchar(k);
		}
	}
	_putchar('\n');
}
