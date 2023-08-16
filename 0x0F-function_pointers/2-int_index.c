#include "function_pointers.h"

/**
  * int_index - function that searches for an integer
  *
  * @array: input int
  * @size: input array
  * @cmp: input pointer
  *
  * Return: results
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (array && size && cmp)
		while (a < size)
		{
			if (cmp(array[a]))
				return (a);
			a++;
		}
	return (-1);
}
