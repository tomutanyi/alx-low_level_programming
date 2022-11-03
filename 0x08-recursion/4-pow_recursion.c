#include "main.h"

/**
* _pow_recursion - a function that raises x ^ y .
*@x: the number to be raised .
*@y: the number to be raised to .
*Return: x ^ y .
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	return (_pow_recursion(x, y - 1) * x);
}
