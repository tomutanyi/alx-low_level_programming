#include <stdio.h>
/**
 * main - The entry point for all programs.
 *
 * Return: Void.
 */

int main(void)
{
	int p = 100;
	int i;

	i = 1;
	while (i <= p)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}

		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}

		else if (i % 3 == 0)
		{
			if (i < p)
			printf("Fizz ");


			else
			{
				printf("%i ", i);
			}

			i++;


		}
	}
	printf("\n");
	return (0);
}
