#include "main.h"

/**
 * _islower - Checks for lowercase letters
 * @c: The value to be compared
 * Return: Always (0).
 */
int _islower(int c)

{

	if (c > 'a' && c < 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
