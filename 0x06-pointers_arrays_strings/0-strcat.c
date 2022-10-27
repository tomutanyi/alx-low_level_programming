#include "main.h"
#include <stdio.h>

#include "main.h"
/**
 * _strcat - A function that concatanates two strings and displays them.
 * @dest: The destination of the function.
 * @src: The source of the function.
 * Return: ALWAYS (0).
 */
char *_strcat(char *dest, char *src)
{
	int conc = 0, conc2 = 0;

	while (*(dest + conc) != '\0')
	{
		conc++;
	}
	while (conc2 >= 0)
	{
		*(dest + conc) = *(src + conc2);
		if (*(src + conc2) == '\0')
			break;
		conc2++;
		conc++;
	}
	return (dest);
}
