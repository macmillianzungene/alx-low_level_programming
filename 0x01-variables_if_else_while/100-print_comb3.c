#include <stdio.h>
2/**
3 * main - Entry point
4 * Description: 'print different combination of two digits'
 * Return: Always 0
 */
7int main(void)
{
	int n = 0, m;

	while (n <= 9)
	{
		m = 0;
		while (m <= 9)
		{
			if (n != m && n < m)
			{
				putchar(n + 48);
				putchar(m + 48);

				if (n + m != 17)
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
