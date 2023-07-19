#include "main.h"
#include <stdio.h>
/**
  * print_to_98 - function that prints all natural numbers from n to 98.
  *
  * @n: print from number
  */
void print_to_98(int n)
{
	int a, b;

	if (n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			if (a != 98)
				_putchar("%d, ", a);
			else if (a == 98)
				_putchar("%d\n", a);
		}
	}
	else if (n >= 98)
	{
		for (b = n; b >= 98; b--)
		{
			if (b != 98)
				_putchar("%d, ", b);
			else if (b == 98)
				_putchar("%d\n", b);
		}
	}
}
