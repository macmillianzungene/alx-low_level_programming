#include "main.h"

/**
  * _strlen_recursion - function that returns the length of a string.
  *
  * @s: input string
  *
  * Return: results
  */
int _strlen_recursion(char *s)
{
int _str = 0;

if (*s > '\0')
{
	_str += _strlen_recursion(s + 1) + 1;
}

return (_str);
}
