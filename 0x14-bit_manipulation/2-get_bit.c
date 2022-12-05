#include "main.h"

/**
 * get_bit - function returns the value of bit at given index.
 * @n: the bit in question .
 * @index: index to get the value at .
 * Return: if error occurs (-1), or bit value .
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
