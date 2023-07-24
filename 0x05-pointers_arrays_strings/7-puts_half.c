#include "main.h"

/**
  * puts_half - function that print half of a string.
  *
  * @str: input
  *
  * Description: If the number of chars is odd,
  * (length_of_the_string - 1) / 2
  *
  */
void puts_half(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		;

	a++;
	for (a /= 2; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
