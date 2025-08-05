#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * main - print the name of the program
 * @argc: count of arguments
 * @argv: pointer to array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char buffer[1024];
	int fd_from, fd_to;
	ssize_t bytes;

	/* error handling if number of arguments is incorrect */
	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	/* open and read from file from */
	fd_from = open(argv[1], O_RDONLY);
	while (bytes == 1024)
	{
		bytes = read(fd_from, buffer, 1024);
		/* cannot open file or cannot read file */
		if ((fd_from == -1) | (bytes == -1))
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		/* open file to and write into new file */
		fd_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
		bytes = write(fd_to, buffer, bytes);
		/* cannot open file or cannot write to file */
		if ((fd_to == -1) | (bytes == -1))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
	}
	/* close files */
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
	if (close(fd_to) == -1 || close(fd_from) == -1)
		exit(100);
	return (0);
}
