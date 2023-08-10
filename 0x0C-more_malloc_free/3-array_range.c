#include "main.h"
#include <stdlib.h>

/**
  * *array_range - function that creates an array of integers
  *
  * @min: input minimum
  * @max: input maximum
  *
  * Return: results
  */
int *array_range(int min, int max)
{
	int _len, a;
	int *ptr;

	if (min > max)
		return (NULL);
	_len = max - min + 1;
	ptr = malloc(sizeof(int) * _len);
	if (!ptr)
		return (NULL);
	for (a = 0; a < _len; a++)
		ptr[a] = min++;
	return (ptr);
}

