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
	int b, d;

	for (b = 0; b < n--; b++)
	{
		d = a[b];
		a[b] = a[n];
		a[n] = d;
	}
}
