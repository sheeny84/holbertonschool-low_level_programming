#include "main.h"
#include <stdio.h>

/**
 * main - print all the arguments recieved
 * @argc: count of arguments
 * @argv: pointer to array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
