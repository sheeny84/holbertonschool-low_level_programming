#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <errno.h>
#include <string.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main()
{
    	int ret;
	ret = create_file("_file_0", "Best School !");
	printf("%d\n", ret);
	ret = create_file("_file_0", "Best School");
        printf("%d\n", ret);
	return (0);
}
