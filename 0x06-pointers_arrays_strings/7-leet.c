#include "main.h"

/**
 *  leet - function that encrypts a str..
 *   @s: the string in question.
 *   Return: ALWAYS (0)
 */
char *leet(char *s)
{
	int bar = 0, i;
	int right[] = {65, 69, 79, 84, 76};
	int auth[] = {97, 101, 111, 116, 108};
	int num[] = {52, 51, 48, 55, 49};

	while (*(s + bar) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + bar) == auth[i] || *(s + bar) == right[i])
			{
				*(s + bar) = num[i];
				break;
			}
		}
		bar++;
	}
	return (s);
}
