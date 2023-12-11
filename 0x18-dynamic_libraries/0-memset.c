#include "main.h"

/**
  * *_memset - function that fills memory with a constant byte.
  *
  * @n: input number
  * @b: constant value
  * @s: input pointer
  *
  * Return: results
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int _num;

	for (_num = 0; n > 0; _num++, n--)
	{
		s[_num] = b;
	}

	return (s);
}
