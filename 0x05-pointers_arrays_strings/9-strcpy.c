#include "main.h"

/**
 * _strcpy - This function copies the string pointed to from input by usr.
 * @dest: This is the copy of the string pointed to after said input
 * @src: This is the origin origin of the string pointed to from input by usr
 * Return: return (0)
**/

char *_strcpy(char *dest, char *src)
{
	int bo;

	for (bo = 0; src[bo] != '\0'; bo++)
	{
		dest[bo] = src[bo];
	}

	dest[bo] = '\0';

	return (dest);
}
