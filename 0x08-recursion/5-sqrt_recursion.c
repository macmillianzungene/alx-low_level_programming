#include "main.h"

/**
  * _sqrt_recursion - function that returns the natural square root of a number
  *
  * @n: input number
  * @val: square root
  *
  * Return: results
  */
int square(int n, int val);
int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
  * square - to finf the square root of a num
  *
  * @n: input number
  * @val: square root
  *
  * Return: results
  */
int square(int n, int val)
{

if (val * val == n)
	return (val);
else if (val * val < n)
	return (square(n, val + 1));
else
	return (-1);

}

