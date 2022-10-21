#include <stdio.h>
/**
 * main - entry point
 *
 * Return: void
 */

int main(void)
{

	int s = 100;
	int i;

	i = 1;
	while (i <= s)
	{
		if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz ");
		}

		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}

		else if (i % 3 == 0)
		{
			if (i < s)
			printf("Fizz ");

			else
			printf("Fizz");
		}

		else
		{
			printf("%i ", i);
		}

		i++;


	}
	printf("\n");
	return (0);
}
