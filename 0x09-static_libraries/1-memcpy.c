#include "main.h"

/**
  * *_memcpy - function that copies memory area.
  *
  * @dest: input dest
  * @src: source
  * @n: input number
  *
  * Return: results
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int _num;

	for (_num = 0; _num < n; _num++)
	{
		dest[_num] = src[_num];
	}
	return (dest);
}
