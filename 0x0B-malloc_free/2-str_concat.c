#include "main.h"

/**
 * str_concat - function that conc 2 str .
 * @s1: string 1 .
 * @s2: string 2 .
 * Return: always pointer or 0 .
 */

char *str_concat(char *s1, char *s2)
{
	char *con;

	int cody, cat = 0,  rex = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (cody = 0; s1[cody] || s2[cody]; cody++)
	{
		rex++;
	}

	con = malloc(sizeof(char) * rex);

	if (con == NULL)
	{
		return (NULL);
	}

	for (cody = 0; s1[cody]; cody++)
	{
		con[cat++] = s1[cody];
	}

	for (cody = 0; s2[cody]; cody++)
	{
		con[cat++] = s2[cody];
	}

	return (con);
}
