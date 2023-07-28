#include "main.h"
#include <stdio.h>

/**
  * isPrintableASCII - tells if n is a printable ASCII char
  *
  * @n: input integer
  *
  * Return: 0 if false, 1 if true
  */
int isPrintableASCII(int n)
{
	return (n >= 32 && n <= 126);
}

/**
  * printHexes - prints hex values for string
  *
  * @b: string
  * @start: starting point
  * @end: finish point
  */
void printHexes(char *b, int start, int end)
{
	int a = 0;

	while (a < 10)
	{
		if (a < end)
			printf("%02x", *(b + start + a));
		else
			printf("  ");
		if (a % 2)
			printf(" ");
		a++;
	}
}

/**
  * printASCII - print ascii values
  *
  * @b: string
  * @start: starting poit
  * @end: finidh point
  */
void printASCII(char *b, int start, int end)
{
	int a, d = 0;

	while (d < end)
	{
		a = *(b + d + start);
		if (!isPrintableASCII(a))
			a = 46;
		printf("%c", a);
		d++;
	}
}

/**
  * print_buffer - prints a buffer
  *
  * @b: string
  * @size: buffer size
  */
void print_buffer(char *b, int size)
{
	int begin, finish;

	if (size > 0)
	{
		for (begin = 0; begin < size; begin +=10)
		{
			finish = (size - begin < 10) ? size - begin : 10;
			printf("%08x: ", begin);
			printHexes(b, begin, finish);
			printASCII(b, begin, finish);
			printf("\n");
		}
	} else
		printf("\n");
}
