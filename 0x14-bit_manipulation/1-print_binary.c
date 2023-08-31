#include "main.h"

/**
  * print_binary - function that prints the binary representation of a number
  *
  * @n: input number
  *
  * Return: results
  */
void print_binary(unsigned long int n)
{
	int bin = sizeof(n) * 8, printed = 0;

	while (bin)
	{
		if (n & 1L << --bin)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
