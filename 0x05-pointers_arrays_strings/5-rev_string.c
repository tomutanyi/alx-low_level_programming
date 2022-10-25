#include <stdio.h>
/**
 * rev_string - A function that reversses a string and returns it.
 * @s: declaration of *s and paramters for the function
 * Return: ALWAYS (0).
 */
void rev_string(char *s)
{
	int p, sal;
	char wit;

	for (p = '\0'; s[p] != 0; p++)

	sal = 0;
	for (p = p - 1; sal < p; sal++)
	{
		wit = s[p];
		s[p] = s[sal];
		s[sal] = wit;
		p--;
	}
}
