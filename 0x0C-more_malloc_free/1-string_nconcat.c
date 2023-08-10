#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * *string_nconcat - unction that concatenates two strings
  *
  * @s1: first string
  * @s2: second string
  * @n: input number
  *
  * Return: results
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int a, b, first, second;

	/*strings passed must be null*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*add the sring length*/

	for (first = 0; s1[first] != '\0'; first++)
		;

	for (second = 0; s2[second] != '\0'; second++)
		;
	str = malloc(first + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}

	for (a = 0; s1[a] != '\0'; a++)
		str[a] = s1[a];
	for (b = 0; b < n; b++)
	{
		str[a] = s2[b];
		a++;
	}

	str[a] = '\0';
	return (str);
}
