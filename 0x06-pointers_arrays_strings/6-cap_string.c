#include "main.h"

/**
 * cap_string - A functioon that capitalizes everything.
 * @s: what will be completely capitalized.
 *
 * Return: ALWAYS (0).
 */

char *cap_string(char s*)
{
	int count, upper;

	rep = -32;

	gap = 0;

	while (s[gap] != '\0')
	{

		if (s[gap] >= 'a' && s[gap] <= 'z')
		{
			if (s[gap] == *s || separator(s[gap - 1]))

				s[gap] += rep;
		}

		gap++;
	}
	return (s);
}
