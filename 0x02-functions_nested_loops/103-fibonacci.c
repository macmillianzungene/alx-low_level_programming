#include "main.h"
/**
  * main - Entry point
  *i
  * Description: print the sum of the even numbers.
  *
  * return: Always 0 (Success)
  */
int main(void)
{
	unsigned long int fib1 = 0, fib2 = 1, sum;
	float total_sum;

	while (1)
	{
		sum = fib1 + fib2;

		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			total_sum += sum;

		fib1 = fib2;
		fib2 = sum;
	}
	printf("%lu\n", sum);

	return (0);
}
