#include "variadic_functions.h"

/**
  * sum_them_all - function that returns the sum of all its parameters.
  *
  * @n: input argument
  * @...: input integer
  *
  * Return: results
  */
int sum_them_all(const unsigned int n, ...)
{
	int k = 0, a = n;
	va_list b;

	if (!n)
		return (0);
	start(b, n);
	while (a--)
		k += arg(b, int);
	end(b);
	return (k);
}
