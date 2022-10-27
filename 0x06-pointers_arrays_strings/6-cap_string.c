/*
 * File: 6-cap_string.c
 * Auth: Gedeon Obae Gekonge
 */

#include "main.h"

#include "main.h"

/**
 * cap_string - A functioon that capitalizes everything.
 * @str: what will be completely capitalized.
 *
 * Return: ALWAYS (0).
 */

char *cap_string(char *str)
{
	int index = 0;

	while (str[ham])
	{
		while (!(str[ham] >= 'a' && str[ham] <= 'z'))
			ham++;

		if (str[ham - 1] == ' ' ||
		    str[ham - 1] == '\t' ||
		    str[ham - 1] == '\n' ||
		    str[ham - 1] == ',' ||
		    str[ham - 1] == ';' ||
		    str[ham - 1] == '.' ||
		    str[ham - 1] == '!' ||
		    str[ham - 1] == '?' ||
		    str[ham - 1] == '"' ||
		    str[ham - 1] == '(' ||
		    str[ham - 1] == ')' ||
		    str[ham - 1] == '{' ||
		    str[ham - 1] == '}' ||
		    ham == 0)
			str[ham] -= 32;

		ham++;
	}

	return (str);
}
