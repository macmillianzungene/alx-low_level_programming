#include "main.h"

/**
  * print_array - function that prints n elements of an array of integers
  *
  * @a: string parameter
  * @n: input parameter
  *
  * Return: Always 0
  */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		if (b != (n - 1))
			printf("%d, ", a[b]);
		else
			printf("%d", a[b]);
	}
	printf("\n");
}
