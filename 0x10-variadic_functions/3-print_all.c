#include "variadic_functions.h"

/**
  * format_char - formats character
  *
  * @separator: input string
  * @b: input argument
  */
void format_char(char *separator, va_list b)
{
	printf("%s%c", separator, va_arg(b, int));
}

/**
  * format_int - formats integer
  *
  * @separator: input string
  * @b: input argument
  */
void format_int(char *separator, va_list b)
{
	printf("%s%d", separator, va_arg(b, int));
}

/**
  * format_float - formats float
  *
  * @separator: input string
  * @b: input argument
  */
void format_float(char *separator, va_list b)
{
	printf("%s%f", separator, va_arg(b, double));
}

/**
  * format_string - formats string
  *
  * @separator: input string
  * @b: input argument
  */
void format_string(char *separator, va_list b)
{
	char *str = va_arg(b, char *);

	switch ((int)(!str))
	case 1:
		str = "(nil)";

	printf("%s%s", separator, str);
}

/**
  * print_all - function that prints anything.
  *
  * @format: input string
  */
void print_all(const char * const format, ...)
{
	int a = 0, p;
	char *separator = "";
	va_list b;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(b, format);
	while (format && format[a])
	{
		p = 0;
		while (tokens[p].token)
		{
			if (format[a] == tokens[p].token[0])
			{
				tokens[p].f(separator, b);
				separator = ", ";
			}
			p++;
		}
		a++;
	}
	printf("\n");
	va_end(b);
}
