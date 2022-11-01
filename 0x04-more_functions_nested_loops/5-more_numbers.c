#include "main.h"

/**
*more_numbers - displays integers to the number 14
*
*Return: returns nothing always (0)..
*/

void more_numbers(void)
{
	int number19, number29;

	for (number19 = 0; number19 < 10; number19++)
	{
		for (number29 = 0; number29 <= 14; number29++)
		{
			if (number29 > 9)
			{
				_putchar((number29 / 10) + '0');
			}
			_putchar((number29 % 10) + '0');
		}
	_putchar(10);
	}
}
