#include "variadic_functions.h"

/**
* print_strings - prints anything .
*@separator: separator
*@n: no. of str .
*Return: always 0 .
*/
void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list or;
	unsigned int k;
	char *str;

	va_start(or, n);

	for (k = 0; k < n; k++)
	{
		str = va_arg(or, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}

		else
		{
			printf("%s", str);
		}

		if (k != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}

	}

	printf("\n");

	va_end(or);
}
