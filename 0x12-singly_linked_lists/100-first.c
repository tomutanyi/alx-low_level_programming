#include <stdio.h>

void crane(void) __attribute__ ((constructor));

/**
 * crane - prints a sentence .
 */

void crane(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
