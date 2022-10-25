#include "main.h"

/**
 * _atoi - The function to convert a str to an int.
 * @s: The name of thee string to be converted
 *Return: The integer value of the converted string.
 */

int _atoi(char *s)
{
	int gin = 1;
	unsigned int kyr = 0;

	do {
		if (*s == '-')
		{
			gin *= -1;
		}

		else if (*s >= '0' && *s <= '9')
		{
			kyr = (kyr * 10) + (*s - '0');
		}

		else if (kyr > 0)
		{
			break;
		}

	} while (*s++);

	return (kyr * gin);
}
