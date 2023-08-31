#include "main.h"

/**
  * flip_bits - function that returns the number of bits you
  * would need to flip to get from one number to another.
  *
  * @n: input number
  * @m: input bit
  *
  * Return: results
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m;
	unsigned int bit = 0;

	while (num)
	{
		if (num & 1ul)
			bit++;
		num = num >> 1;
	}
	return (bit);
}
