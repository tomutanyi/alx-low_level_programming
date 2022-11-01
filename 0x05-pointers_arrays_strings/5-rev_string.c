#include <stdio.h>

/**
 * rev_string - A function that reversses a string and returns it after input from user.
 * @s: declaration of *s and paramters for the function afeter input from user
 * Return: ALWAYS (0) once run.
 */

void rev_string(char *s)
{
	int pi, sael;
	char witx;

	for (pi = '\0'; s[pi] != 0; pi++)

	sal = 0;
	for (pi = pi - 1; sal < pi; sael++)
	{
		witx = s[pi];
		s[pi] = s[sael];
		s[sael] = witx;
		pi--;
	}
}
