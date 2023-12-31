#include "main.h"

/**
  * clear_bit - function that sets the value of a bit to 0 at a given index.
  *
  * @n: input number
  * @index: given index
  *
  * Return: results
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;

	return (1);
}
