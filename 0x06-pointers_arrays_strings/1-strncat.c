#include "main.h"

/**
 * _strncat - Concatenates 2 strings using inputted number of bytes.
 * @dest: The string which shal be conc.
 * @src: The string which is to be appe.
 * @n: The no. of bytes.
 * Return: ALWAYS (0)
 */
char *_strncat(char *dest, char *src, int n)
{
	int mar = 0, wizz = 0;

	while (dest[mar++])
	{
		wizz++;
	}

	for (mar = 0; src[mar] && mar < n; mar++)
	{
		dest[wizz++] = src[mar];
	}

	return (dest);
}
