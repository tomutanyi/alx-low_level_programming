#include "main.h"

/**
 * _strpbrk - searches str for specific charactters .
 * @accept: the ptr to str .
 * @s: pointer in which a string is inputted .
 * Return: str that matches ptr
*/

char *_strpbrk(char *s, char *accept)
{
	int m;

	while (*s != '\0')
	{
		m = 0;

		while (accept[m] != '\0')
		{
			if (*s == accept[m])
			{
				return (s);
			}

			m++;
		}

		s++;

	}

	return (0);

}
