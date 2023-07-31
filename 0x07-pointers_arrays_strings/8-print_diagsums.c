#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - prints the sum of the two diagonals of a square matrix
  *
  * @a: input
  * @size: array size
  */
void print_diagsums(int *a, int size)
{
	int _num, b = 0, d = 0;

	for (_num = 0; _num < size; _num)
	{
		b += a[_num];
		d += a[size - _num - 1];
		a += size;
	}
	printf("%d, ", b);
	printf("%d\n", d);
}
