#include <stdio.h>

/**
 * main - main function of all c programms..
 * Return: always display (0)
 */

int main(void)
{

	int s = 100;
	int u;

	u = 1;
	while (u <= s)
	{
		if (u % 5 == 0 && u % 3 == 0)
		{
			printf("FizzBuzz ");
		}

		else if (u % 5 == 0)
		{
			printf("Buzz ");
		}

		else if (u % 3 == 0)
		{
			if (u < s)
			printf("Fizz ");

			else
			printf("Fizz");
		}

		else
		{
			printf("%i ", u);
		}

		u++;


	}
	printf("\n");
	return (0);
}
