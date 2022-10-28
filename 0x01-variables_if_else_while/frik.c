#include <stdio.h>

/**
 * main - point of entry of any function
 * Return: always a success ((0)
 */

int main(void)

{
	char q;

	for (q = 'a'; q <= 'z'; q++)
	{
		putchar(q);
	}

	for (q = 'A'; q <= 'Z'; q++)
	{
		putchar(q);
	}

	putchar('\n');

	return (0);
}
