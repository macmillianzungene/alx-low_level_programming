#include "main.h"

/**
  * *_strpbrk - function that searches a string for any of a set of bytes.
  *
  * @s: input string
  * @accept: bytes
  *
  * Return: results
  */
char *_strpbrk(char *s, char *accept)
{
	int _num, num;
	char *p;

	_num = 0;
	while (s[_num] != '\0')
	{
		num = 0;
		while (accept[num] != '\0')
		{
			if (accept[num] == s[_num])
			{
				p = &s[_num];
				return (p);
			}
			num++;
		}
		_num++;
	}

	return (0);
}

