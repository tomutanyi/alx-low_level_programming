#include "main.h"
/**
 * _isdigit - checck for a digit btn 0 & 9 using ascii..
 * @c: the digit to be checked by function mentioned above
 * Return: always (0) when returning
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
