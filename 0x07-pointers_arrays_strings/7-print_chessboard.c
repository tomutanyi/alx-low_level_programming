#include "main.h"

/**
 * print_chessboard - completes the display of a chessboard
 * @a: this is an array .
 * Return: always (0) .
 */

void print_chessboard(char (*a)[8])
{
	int q = 0;

	for (; q < 8; q++)
	{
		int t = 0;

		for (; t < 8; t++)
		{
			_putchar(a[q][t]);
		}

		_putchar('\n');
	}
}
