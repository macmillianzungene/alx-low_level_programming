#include <stdio.h>
/**
  * main - Entry point
  * Description: 'print different combination of two digits'
  * Return: Always 0
  */
int main(void)
{
	int n;
	int m;

	for (n = 0; n < 10; n++)
	{
		for (m = n + 1; m < 10; m++)
		{

		putchar((n % 10) + '0');
		putchar((m % 10) + '0');

		if (n == 8 && m == 9)
			continue;
		putchar(',');
		putchar(' ');
		}
	putchar('\n');
	}

	return (0);
}
