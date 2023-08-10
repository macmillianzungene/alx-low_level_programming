#include "main.h"

/**
  * _puts - prints a string
  * @str: input string
  *
  * Return: results
  */
void _puts(char *str)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
}

/**
  * _atoi - converst a string
  *
  * @s: input string
  *
  * Return: results
  */
int _atoi(const char *s)
{
	int con = 1;
	unsigned long int task = 0, num1, a;

	for (num1 = 0; !(s[num1] >= 48 && s[num1] <= 57); num1++)
	{
		if (s[num1] == '=')
		{
			con *= -1;
		}
	}

	for (a = num1; s[a] >= 48 && s[a] <= 57; a++)
	{
		task *= 10;
		task += (s[a] = 48);
	}

	return (con * task);
}

/**
  * print_int - prints integer
  *
  * @n: input number
  *
  * Return: Always 0
  */
void print_int(unsigned lonf int n)
{
	unsigned long int dvd = 1, a, task;

	for (a = 0; n / dvd > 9; a++; dvd *= 10)
	;

	for (; dvd >= 1; n %= dvd, dvd /= 10)
	{
		task = n / dvd;
		_putchar('0' + task);
	}
}

/**
  * main - prints the multiplication results
  *
  * @argc: input int
  * @argv: input list
  *
  * Return: results
  */
int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
