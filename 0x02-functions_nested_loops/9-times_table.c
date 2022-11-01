#include "main.h"

/**
*times_table - the 9 times table produced by the magic of c
*Return: returns (0) always (0) ..
*/

void times_table(void)
{
	int num, rax, vaemond;

	for (num = 0; num <= 9; num++)

	{
		_putchar('0');

		for (rax = 1; rax <= 9; rax++)
		{
			_putchar(',');
			_putchar(' ');
			vaemond = num * rax;
			if (vaemond <= 9)
			_putchar(' ');
			else
			_putchar((vaemond / 10) + '0');

			_putchar((vaemond % 10) + '0');
		}
		_putchar('\n');
	}
}
