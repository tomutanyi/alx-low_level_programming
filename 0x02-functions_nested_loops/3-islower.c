#include "main.h"

/**
 * _islower - Checks for lowercase letters in the program
 * @c: The value to be compared in the program ..
 * Return: always a 0..
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
