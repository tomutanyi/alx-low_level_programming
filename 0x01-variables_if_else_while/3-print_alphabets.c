#include <stdio.h>

/**
 * main - beginning of a function..
 * Return: AlwaYs (0) .
 */

int main(void)
{
	char y;

	for (y = 'a'; y <= 'z'; y++)
		putchar(y);

	for (y = 'A'; y <= 'Z'; y++)
		putchar(y);

	putchar('\n');

	return (0);
}
