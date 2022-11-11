#include "main.h"

/**
* string_nconcat - a function that
* concatenates two strings.
* @s1: str 1
* @s2: str 2
* @n: max bytes to concatenate .
*
*Return: If the function fails (NULL)
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *join;
	unsigned int refu = n, kat;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (kat = 0; s1[kat]; kat++)
	{
		refu++;
	}

	join = malloc(sizeof(char) * (len + 1));

	if (join == NULL)
	{
		return (NULL);
	}

	refu = 0;

	for (kat = 0; s1[kat]; kat++)
	{
		join[refu++] = s1[lat];
	}

	for (kat = 0; s2[kat] && kat < n; kat++)
	{
		join[refu++] = s2[kat];
	}

	join[refu] = '\0';

	return (join);
}

