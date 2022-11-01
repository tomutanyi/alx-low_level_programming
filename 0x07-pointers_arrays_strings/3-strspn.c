#include "main.h"

/**
 *_strspn - search the number of bytes in the initial substring
 *@accept: container of the reference
 *@s: the pointer to the string output .
 *Return: The bytes in initial seg .
 */

unsigned int _strspn(char *s, char *accept)
{
	int z, e, r;

	z = 0;

	while (s[z] != '\0')
	{
		e = 0;

		r = 1;

		while (accept[e] != '\0')
		{

			if (s[z] == accept[e])
			{
				r = 0;
				break;
			}

			e++;
		}

		if (r == 1)
			break;
		z++;
	}

	return (z);
}
