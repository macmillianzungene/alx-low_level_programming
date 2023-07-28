#include "main.h"

/**
  * *infinite_add - function that adds two numbers.
  *
  * @n1: first number
  * @n2: second number
  * @r: results
  * @size_r: length
  *
  * Return: results
  */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a = 0, b = 0, d, e = 0, f, g, h = 0;

	while (n1[a] != '\0')
		a++;
	while (n2[b] != '\0')
		b++;
	if (a > b)
		e = a;
	else
		e = b;
	if (e + 1 > size_r)
		return (0);
	r[e] = '\0';
	for (d = e - 1 ; d >= 0 ; d--)
	{
		a--;
		b--;
		if (a >= 0)
			f = n1[a] - '0';
		else
			f = 0;
		if (b >= 0)
			g = n2[b] - '0';
		else
			g = 0;
		r[d] = (f + g + h) % 10 + '0';
		h = (f + g + h) / 10;
	}
	if (h == 1)
	{
		r[e + 1] = '\0';
		if (1 + 2 > size_r)
			return (0);
		while (e-- >= 0)
			r[e + 1] = r[e];
		r[0] = h + '0';
	}
	return (r);
}
