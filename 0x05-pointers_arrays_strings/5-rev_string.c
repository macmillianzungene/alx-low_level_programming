#include "main.h"

/**
  * rev_string - function that reverses a string.
  *
  * @s: parameter string
  *
  * Return: Always 0
  */
void rev_string(char *s)
{
	int a, b;
	char _rev_str;

	/*finding string length without the use os null char*/
	for (a = 0; s[a] != '\0'; ++a)
		;
	/*swap the string*/
	for (b = 0; b < a / 2; b++)
	{
		_rev_str = s[b];
		s[b] = s[a - 1 - b]; /*the array starts at 0 so we use -1*/
		s[a - 1 - b] = _rev_str;
	}
}
