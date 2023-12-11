#include "main.h"

/**
  * _atoi - function that convert a string to an integer.
  *
  * @s: input parameter
  *
  * Return: results
  */
int _atoi(char *s)
{
	unsigned int digit = 0;
	int value = 1;

	do {
		if (*s == '-')
			value *= -1;
		else if (*s >= '0' && *s <= '9')
			digit = (digit * 10) + (*s - '0');
		else if (digit > 0)
			break;
	} while (*s++);

	return (digit * value);
}
