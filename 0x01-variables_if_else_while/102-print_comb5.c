#include <stdio.h>
/**
  * main - Entry point
  * Description: 'print different combination of two digits'
  * Return: Always 0
  */
int main(void)
{
	int n = 0, m;

	while (n <= 99)
	{
		m = n;
		while (m <= 99)
		{
			if (m != n)
			{
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				putchar(' ');
				putchar((m / 10) + 48);
				putchar((m % 10) + 48);

				if (n != 98 || m != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			m++;
		}
		n++;
	}
	putchar('\n');

	return (0);
}
