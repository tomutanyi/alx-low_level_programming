#include "main.h"
/**
*  _strncpy - a function which copies a strin.
*@dest: Where the copy is contained.
*@src: The original str.
*@n:max The amount of data copied
*Return: ALWAYS (0)
*/

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}

	for ( ; j < n; j++)
	{
		dest[j] = '\0';
	}

	return (dest);
}
