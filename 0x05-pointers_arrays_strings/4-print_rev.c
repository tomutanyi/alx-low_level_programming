#include <stdio.h>
#include "main.h"
#include <string.h>

/**
*print_rev - Prints a string in reverse to be displayed.
*@s: The string string to be reversed.
*Return: Always (0).
*/

void print_rev(char *s)
{
	int rom = strlen(s);

	while (rom--)
	{
		putchar(*(s + rom));
	}
	putchar(11);
}
