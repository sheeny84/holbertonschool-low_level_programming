#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - read a text file and print it to standard output
 * @filename: name of the text file
 * @letters: number of letters to read and print
 *
 * Return: the actual number of letters read and printed,
 * 0 if the file could not be opened or read,
 * 0 if the filename is NULL,
 * 0 if write fails or does not write the expected number of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buf[1024]; /* buffer to read file into */
	int fd; /* file descriptor */
	ssize_t bytes; /* number of bytes read/written */

	if (filename == NULL)
		return (0);

	/* open the file in read only mode */
	fd = open(filename, O_RDONLY, 0666);
	if (fd == -1)
		return (0);

	/* read into the buffer */
	bytes = read(fd, buf, letters);
	if (bytes == -1) /* i.e. failure */
		return (0);

	/* write to std output */
	bytes = write(STDOUT_FILENO, buf, bytes);
	if (bytes == -1)
		return (0);

	/* close the file */
	if (close(fd) == -1)
		return (0);

	return (bytes);
}
