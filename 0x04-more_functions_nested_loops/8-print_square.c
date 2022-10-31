#include "main.h"
/**
 * print_square - # makes a square of even sides
 *@size: length of both sides contained
 * Return: the return is consistently (0)
 */

void print_square(int size)
{

	int w;
	int k;

	if (size > 0)
	{
		for (w = 0; w < size; w++)
		{

			for (k = 0; k < size; k++)
			{
				_putchar (35);
			}
			_putchar ('\n');

		}

	}

	else
	{
		_putchar ('\n');
	}

}
