#include <stdio.h>

/**
 * main - combinaton printer function,.
 *
 * Return: always a (0).
 */

int main(void)

{
		int ramen;

		for (ramen = 0; ramen <= 9; ramen++)
		{
			putchar(ramen + '0');

			if (ramen < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}

		putchar('\n');

	return (0);
}
