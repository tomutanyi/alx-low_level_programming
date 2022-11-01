#include "main.h"

/**
 *_strlen - This function returns the length of the string after being inpuy
 * @s: The string whose length is to be returned by the aformentioned func.
 *Return: Returns the length of the string as needed by user
 */

int _strlen(char *s)
{
	int tyra;

	tyra = 0;

	while (s[tyra] != '\0')
	{
		tyra++;
	}

	return (tyra);
}
