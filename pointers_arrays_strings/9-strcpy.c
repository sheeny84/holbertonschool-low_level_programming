#include "main.h"
#include "2-strlen.c"

/**
 * _strcpy - copy a string
 * @dest: pointer to destination of where to copy the string
 * @src: pointer to the source of the string to copy
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, len = 0;

	len = _strlen(src);
	while (i <= len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
