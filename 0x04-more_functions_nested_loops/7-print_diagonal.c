#include "main.h"

/**
  * print_diagonal - function that draws a diagonal line on the terminal.
  *
  * @n: n is the number of times the character \ should be printed
  */
void print_diagonal(int n)
{
	int diagonal, line;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (diagonal = 1; diagonal <= n; diagonal++)
		{
			for (line = 1; line <= diagonal; line++)
				_putchar(' ');
			_putchar(92); /* is equal to '/' char*/
			_putchar('\n');
		}
	}
}
