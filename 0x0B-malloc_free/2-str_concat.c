#include "main.h"
#include <stdlib.h>

/**
  * _strlen - length of a strings
  *
  * @s: input string
  *
  * Return: results
  */
int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
  * *str_concat -  a function that concatenates two strings.
  *
  * @s1: first string
  * @s2: second string
  *
  * Return: results
  */
char *str_concat(char *s1, char *s2)
{
	int first, second, a;
	char *b;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	first = _strlen(s1);
	second = _strlen(s2);
	b = malloc((first + second) * sizeof(char) + 1);
	if (b == 0)
		return (0);

	for (a = 0; a <= first + second; a++)
	{
		if (a < first)
			b[a] = s1[a];
		else
			b[a] = s2[a - first];
	}
	b[a] = '\0';
	return (b);
}
