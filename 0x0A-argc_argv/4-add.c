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
	int w, plus = 0;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
		return (0);
	}

	for (w = 1; w < argc; w++)
	{
		if ((*argv[w]) >= '0' && (*argv[w]) <= '9')
		{
			plus += atoi(argv[i]);
		}

		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", plus);

	return (0);
}
