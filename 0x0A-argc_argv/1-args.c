#include <stdio.h>

/**
  * main - program that prints the number of arguments passed into it
  *
  * @argv: array of pointers
  * @argc: int
  *
  * Return: results
  */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
