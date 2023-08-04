#include <stdio.h>

/**
  * main - program that prints its name
  *
  * @argv: array of pointers
  * @argc: int
  *
  * Return: results
  */
int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
