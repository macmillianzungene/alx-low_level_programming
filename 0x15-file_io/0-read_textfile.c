#include "main.h"

/**
  * read_textfile - function that reads a text file and prints it
  * to the POSIX standard output.
  *
  * @filename: name of the file
  * @letters: number of letters
  *
  * Return: results
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t num;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);
	num = read(i, &buf[0], letters);
	num = write(STDOUT_FILENO, &buf[0], num);
	close(i);
	return (num);
}
