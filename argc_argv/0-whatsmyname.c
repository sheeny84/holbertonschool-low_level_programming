#include "main.h"
#include <stdio.h>

/**
 * main - print the name of the program
 */

int main (int argc, char* argv[])
{
	(void)argc; /* cast argc to void to suppress unused param warning */
	printf("%s\n", argv[0]);
	return (0);
}
