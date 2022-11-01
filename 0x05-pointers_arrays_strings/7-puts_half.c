#include "main.h"

/**
 * puts_half - Prints only HALF of a string to be displayed after input from user
 * @str: The string to be printed and returned from user
 * Return: ALWAYS (0) when successful
 */

void puts_half(char *str)
{
	int livi = 0, daya = 0, zo;

	while (str[livi++])
	{
		daya++;
	}

	if ((daya % 2) == 0)
	{
		zo = daya / 2;
	}

	else
	{
		zo = (daya + 1) / 2;
	}

	for (livi = zo; livi < daya; livi++)
	{
		_putchar(str[livi]);
	}

	_putchar('\n');
}
