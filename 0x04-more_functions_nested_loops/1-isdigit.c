#include "main.h"
/**
 * _isdigit - checck for a digit btn 0 & 9.
 * @c: the digit to be checked.
 * Return: Always 0
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
