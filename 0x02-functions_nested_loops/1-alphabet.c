#include "main.h"

/**
 * print_alphabet - print alphabet lowercase
 *
 * Return: Always 0 (Success).
 */

void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}

	_putchar('\n');

}
