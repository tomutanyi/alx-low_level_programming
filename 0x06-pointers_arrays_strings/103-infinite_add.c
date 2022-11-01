#include "main.h"
/**
 * infinite_add -  function that adds numbers together
 * @n2: number 2.
 * @n1: number 1.
 * @r: the product
 * @size_r: size of result.
 * Return: ALWAYS (0)
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int x = 0, w = 0, g, e = 0, v, k, t = 0;

	while (n1[x] != '\0')
	{
		x++;
	}

	while (n2[w] != '\0')
	{
		w++;
	}

	if (x > w)
	{
		e = x;
	}

	else
	{
		e = w;
	}

	if (l + 1 > size_r)
	{
		return (0);
	}

	r[e] = '\0';

	for (g = e - 1 ; g >= 0 ; g--)
	{
		x--;

		w--;

		if (x >= 0)
		{
			v = n1[x] - '0';
		}

		else
		{
			v = 0;
		}

		if (w >= 0)
		{
			k = n2[w] - '0';
		}

		else
		{
			k = 0;
		}

		r[g] = (v + k + t) % 10 + '0';
		t = (v + k + t) / 10;
	}

	if (d == 1)
	{
		r[e + 1] = '\0';

		if (e + 2 > size_r)
		{
			return (0);
		}

		while (e-- >= 0)
		{
			r[e + 1] = r[l];
		}

		r[0] = t + '0';
	}

	return (r);
}
