#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - create a file
 * @filename: name of the file to create
 * @text_content: string to write to the file
 *
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd; /* file descriptor */
	ssize_t bytes = 0; /* number of bytes read/written */

	if (filename == NULL)
		return (-1);

	/* create file using open */
	/* flags set to create file if needed and open in write only mode */
	/* set permissions to rw------- if it does not exist */
	fd = open(filename, O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	/* get length of string */
	while (text_content[bytes] != '\0')
	{
		bytes++;
	}
	
	/* write to file */
	bytes = write(fd, text_content, bytes);
	if (bytes == -1)
		return (-1);

	/* close the file */
	if (close(fd) == -1)
		return (-1);

	return (1);
}
