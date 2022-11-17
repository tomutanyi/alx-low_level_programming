#include "function_pointers.h"

/**
*print_name - function print name .
*@name:afformentioned name .
*@f: pointer .
*/

void print_name(char *name, void (*f)(char *))
{

	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);

}
