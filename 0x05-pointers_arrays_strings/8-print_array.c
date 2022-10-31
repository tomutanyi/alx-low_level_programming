#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints the inputted n0 of elements from usr
 * of an array of integers from usr
 * @a: The array of int to be displayed from usr
 * @n: The number of elements to be printed by function proottype
 */

void print_array(int *a, int n)
{
	int ziti;

	for (ziti = 0; ziti < n; ziti++)
	{
		printf("%d", a[ziti]);

		if (ziti == n - 1)
		{
			continue;
		}

		printf(", ");
	}

	printf("\n");
}
