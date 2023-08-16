#include "function_pointers.h"

/**
  * print_name - function that prints a name
  *
  * @name: input string
  * @f: input pointer
  *
  * Return: results
  */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
