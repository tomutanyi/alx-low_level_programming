#include <stdio.h>

/**
 * main -Entry point
 * Return: ALways 0 (success)
 */
int main(void)
{
	int ron;

	for (ron = 0; ron < 10; ron++)
		putchar(ron + '0');
	putchar('\n');
	return (0);
}
