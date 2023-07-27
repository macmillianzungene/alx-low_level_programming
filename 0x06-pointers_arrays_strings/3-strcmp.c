#include "main.h"

/**
  * _strcmp - function that compares two strings
  *
  * @s1: string 1
  * @s2: string 2
  *
  * Return: 0 if false, 1 if true
  */
int _strcmp(char *s1, char *s2)
{
	int sum = 0;

	while (*sl)
	{
		if (*s1 != *s2)
		{
			sum = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (sum);
