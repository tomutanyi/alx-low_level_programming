#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - the function
 * Description - Prints if a random no. is pos or neg.
 * Return: Always ((0)
 */
int main(void)
{
	int z;

	srand(time(0));
	
	z = rand() - RAND_MAX / 2;
	
	if (z < 0)
		printf("%d is negative\n", z);
	
	else if (z == 0)
		{
			printf("%d is zero\n", z);
		}
	
	else
		{
			printf("%d is positive\n", z);
		}
	
	return (0);
}
