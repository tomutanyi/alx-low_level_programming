#include "main.h"
/**
 * _strcmp - function that compares
 * @s1: the 1st value comp.
 * @s2: ithe second value compared
 *
 * Return: ALWAYS (0)
 */
int _strcmp(char *s1, char *s2)
{
	int q;

	q = 0;

	while (s1[q] != '\0' && s2[q] != '\0')
	{
		if (s1[q] != s2[q])
		{
			return (s1[q] - s2[q]);
		}
		q++;
	}

	return (0);

}
