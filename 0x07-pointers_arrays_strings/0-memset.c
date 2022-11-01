#include "main.h"

/**
 *_memset -   function that fils mem with bytes.
 *@b: the set value.
 *@s: the block of memory to be filled
 *@n: the bytes of memory.
 *Return: the block of the memory
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		*(s + k) = b;
	}

	return (s);
}
