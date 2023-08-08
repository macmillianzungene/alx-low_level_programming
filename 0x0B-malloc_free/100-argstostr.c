#include "main.h"
#include <stdlib.h>

/**
  * _strlen - length of a string
  *
  * @s: input string
  *
  * Return: results
  */
int _strlen(char *s)
{
	int len = 0;

	for (; s[len] != '\0'; len++)
	;
	return (len);
}

/**
  * *argstostr - function that concatenates all the arguments of your program.
  *
  * @ac: input int
  * @av: input arguments
  *
  * Return: results
  */
char *argstostr(int ac, char **av)
{
	int a = 0, b = 0, p = 0, d = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; a < ac; a++, b++)
		b += _strlen(av[a]);

	s = malloc(sizeof(char) * b + 1);
	if (s == 0)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (p = 0; av[a][p] != '\0'; p++, d++)
			s[d] = av[a][p];

		s[d] = '\n';
		d++;
	}
	s[d] = '\0';
	return (s);
}
