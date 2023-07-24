#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - generates random valid passwords for 101-crackme.
  *
  * Return: 0
  */
int main(void)
{
	int psd;
	char c;

	srand(time(NULL));
	while (psd <= 2645)
	{
		c = rand() % 128;
		psd += c;
		putchar(c);
	}
	putchar(2772 - psd);
	return (0);
}
