#include "holberton.h"

/**
 * _memcpy - copies memory area
 * @src: the original string
 * @dest: the destination str .
 * @n: the no. of bytes to be copied
 * Return: pointer to the destination .
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *mem = dest;

	while (n--)
	{
		*dest++ = *src++;
	}

	return (mem);
}
