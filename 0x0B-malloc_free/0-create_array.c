#include "main.h"

/**
  * *create_array - an array of chars, and initializes it with a specific char.
  *
  * @c: input char
  * @size: input array
  *
  * Return: results
  */
char *create_array(unsigned int size, char c)
{
	char *a = malloc(size);

	if (size == 0 || a == 0)
		return (0);

	while (size--)
		a[size] = c;

	return (a);
}
