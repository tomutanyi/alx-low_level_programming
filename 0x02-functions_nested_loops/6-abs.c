#include "main.h"
/**
 * _abs - the absolute value of a number to be printed by function
 *@n: The int to print by function ..
 * Return: The absolute value of the integer, or (0) ..
 */

int _abs(int n)
{

	if (n > 0)
	{
		return (n);
	}

	else if (n == 0)
	{
		return (0);
	}

	else
	{
		return (n * (-1));
	}

}
