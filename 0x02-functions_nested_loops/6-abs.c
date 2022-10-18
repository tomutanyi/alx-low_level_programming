#include "main.h"
/**
 * _abs - the absolute value of a number
 *
 *@n: The int to print
 * Return: The absolute value of the integer.
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
