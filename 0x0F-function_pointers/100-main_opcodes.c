#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes of main .
 * @argc: no. of args .
 * @argv: an array .
 * Return: Always 0 .
 */
int main(int argc, char *argv[])
{
	int mem, index;
	int (*address)(int, char **) = main;
	unsigned char code;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	mem = atoi(argv[1]);

	if (mem < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < mem; index++)
	{
		code = *(unsigned char *)address;
		printf("%.2x", code);

		if (index == mem - 1)
		{
			continue;
		}

		printf(" ");

		address++;
	}

	printf("\n");

	return (0);
}
