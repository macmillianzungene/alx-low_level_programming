#include "main.h"

/**
  * last_index - returns the last index
  *
  * @s: input string
  *
  * Return: results
  */
int is_palindrome(char *s);
int check(char *s, int start, int end, int mod);
int last_index(char *s)
{
int n = 0;

if (*s > '\0')
	n += last_index(s + 1) + 1;

return (n);
}

/**
  * is_palindrome - checking for palindrome
  *
  * @s: input string
  *
  * Return: results
  */
int is_palindrome(char *s)
{
int end = last_index(s);

return (check(s, 0, end - 1, end % 2));
}

/**
  * check - checking for palindrome
  *
  * @s: input string
  * @start: input int
  * @end: input int
  * @mod: int
  *
  * Return: results
  */
int check(char *s, int start, int end, int mod)
{

if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
	return (1);
else if (s[start] != s[end])
	return (0);
else
	return (check(s, start + 1, end - 1, mod));
}
