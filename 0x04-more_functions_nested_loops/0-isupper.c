#include "main.h"

/**
  * _isupper - is c an uppercase
  *
  * @c: input for alphabet
  *
  * Return: 1 if c is an uppercase, otherwise 0
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
