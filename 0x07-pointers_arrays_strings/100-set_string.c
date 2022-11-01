#include "main.h"

/**
* set_string - Function that converts the value of a pointer to a char
*@to: value which is pointed to
*@s: the value of the pointer in question
*/

void set_string(char **s, char *to)
{
	*s = to;
}
