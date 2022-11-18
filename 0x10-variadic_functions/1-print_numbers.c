#include "variadic_functions.h"

/**
*print_numbers - prints numbers, new line .
*@separator: string to be printed between numbers .
*@n: arguments .
*Return: always (0) .
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list kim;
	unsigned int d;

	va_start(kim, n);

	for (d = 0; d < n; d++)
	{
		printf("%d", va_arg(kim, int));

		if (d != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(kim);

}
