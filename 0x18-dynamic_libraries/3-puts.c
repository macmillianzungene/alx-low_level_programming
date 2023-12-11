#include "main.h"

/**
  * _puts - function that print a string, followed by a new line, to stdout
  *
  * @str: parameter string
  *
  * Return: Always 0
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
