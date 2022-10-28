#include <stdio.h>

/**
 * main - print the combinations of 2 digit numbers
 *
 * return: always (0) (success)
 */
int main(void)
{
	int ten;
	int one;

	for (ten = 0; ten <= 9; ten++)
	{
		for (one = ten + 1; one <= 9; one++)
		{
			putchar(ten + '0');
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
