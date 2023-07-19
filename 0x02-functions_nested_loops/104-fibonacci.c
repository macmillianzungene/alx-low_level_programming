#include "main.h"
#include <stdio.h>
/**
  * numLength - returns the length of string
  *
  * @num: operand number
  *
  * Return: number of digits
  */
int numLength(int num)
{
	int length = 0;

	if (!num)
		return (1);

	while (num)
	{
		num = num / 10;
		length += 1;

	}

	return (length);
}

/**
  * main - Entry point
  *
  * Description: printing the first 98 fibonacci number
  *
  * Return: number of digits
  */
int main(void)
{
	int count, initial0s;
	unsigned long a = 1, b = 2, sum, mx = 10000000, aao = 0, bbo = 0, sumo = 0;

	for (count = 1; count <= 98; count++)
	{
		if (aao > 0)
			printf("%lu", aao);
		initial0s = numLength(mx) - 1 - numLength(a);

		while (aao > 0 && initial0s > 0)
		{
			printf("%d", 0);
			initial0s--;
		}

		printf("%lu", a);

		sum = (a + b) % mx;
		sumo = aao + bbo + (a + b) / mx;
		a = b;
		aao = bbo;
		b = sum;
		bbo = sumo;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
