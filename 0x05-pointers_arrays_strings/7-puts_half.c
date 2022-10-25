#include "main.h"

/**
 * puts_half - Prints only HALF of a string to be displayed.
 * @str: The string to be printed and returned.
 * Return: ALWAYS (0).
 */

void puts_half(char *str)
{
	int liv = 0, day = 0, z;

	while (str[liv++])
	{
		day++;
	}

	if ((day % 2) == 0)
	{
		z = day / 2;
	}

	else
	{
		z = (day + 1) / 2;
	}

	for (liv = z; liv < day; liv++)
	{
		_putchar(str[liv]);
	}

	_putchar('\n');
}
