#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - checking for a string
  *
  * @argc: number of arguments
  * @argv: aarray pointers
  *
  * Return: Always 0
  */
int main(int argc, char **argv)
{
	char *_upcd = (char *)main;
	int a;

	if (argc != 2)
		printf("Error\n"), exit(1);
	a = atoi(argv[1]);
	if (a < 0)
		printf("Error\n"), exit(2);

	while (a--)
		printf("%02hhx%s", *_upcd, a ? " " : "\n");
	return (0);
}
