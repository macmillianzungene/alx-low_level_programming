#include "variadic_functions.h"

/**
  * print_numbers - function that prints numbers, followed by a new line.
  *
  * @separator: input string
  * @n: input argument
  * @...: input integer
  *
  * Return: results
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int a = n;
	va_list b;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(b, n);
	while (a--)
		printf("%d%s", va_arg(b, int),
				a ? (separator ? separator : "") : "\n");
	va_end(b);
}
