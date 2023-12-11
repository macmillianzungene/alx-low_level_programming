#include "main.h"

/**
  * *_strchr - function that locates a character in a string.
  *
  * @s: input string
  * @c: input character
  *
  * Return: results
  */
char *_strchr(char *s, char c)
{
	int _num;

	for (_num = 0; s[_num] >= '\0'  ; _num++)
	{
		if (s[_num] == c)
		{
			return (s + _num);
		}
	}

	return ('\0');
}
