#include "main.h"

/**
  * print_square - function that prints a square,
  * followed by a new line
  *   
  * @size: the size of the square
  *
  * Return: Always 0 (success)
  */
void print_square(int size)
{
	int a, b;

	for (a = 0; a <= size; a++)
	{
		for (b = 0; b <= size; b++)
			_putchar('#');
		_putchar('\n');
	}
}
