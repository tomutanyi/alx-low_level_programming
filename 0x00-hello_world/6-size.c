#include <stdio.h>

/**
* main - the main function of programs
*
* Return: return (0) upon ending
*/

int main(void)
{
	char charType;
	float floatType;
	long long int longlongintType;
	long int longintType;
	int intType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongintType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
