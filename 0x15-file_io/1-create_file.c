#include "main.h"

/**
  * _strlen - length of a string
  *
  * @s: input string
  *
  * Return: results
  */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
  * create_file - function that creates a file.
  *
  * @filename: name of the file
  * @text_content: content in the file
  *
  * Return: results
  */
int create_file(const char *filename, char *text_content)
{
	int a;
	ssize_t num = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	a = open(filename, 0_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (a == -1)
		return (-1);
	if (len)
		num = write(a, text_content, len);
	close(a);
	return (num == len ? 1 : -1);
}
