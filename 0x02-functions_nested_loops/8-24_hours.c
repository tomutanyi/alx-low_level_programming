#include "main.h"

/**
*jack_bauer - function inspired by hit 2000s show 24
*Return: returns always 0..
*/

void jack_bauer(void)
{
	int sali, min;

	for (sali = 0; sali <= 23; sali++)

	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((sali / 10) + '0');
			_putchar((sali % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar(10);
		}
	}

}
