#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: can't read from file %s\n"
#define ERR_NOWRITE "Error: can't write to %s\n"
#define ERR_NOCLOSE "Error: can't close _file %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
  * main - program that copies the content
  *
  * @ac: input count
  * @av: input vector
  *
  * Return: results
  */
int main(int ac, char **av)
{
	int _file1 = 0, _file2 = 0;
	ssize_t num;
	char buf[READ_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	_file1 = open(av[1], O_RDONLY);
	if (_file1 == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	_file2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (_file2 == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	while ((num = read(_file1, buf, READ_BUF_SIZE)) > 0)
		if (write(_file2, buf, num) != num)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	if (num == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);

	_file1 = close(_file1);
	_file2 = close(_file2);
	if (_file1)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, _file1), exit(100);
	if (_file2)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, _file1), exit(100);

	return (EXIT_SUCCESS);
}
