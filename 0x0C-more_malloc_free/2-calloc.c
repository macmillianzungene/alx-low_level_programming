#include "main.h"
#include <stdlib.h>

/**
  * *_memset - fills memory
  *
  * @s: input pointer
  * @b: input constant
  * @n: input bytes
  *
  * Return: results
  */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;

	return (ptr);
}

/**
  * *_calloc - function that allocates memory for an array, using malloc
  *
  * @nmemb: input array
  * @size: input int
  *
  * Return: results
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	if (size == 0 || nmemb == 0)
		return (NULL);
	mem = malloc(sizeof(int) * nmemb);

	if (mem == 0)
		return (NULL);

	_memset(mem, 0, sizeof(int) * nmemb);

	return (mem);
}
