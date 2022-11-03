#include "main.h"

/**
 * _strlen_0x08 - size of str .
 * @s: this is a pointer .
 * Return: length .
 */

int _strlen_0x08(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_0x08(++s));
}


/**
 * dreg - palindrome
 * @s: this is a pointer
 * @f: parameter
 * Return: always (0)
 */

int dreg(char *s, int f)
{
	if (f < 1)
	{
		return (1);
	}

	if (*s == *(s + f))
	{
		return (dreg(s + 1, f - 2));
	}
	return (0);
}

/**
 * is_palindrome - a function for palindromes .
 * @s: pointer to a str .
 * Return: (0)
 */

int is_palindrome(char *s)
{
	int jor = _strlen_0x08(s);

	return (dreg(s, jor - 1));
}
