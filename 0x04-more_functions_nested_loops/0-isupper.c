#include "main.h"
/**
*_isupper - A function that checks if a character is uppercase or not.
*@c: tested character
*Return: O if not uppercase, 1 if of uppercase.
*/

int _isupper(int c)
{
	if ((c >= 'A' && c <= 'Z'))
	return (1);

	return (0);

}
