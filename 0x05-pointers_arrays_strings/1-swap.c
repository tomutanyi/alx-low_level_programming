#include "main.h"

/**
*swap_int - swaps the values of two integers.
*@a: The first integer to be swapped for another one
*@b: The second integer to switched for another one
*Return: returns always 0,
*/

void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
