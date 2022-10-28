#include <stdio.h>

/**
 * main - start off any fiunction.
 * Return: always (0))
 */

int main(void)
{
	char o;

	for (o = 'a'; o <= 'z'; o++)
	{

		if (o != 'e' && o != 'q')
		putchar(o);
	}


	putchar('\n');

	return (0);
}
