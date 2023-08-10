#include "main.h"
#include <stdlib.h>

/**
  * *malloc_checked - function that allocates memory using malloc.
  *
  * @b: input int
  *
  * Return: results
  */
void *malloc_checked(unsigned int b)
{
	int *mem = malloc(b);

	if (mem == 0)
		exit(98);

	return (mem);
}
