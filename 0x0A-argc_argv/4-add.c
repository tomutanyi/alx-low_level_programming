#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that adds numbers .
 * @argv: the array of pointers .
 * @argc: the no. of arguments .
 * Return: Always successful 0, if not 1 .
 */

int main(int argc, char *argv[])
{
	int k, p, add = 0;

	for (k = 1; k < argc; k++)
	{
		for (p = 0; argv[k][p] != '\0'; p++)
		{
			if (argv[k][p] < '0' || argv[k][p] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		add += atoi(argv[k]);
	}

	printf("%d\n", add);

	return (0);
}
