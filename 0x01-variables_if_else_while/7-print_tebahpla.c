#include <stdio.h>

/**
 * main - a begining of a functiin
 * Return: always 0..
 */

int main(void)

{
	char h;

	for (h = 'z'; h >= 'a'; h--)
		putchar(h);

	putchar('\n');

	return (0);
}
