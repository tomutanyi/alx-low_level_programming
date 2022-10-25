#include <stdio.h>
#include "main.h"
#include <string.h>
/**
* rev_string - Reverses a sttring and displays it.
* @s: The string to be reversed and returned.
*
* Return: ALways (0)
*/

void rev_string(char *s)
{
	int m, top, lan = _strlen(s);

	for (m = 0; m < lan / 2; m++)
	{
		top = *(s + m);
		*(s + m) = *(s + lan - m - 1);
		*(s + lan - m - 1) = top;
	}
}
