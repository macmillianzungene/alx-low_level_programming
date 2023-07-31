#include "main.h"

/**
  * _strspn - function that gets the length of a prefix substring.
  *
  * @s: input string
  * @accept: bytes
  *
  * Return: results
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int _num, num;

	for (_num = 0; s[_num] != '\0'; _num++)
	{
		for (num = 0; accept[num] != s[_num]; num++)
		{
			if (accept[num] == '\0')
				return (_num);
		}
	}
	return (_num);
}
