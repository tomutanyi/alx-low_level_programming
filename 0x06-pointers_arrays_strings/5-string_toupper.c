#include "main.h"

/**
 * string_toupper - functon that changes the case of letters
 * @str: The letters to be changed by function
 *
 * Return: ALWAYS  (0)
 */

char *string_toupper(char *str)
{
	int taco = 0;

	while (str[taco])
	{
		if (str[taco] >= 'a' && str[taco] <= 'z')
		{
			str[taco] -= 32;
		}

		taco++;
	}

	return (str);
}
