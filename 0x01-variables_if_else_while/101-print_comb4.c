 #include <stdio.h>
  2 /**
  3   * main - Entry point
  4   * Description: 'print different combination of two digits'
  5   * Return: Always 0
  6   */
  7 int main(void)
{
	int n = 0;
	int m, w;

	while (n <= 9)
	{
		m = 0;
		while (m <= 9)
		{
			w = 0;
			while (w <= 9)
			{
				if (n != m &&
				    n < m &&
				    m != w &&
				    m < w)
				{
					putchar(n + 48);
					putchar(m + 48);
					putchar(w + 48);

					if (n + m + w != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				w++;
			}
			m++;
		}
		n++;
	}
	putchar('\n');

	return (0);
}
