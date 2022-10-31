#include "main.h"

/**
 * print_alphabet - print alphabet lowercase in a for loop
 *
 * Return: Always 0 ( a Success).
 */

void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}

	_putchar('\n');

}
