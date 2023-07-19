#include "main.h"
#include <stdio.h>
/**
  * main - Entry point
  *
  * Description: print the sum of the even-valued fibonacci numbers.
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	unsigned long a = 0, b = 1, sum;
	float _sum;

	while (1)
	{
		sum = a + b;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			_sum += sum;

		a = b;
		b = sum;
	}
	printf("%.0f\n", _sum);

	return (0);
}
