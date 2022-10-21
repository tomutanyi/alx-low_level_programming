#include <stdio.h>

/**
*main- Prints the largest prime number
*of a number inputted by the user.
*
*Return: Returns (0)
*/

int main(void)
{
	long number = 612852475143;
	int tar;

	while (tar++ < number / 2)

	{
		if (number % tar == 0)
		{
			number /= 2;
			continue;
		}

		for (tar = 3; tar < number / 2; tar += 2)
		{
			if (number % tar == 0)
			number /= tar;

		}
	}
	printf("%ld\n", number);
	return (0);
}
