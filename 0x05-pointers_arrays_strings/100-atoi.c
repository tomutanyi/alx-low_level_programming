#include "main.h"

/**
 * _atoi - The function to convert a str to an int's name
 * @s: The name of thee string to be converted from int
 *Return: The integer value of the converted string is to be returned
 */

int _atoi(char *s)
{
	int gin = 1;
	unsigned int kyra = 0;

	do {
		if (*s == '-')
		{
			gin *= -1;
		}

		else if (*s >= '0' && *s <= '9')
		{
			kyra = (kyra * 10) + (*s - '0');
		}

		else if (kyra > 0)
		{
			break;
		}

	} while (*s++);

	return (kyra * gin);
}
