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
	int b, d, p;

	for (b = 0; d = (n - 1); b < d; b++, d--)
	{
		p = a[b];
		a[b] = a[d];
		a[d] = p;
	}
}
