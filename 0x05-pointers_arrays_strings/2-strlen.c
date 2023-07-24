#include "main.h"

/**
  * _strlen - function that returns the length of a string.
  *
  * @s: input parameter
  *
  * Return: Resul
  */
int _strlen(char *s)
{
	int string_len;

	for (string_len = 0; *s != '\0'; s++)
		++string_len;

	return (string_len);
}
