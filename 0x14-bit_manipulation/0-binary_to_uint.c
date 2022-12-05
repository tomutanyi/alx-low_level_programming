#include "main.h"

/**
 * binary_to_uint - function converts a binary number to unsigned int .
 * @b: string in question .
 * Return: convertted no.
 */

unsigned int binary_to_uint(const char *b)
{
	int l;
	unsigned int cab = 0;

	if (!b)
		return (0);

	for (l = 0; b[l]; l++)
	{
		if (b[l] != '0' && b[l] != '1')
			return (0);

		cab = 2 * cab + (b[l] - '0');
	}

return (cab);
}
