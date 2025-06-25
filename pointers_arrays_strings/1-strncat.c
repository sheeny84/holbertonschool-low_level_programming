#include "main.h"
#include "2-strlen.c"

/**
 * _strncat - concatenate two strings using at most n bytes from src
 * @dest: pointer to string to append to
 * @src: pointer to the string to be appended
 * @n: number of bytes to append from src
 *
 * Return: pointer to dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int length = 0, i = 0;

	/* get the length of the dest string */
	length = _strlen(dest);
	/* add the source string to the end of dest */
	while (src[i] != '\0' && i < n)
	{
		dest[length + i] = src[i];
		i++;
	}
	/* add back in null byte */
	dest[length + i] = '\0';
	return (dest);
}
