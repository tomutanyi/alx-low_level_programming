#include <stdio.h>

/**
 * main - A func that prints it's own nam followed by new line .
 * @argv: list .
 * @argc: arguments .
 * Return: always a success (0) ..
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
