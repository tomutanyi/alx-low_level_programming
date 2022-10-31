#include <stdio.h>

/**
*main- Prints the largest prime number factorial of a number inputtted by the user.
*Return: always returns 0 ..
*/

int main(void)
{
	long number = 612852475143;
	int tarp;

	while (tarp++ < number / 2)

	{
		if (number % tarp == 0)
		{
			number /= 2;
			continue;
		}

		for (tarp = 3; tarp < number / 2; tarp += 2)
		{
			if (number % tarp == 0)
			number /= tarp;

		}
	}
	printf("%ld\n", number);
	return (0);
}
