#include "main.h"
#include <stdlib.h>

/**
  * *_realloc - function that reallocates a memory block using malloc and free
  *
  * @ptr: input pointer
  * @old_size: input int
  * @new_size: input int
  *
  * Return: results
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pointer;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		pointer = malloc(new_size);
		if (pointer == NULL)
			return (NULL);
		return (pointer);
	}
	if (new_size > old_size)
	{
		pointer = malloc(new_size);
		if (pointer == NULL)
			return (NULL);
		for (a = 0; a < old_size && a < new_size; a++)
			*((char *)pointer + a) = *((char *)ptr + a);
		free(ptr);
	}
	return (pointer);
}
