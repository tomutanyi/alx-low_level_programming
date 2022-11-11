#include "main.h"

/**
 * array_range - a function that creates
 * an array of integers .
 * @min: min
 * @max: max
 * Return: failure == NULL
*/

int *array_range(int min, int max)
{
	int p, *cell;

	if (min > max)
	{
		return (NULL);
	}

	cell = malloc((max - min + 1) * sizeof(int));

	if (cell == NULL)
	{
		return (NULL);
	}

	for (p = 0; min <= max; p++)
	{
		cell[p] = min;
		min++;
	}

	return (cell);
}
