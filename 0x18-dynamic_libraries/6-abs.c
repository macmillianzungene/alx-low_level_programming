#include "main.h"
/**
  * _abs - To compute the absolute value of an integer.
  *
  * @i: input is an integer.
  *
  * Return: absolute value
  */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
