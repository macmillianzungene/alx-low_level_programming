#include <stdio.h>

/**
  * main - program that prints all arguments it receives
  *
  * @argv: array of pointers
  * @argc: int
  *
  * Return: results
  */
int main(int argc, char const *agrv[])
{
	int a = 0;

	while (argc--)
	{
		printf("%s\n", argv[a]);
		a++;
	}

	return (0);
}
