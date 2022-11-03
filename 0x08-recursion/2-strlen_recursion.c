#include "main.h"

/**
* _strlen_recursion - displays length of string .
* @s: the string in question .
*Return: the str len .
*/

int _strlen_recursion(char *s)
{
	int owl = 0;

	if (*s != '\0')
	{
		owl++;
		owl += _strlen_recursion(s + 1);
	}

	return (owl);
}
