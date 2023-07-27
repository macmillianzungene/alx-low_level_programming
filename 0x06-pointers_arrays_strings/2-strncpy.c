#include "main.h"

/**
  * *_strncpy - function that copies a string.
  *
  * @dest: goal input
  * @src: source input
  * @n: number of bytes
  *
  * Return: results
  */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	/**
	  *iterate through src array if no null bytes in dest
	  *it will not null terminate
	  */
	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];
	/*write the total of n bytes*/
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
