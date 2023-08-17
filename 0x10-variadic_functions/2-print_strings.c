#include "variadic_functions.h"

/**
  * print_strings - function that prints strings, followed by a new line.
  *
  * @separator: input string
  * @n: input argument
  * @...: input integer
  *
  * Return: results
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int a = n;
	char *str;
	va_list b;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(b, n);
	while (a--)
		printf("%s%s", (str = va_arg(b, char *)) ? str : "(nil)",
				a ? (separator ? separator : "") : "\n");
	va_end(b);
}
