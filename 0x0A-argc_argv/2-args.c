#include <stdio.h>

/**
 * main - prints all arguments it receives .
 * @argc: count the arguments .
 * @argv: the arguments
 * Return: Always (0) .
 */

int main(int argc, char const *argv[])
{
	int r = 0;

	while (argc--)
	{
		printf("%s\n", argv[r]);
		r++;
	}

	return (0);
}
