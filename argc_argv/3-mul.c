#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiply two numbers
 * @argc: count of arguments
 * @argv: pointer to array of arguments
 *
 * Return: result of the multiplication
 * 1 if two arguments are not recieved
 */

int main(int argc, char *argv[])
{
	int x, y, res;

	if (argc < 3) /* account for first arg being program name */
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		res = x * y;
		printf("%d\n", res);
		return (res);
	}
}
