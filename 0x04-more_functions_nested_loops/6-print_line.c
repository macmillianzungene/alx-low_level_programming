#include "main.h"

/**
  * print_line - function that draws a straight line in the terminal.
  *
  * @n: n is the number of times the character _ should be printed
  */
void print_line(int n)
{
	int _char;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (_char = 1; _char <= n; _char++)
			_putchar('_');
		_putchar('\n');
	}
}
