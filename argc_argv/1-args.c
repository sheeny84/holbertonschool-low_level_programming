#include "main.h"
#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: count of arguments
 * @argv: pointer to array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv; /* cast argv to void to suppress unused param warning */
	printf("%d\n", argc - 1);
	return (0);
}
