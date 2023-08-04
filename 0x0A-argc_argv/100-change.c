#include <stdio.h>
#include <stdlib.h>

/**
  * main - program that prints the minimum number of coins
  *
  * @argv: array of pointers
  * @argc: int
  *
  * Return: results
  */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
	int a, _change = 0, money = atoi(argv[1]);
	int cents[] = {25, 10, 5, 2, 1};

	for (a = 0; a < 5; a++)
	{
		if (money >= cents[a])
		{
			_change += money / cents[a];
			money = money % cents[a];
			if (momey % cents[a] == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", _change);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
