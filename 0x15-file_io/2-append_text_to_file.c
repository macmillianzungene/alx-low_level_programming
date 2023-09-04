#include "main.h"

/**
  * _strlen - length of the string
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
  * append_text_to_file - function that appends text
  *
  * @filename: name of the name
  * @text_content: content in the file
  *
  * Return: results
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int i;
	ssize_t num = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	i = open(filename, O_WRONLY | O_APPEND);
	if (i == -1)
		return (-1);
	if (len)
		num = write(i, text_content, len);
	close(i);
	return (num == len ? 1 : -1);
}
