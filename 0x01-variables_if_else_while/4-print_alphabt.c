#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
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
