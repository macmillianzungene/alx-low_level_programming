#include "main.h"

/**
  * *_strcat - function that concatenates two strings.
  *
  * @src: source input
  * @dest: goal input
  *
  * Return: results
  */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	/*size of the dest array*/
	while (dest[a])
		a++;

	/*without the null byte, iterate throgh every value of src*/
	for (b = 0; src[b]; b++)
		/*to overwrite the null byte append src[b] to dest[a]*/
		dest[a++] = src[b];

	return (dest);
}
