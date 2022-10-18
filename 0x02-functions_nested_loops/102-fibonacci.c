#include <stdio.h>

/**
 * main - Prints the first fifty numbers from the fibonacci sequence
 *
 * Return: (0) if successful
 */

int main(void)
{
	int i, l;
	long b1, b2, next;

	b1 = 1;
	b2 = 2;
	l = 50;

	for (i = 0; i < l; i++)
	{
		if (i == 49)
		{
			printf("%lu", b1);
		}
		else
		{
			printf("%lu, ", b1);
			next = b1 + b2;
			b1 = b2;
			b2 = next;
		}
	}
	printf("\n");
	return (0);
}
