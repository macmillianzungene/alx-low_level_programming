#include <stdio.h>

/**
  * main - prints the name of the file it was compiled
  * 
  * Return: Alwayss 0.
  */
int main(void)
{
	printif("%s\n", __FILE__);
	return (0);
}
