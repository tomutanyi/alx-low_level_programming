#include <stdio.h>

/**
 * main - print the comb  of two numbers
 *
 * return: always 0.
 */

int main(void)
{
	int tenn;
	int one;

	for (tenn = 0; tenn <= 9; tenn++)
	{
		for (one = tenn + 1; one <= 9; one++)
		{
			putchar(tenn + '0');
			putchar(one + '0');
			if (ten < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
