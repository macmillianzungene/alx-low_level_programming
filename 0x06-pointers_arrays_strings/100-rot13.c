#include "main.h"

/**
  * *rot13 - function that encodes a string using rot13
  *
  * @s: input
  *
  * Return: results
  */
char *rot13(char *s)
{
	int a;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = s;

	while (*s)
	{
		for (a = 0; a <= 52; a++)
		{
			if (*s == rot13[a])
			{
				*s = ROT13[a];
				break;
			}

		}
		s++;
	}
	return (ptr);
}
