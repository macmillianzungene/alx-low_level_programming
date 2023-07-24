#include "main.h"

/**
  * swap_int - function that swaps the values of two integers.
  *
  * @a: input paramer 1
  * @b: input paramer 2
  *
  * Return: Always 0
  */
void swap_int(int *a, int *b)
{
	int _input;

	_input = *a;
	*a = *b;
	*b = _input;
}
