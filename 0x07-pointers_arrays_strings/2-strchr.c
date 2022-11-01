#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @c: the char to be searched
 * @s: a str
 * Return: ptr to the string s above
 **/

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		++s;
	}

	if (*s == c)
	{
		return (s);

	}


	return (0);
}
