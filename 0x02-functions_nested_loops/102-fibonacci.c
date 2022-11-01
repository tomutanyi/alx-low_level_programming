#include <stdio.h>

/**
 * main - Prints the first fifty numbers from the fibonacci sequence.
 * Return: 0 if successful, always
 */

int main(void)
{
	int i, l;
	long b1, b2, next;

	v1 = 1;
	v2 = 2;
	l = 50;

	for (i = 0; i < l; i++)
	{
		if (i == 49)
		{
			printf("%lu", v1);
		}
		else
		{
			printf("%lu, ", v1);
			next = v1 + v2;
			v1 = v2;
			v2 = next;
		}
	}
	printf("\n");
	return (0);
}
