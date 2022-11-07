#include <stdlib.h>
#include <stdio.h>

/**
 * main - a function that displays 2 numnbers .
 *
 * @argc: the number of arguments .
 * @argv: array pointer that holds arguments
 * Return: always (0) sucess .
 */

int main(int argc, char *argv[])
{
	int v, d, vamp;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	d = atoi(argv[2]);

	v = atoi(argv[1]);

	vamp = d * v;

	printf("%d\n", vamp);

	return (0);
}
