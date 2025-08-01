#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - append text at the end of a file
 * @filename: name of the file to append text to
 * @text_content: string to append to the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd; /* file descriptor */
	ssize_t bytes = 0; /* number of bytes read/written */

	if (filename == NULL)
		return (-1);

	/* create file using open */
	/* flags set to append text to file */
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		bytes = 0;
	else /* get length of string */
	{
		while (text_content[bytes] != '\0')
		{
			bytes++;
		}
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
