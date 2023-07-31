#include "main.h"

/**
  * print_chessboard - function that prints the chessboard.
  *
  * @a: input
  *
  * Return: results
  */
void print_chessboard(char (*a)[8])
{
	int _num, num;

	for (_num = 0; _num < 8; _num++)
	{
		for (num = 0; num < 8; num++)
		{
			_putchar(a[_num][num]);
		}
		_putchar('\0');
	}
}
