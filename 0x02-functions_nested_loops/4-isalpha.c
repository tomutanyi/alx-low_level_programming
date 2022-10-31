#include "main.h"

/**
 * _isalpha - Return 1 if c is a letter. Lowercase or Uppercase. 0 if not the former ..
 *@c: The int to be printed by program
 * Return: If otherwise output is 0
 */

int _isalpha(int c)

{

	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
