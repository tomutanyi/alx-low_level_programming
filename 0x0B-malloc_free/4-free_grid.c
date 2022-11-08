#include "main.h"

/**
 * free_grid - free a 2d grid .
 * @grid: grid width .
 * @height: grid height .
 * Return: always (0) .
 */

void free_grid(int **grid, int height)
{
	int v;

	for (v = 0; v < height; v++)
	{
		free(grid[v]);
	}

	free(grid);
}
