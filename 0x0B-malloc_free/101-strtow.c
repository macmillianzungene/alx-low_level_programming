#include "main.h"
#include <stdlib.h>

/**
  * wrdcnt - conuts number of words in a string
  *
  * @s: input string
  *
  * Return: results
  */
int wrdcnt(char *s)
{
	int a, b = 0;

	for (a = 0; s[a]; a++)
	{
		if (s[a] == ' ')
		{
			if (s[a + 1] != ' ' && s[a + 1] != '\0')
				b++;
		}
		else if (a == 0)
			b++;
	}
	b++;
	return (b);
}

/**
  * **strtow - function that splits a string into words.
  *
  * @str: input string
  *
  * Return: results
  */
char **strtow(char *str)
{
	int a, d, f, p, b = 0, word_c = 0;
	char **wc;

	if (str == NULL || *str == '\0')
		return (NULL);
	b = wrdcnt(str);
	if (b == 1)
		return (NULL);
	wc = (char **)malloc(b * sizeof(char *));
	if (wc == NULL)
		return (NULL);
	wc[b - 1] = NULL;
	a = 0;
	while (str[a])
	{
		if (str[a] != ' ' && (a == 0 || str[a - 1] == ' '))
		{
			for (d = 1; str[a + d] != ' ' && str[a + d]; d++)
				;
			d++;
			wc[word_c] = (char *)malloc(d * sizeof(char));
			d--;
			if (wc[word_c] == NULL)
			{
				for (f = 0; f < word_c; f++)
					free(wc[f]);
				free(wc[b - 1]);
				free(wc);
				return (NULL);
			}
			for (p = 0; p < d; p++)
				wc[word_c][p] = str[a + p];
			wc[word_c][p] = '\0';
			word_c++;
			a += d;
		}
		else
			a++;
	}
	return (wc);
}
