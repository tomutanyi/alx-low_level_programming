#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet ten times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int h;

	for (h = 0; h < 10; h++)
	{
		char d;

		for (d = 'a'; d <= 'z'; d++)
		{
			_putchar(d);
		}
		_putchar('\n');
	}
}
