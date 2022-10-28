#include <stdio.h>

/**
 * main - the genesis of a function
 * Return: always a 0
 */
int main(void)
{
	char t = 'a';

	int lit;

	for (lit = 0; lit < 16; lit++)
	{
		if (lit < 10)
		{
			putchar(lit + '0');
		}

		else
		{
			putchar(t);
			t++;
		}
	}

	putchar('\n');

	return (0);
}
