#include "main.h"

/**
  * factorial - function that returns the factorial of a given number.
  *
  * @n: input number
  *
  * Return: results
  */
int factorial(int n)
{

if (n < 0)
{
	return (-1);
}
else if (n == 0)
{
	return (1);
}

return (n * facrorial(n - 1));

}
