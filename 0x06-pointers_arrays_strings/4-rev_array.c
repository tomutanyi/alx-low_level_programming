#include "main.h"

/**
 * reverse_array - Function thaat reverses array.
 * @a: the array to be reversed by said function.
 * @n: elements in 1 array.
 * Return: ALWAYS (0)
 */

void reverse_array(int *a, int n)
{
	int isb, drum;

	for (drum = n - 1; drum >= n / 2; drum--)
	{
		isb = a[n - 1 - drum];
		a[n - 1 - drum] = a[drum];
		a[drum] = isb;
	}
}
