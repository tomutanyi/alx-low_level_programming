#include "main.h"

/**
 * print_number - a function tp print int.
 * @n: the number to be displayed.
 * Return : ALWAYS (0)
 */

void print_number(int n)

{
	unsigned int tac = n;

	if (n < 0)
	{
		_putchar('-');
		tac = -tac;
	}

	if ((tac / 10) > 0)
		print_number(tac / 10);

	_putchar((tac % 10) + '0');
}
