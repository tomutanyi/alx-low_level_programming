#include <stdio.h>
/**
 * main - program that prints all possible different combinations
 * of thress digits.
 *
 * Return: 0
 */
int main(void)
{
	int q;
	int a;
	int d;

	for (q = 48; q < 58; q++)
	{
		for (a = 48; a < 58; a++)
		{
			if (a > q)
			{
				for (d = 48; d < 58; d++)
				{
					if (d > a)
					{
					putchar(q);
					putchar(a);
					putchar(d);
					if (q == 55 && a == 56 && d == 57)
					{
						break;
					}

					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
