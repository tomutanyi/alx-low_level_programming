#include "main.h"

/**
 * _strcpy - This function copies the string pointed to.
 * @dest: This is the copy of the string pointed to.
 * @src: This is the origin origin of the string pointed to.
 * Return: ALWAYS (0)
**/

char *_strcpy(char *dest, char *src)
{
	int b;

	for (b = 0; src[b] != '\0'; b++)
	{
		dest[b] = src[b];
	}

	dest[b] = '\0';

	return (dest);
}
