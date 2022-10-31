#include <string.h>
#include <stdio.h>
#include "main.h"

/**
*print_rev - prints a string in reverse from user
*@s: The string string to be reversed inputted by user
*Return: consistently (0)
*/

void print_rev(char *s)
{
	int roma = strlen(s);

	while (roma--)
	{
		putchar(*(s + roma));
	}
	putchar(10);
}
