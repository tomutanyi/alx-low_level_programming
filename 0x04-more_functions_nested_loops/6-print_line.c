#include "main.h"

/**
 * print_line - hyphen staright line function
 * @n: An input integer from the user
 * Return: Always returning (0)
 */

void print_line(int n)
{

	int f;

	if (n > 0)
	{
		for (f = 0; f < n; f++)
		{
			_putchar (95);
		}

	_putchar('\n');
	}

	else
	{
		_putchar ('\n');
	}
}
