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
	int i;
	ssize_t num = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	i = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (i == -1)
		return (-1);
	if (len)
		num = write(i, text_content, len);
	close(i);
	return (num == len ? 1 : -1);
}
