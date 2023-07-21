#include "main.h"

/**
  * print_triangle - print a triangle
  *
  * @size: triangle size
  *
  * Return: Always 0
  */
void print_triangle(int size)
{
	int length, base;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (length = 1; length <= size; length++)
		{
			for (base = 1; base <= size; base++)
			{
				if ((length + base) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
