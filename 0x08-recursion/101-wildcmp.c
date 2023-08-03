#include "main.h"

/**
  * move_past_star - iterates asterisk
  *
  * @s2: input second string
  *
  * Return: results
  */
char *move_past_star(char *s2)
{
	if (*s2 == '*')
		return (move_past_star(s2 + 1));
	else
		return (s2);
}

/**
  * inception - brings things to reality
  *
  * @s1: input first string
  * @s2: input second string, with or without wildcard
  *
  * Return: results
  */
int inception(char *s1, char *s2)
{
	int a = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		a += wildcmp(s1 + 1, s2 + 1);
	a += inception(s1 + 1, s2);
	return (a);
}

/**
  * wildcmp - to compare two strings
  *
  * @s1: input first string
  * @s2: input second string
  *
  * Return: results
  */
int wildcmp(char *s1, char *s2)
{
	int a = 0;

	if (!*s1 && *s2 == '*' && !*move_past_star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = move_past_star(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			a += wildcmp(s1 + 1, s2 + 1);
		a += inception(s1, s2);
		return (!!a);
	}
	return (0);
}


