#include "main.h"

/**
  * reverse_array - function that reverses the content of an array of integers
  *
  * @n: number of elements
  * @a: array of integers
  *
  * Return: Always 0
  */
void reverse_array(int *a, int n)
{
	int b, c, d;

	for (b = 0; c = (n - 1); b < c; b++, c--)
	{
		d = a[b];
		a[b] = a[c];
		a[c] = d;
	}
}
