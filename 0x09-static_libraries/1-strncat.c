#include "main.h"

/**
  * *_strncat - function that concatenates two strings
  *
  * @src: source input
  * @dest: goal input
  * @n: number of bytes most used
  *
  * Return: results
  */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;

	/*size of dest array*/
	while (dest[a])
		a++;

	/*no need to null terminate src if it contains n*/
	for (b = 0; b < n && src[b] != '\0'; b++)
		dest[a + b] = src[b];
	/*dest is null terminated*/
	dest[a + b] = '\0';

	return (dest);
}
