#include "main.h"

/**
*flip_bits - gets the number of bits to flip to get from n to m
*@m: final number
*@n: initial number
*Return: the number of flipped bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int kan = n ^ m;
	int baku = 0;

	while (kan)
	{
		if (kan & 1)
		{
			baku++;
		}

		kan >>= 1;
	}
	return (baku);
}
