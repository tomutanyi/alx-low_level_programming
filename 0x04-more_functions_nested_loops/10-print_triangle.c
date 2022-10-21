#include "main.h"
/**
*print_triangle - prints a triangle using the pound cahracter (#).
*@size:size parameter of triangle to be printed by the program.
*Return:returns (0)
*/
void print_triangle(int size)
{
	int ent2, ent4;

	if (size > 0)
	{
		for (ent2 = 1; ent2 <= size; ent2++)
		{
			for ((ent4 = size - ent2); ent4 > 0; ent4--)
			_putchar(' ');

			for (ent4 = 0; ent4 < ent2; ent4++)
			_putchar('#');

			if (ent2 == size)
			continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
