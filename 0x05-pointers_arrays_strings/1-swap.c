#include "main.h"

/**
*swap_int - swaps the values of two integers.
*@a: The first integer to be swapped
*@b: The second integer to be swapped.
*Return: returns (0).
*/

void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
