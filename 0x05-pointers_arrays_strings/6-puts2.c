#include "main.h"

/**
 * puts2 - A function that prints even letters in a word from usr
 * @str: The string whose even letters are disp.
 * Return: (0) alwys.

*/
void puts2(char *str)
{
	int y;
	char d;

	for (y = 0; str[y] != 0; y++)
	{
		if (y % 2 == 0)
		{
			d = str[y];
			_putchar(d);
		}
	}
	_putchar('\n');
}
