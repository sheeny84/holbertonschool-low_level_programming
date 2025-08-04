#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

/**
 * main - print the name of the program
 * @argc: count of arguments
 * @argv: pointer to array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *file_from, *file_to, *buffer[1024];
	int fd_array[2];
	int fd_from, fd_to;
	ssize_t bytes_read = 1024, bytes_write;

	/* error handling if number of arguments is incorrect */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* get input args */
	file_from = argv[1];
	file_to = argv[2];

	open_files(file_from, file_to, fd_array);
	fd_from = fd_array[0];
	fd_to = fd_array[1];

	while (bytes_read == 1024)
	{
		bytes_read = read(fd_from, buffer, 1024);
		if (bytes_read == -1)
			print_error(98, file_from);
		bytes_write = write(fd_to, buffer, bytes_read);
		if (bytes_write < bytes_read)
			print_error(99, file_to);
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

/**
 * open_files - open file_from and file_to and check for errors
 * @file_from: name of file from to open
 * @file_to: name of file to to open
 * @fd_array: array to store file descriptors
 *
 * Return: array with file from and file to file descriptors
 */
int *open_files(char *file_from, char *file_to, int *fd_array)
{
	mode_t old_umask = umask(0);
	/* open and read from file from */
	fd_array[0] = open(file_from, O_RDONLY);
	/* cannot open file */
	if (fd_array[0] == -1)
		print_error(98, file_from);
	/* open file to and write into new file */
	fd_array[1] = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	/* reset unmask */
	umask(old_umask);
	/* cannot open file */
	if (fd_array[1] == -1)
		print_error(99, file_to);
	return (fd_array);
}

/**
 * print_error - print error statement depending on error code
 * @exit_code: exit code to use
 * @file_name: file name which has caused the error
 *
 * Return: nothing
 */
void print_error(int exit_code, char *file_name)
{
	if (exit_code == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
		 exit(98);
	}
	if (exit_code == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_name);
		exit(99);
	}
}
