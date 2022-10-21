#include <stdio.h>
/**
 * main - The entry point for all programs.
 *
 * Return: Void.
 */

int main(void)
{
	int bit;

	while (bit++ < 100)

	{
		if ((bit % 5 == 0) && (i % 3 == 0))
		{
			printf("FizzBuzz");
		}

		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}

		else if (i % 3 == 0)
		{
			printf("Fizz ");
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
