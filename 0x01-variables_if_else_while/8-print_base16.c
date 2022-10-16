#include <stdio.h>
/**
 * main -Entry point
 * Return: Always 0 (Success)
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
		} else
		{
			putchar(t);
			t++;
		}
	}
	putchar('\n');
	return (0);
}
