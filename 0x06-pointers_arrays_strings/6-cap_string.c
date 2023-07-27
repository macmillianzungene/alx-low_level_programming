#include "main.h"
#include <stdio.h>

/**
  * isLower - tells is ascii is is lowercase
  *
  * @c: char
  *
  * Return: 0 if false, 1 if true
  */
int isLower(char c)
{
	return (c >= 97 && <= 122);
}

/**
  * isDelimiter - tells if ascii is a delimiter
  *
  * @c: char
  *
  * Return: 0 if false, 1 if true
  */
int isDelimiter(char c)
{
	int a;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (a = 0; a < 12; a++)
		if (c == delimiter[a])
			return (1);
	return (0);
}

/**
  * *cap_string - function that capitalizes all words of a string.
  *
  * @s: input string
  *
  * Return: capitalized string
  */
char *cap_string(char *s)
{
	char *ptr = s;
	int words = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			words = 1;
		else if (isLower(*s) && words)
		{
			*s -= 32;
			words = 0;
		}
		else
			words = 0;
		s++;
	}
	return (ptr);
}
