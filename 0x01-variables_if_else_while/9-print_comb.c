#include <stdio.h>

/**
 * main - combinaton printer function,.
 *
 * Return: always a (0).
 */

int main(void)

{
		int number;

		for (number = 0; number <= 9; number++)
		{
			putchar(number + '0');

			if (number < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}

		putchar('\n');

	return (0);
}
