#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints the inputted n0 of elements
 * of an array of integers.
 * @a: The array of int to be displayed
 * @n: The number of elements to be printed.
 */
void print_array(int *a, int n)
{
	int zit;

	for (zit = 0; zit < n; zit++)
	{
		printf("%d", a[zit]);

		if (zit == n - 1)
		{
			continue;
		}

		printf(", ");
	}

	printf("\n");
}
