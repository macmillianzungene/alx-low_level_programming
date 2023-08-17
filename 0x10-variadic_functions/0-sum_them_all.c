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
	int s = 0, a = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (a--)
		s += va_arg(ap, int);
	va_end(ap);
	return (s);
}
