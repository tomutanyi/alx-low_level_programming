#include "main.h"

/**
 *_strlen - This function returns the length of the string.
 * @s: The string whose length is to be returned.
 *Return: Returns the length of the string as an integer.
 */

int _strlen(char *s)
{
	int tyr;

	tyr = 0;

	while (s[tyr] != '\0')
	{
		tyr++;
	}

	return (tyr);
}
