#include "function_pointers.h"

/**
  * array_iterator - function that executes a function given
  * as a parameter on each element of an array
  *
  * @size: input array
  * @array: input int
  * @action: input pointer
  *
  * Return: results
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *num = array + size - 1;

	if (array && size && action)
		while (array <= num)
			action(*array++);
}
