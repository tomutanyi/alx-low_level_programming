#include <stdio.h>
#include <stdlib.h>

/**
* main - function that prints the 
* minimum amount of change
* @argc: the arguments
* @argv: pointer array
* Return: always (0), unless error
*/

int main(int argc, char *argv[])
{
	int ecks, hun = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	ecks = atoi(argv[1]);

	while (ecks > 0)
	{
		hun++;

		if ((ecks - 25) >= 0)
		{
			ecks -= 25;
			continue;
		}

		if ((ecks - 10) >= 0)
		{
			ecks -= 10;
			continue;
		}

		if ((ecks - 5) >= 0)
		{
			ecks -= 5;
			continue;
		}

		if ((ecks - 2) >= 0)
		{
			ecks -= 2;
			continue;
		}

		ecks--;
	}

	printf("%d\n", hun);
	return (0);
}
