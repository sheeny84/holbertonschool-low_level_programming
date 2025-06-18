#include <stdio.h>
#include "main.h"

int main(void)
{
	int n;
	int strLength;
	char str[] = "_putchar";
	
	strLength = 8;
	while(n <= strLength) 
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
	return (0);
}
