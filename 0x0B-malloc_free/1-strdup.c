#include "main.h"

/**
* _strdup - function that returns a pointer to a newly
* allocated space in memory, which contains a copy
* of the string given as a parameter.
* @str: the str in question
*
* Return: always 0
*/

char *_strdup(char *str)
{
	char *same;
	int hoek, refu;

	if (str == NULL)
	{
		return (NULL);
	}

	for (hoek = 0; str[hoek]; hoek++)
	{
		refu++;
	}

	same = malloc(sizeof(char) * (refu + 1));

	if (same == NULL)
	{
		return (NULL);
	}

	for (hoek = 0; str[hoek]; hoek++)
	{
		same[hoek] = str[hoek];
	}

	same[refu] = '\0';

	return (same);

}
