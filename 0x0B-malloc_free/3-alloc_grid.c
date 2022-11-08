#include "main.h"

/**
* alloc_grid - pointer to square .
*@width: the width .
*@height: the height .
*Return: yhe pointer .
*/

int **alloc_grid(int width, int height)
{
	int **square;
	int q = 0, e;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	square = (int **) malloc(sizeof(int *) * height);

	if (square != NULL)
	{
		for (; q < height; q++)
		{
			square[q] = (int *) malloc(sizeof(int) * width);

			if (square[q] != NULL)
			{
				for (e = 0; e < width; e++)
				{
					square[q][e] = 0;
				}
			}
			else
			{
				while (q >= 0)
				{
					free(square[q]);
					q--;
				}
				free(square);
				return (NULL);
			}
		}
		return (square);
	}
	else
	{
		return (NULL);
	}
}
