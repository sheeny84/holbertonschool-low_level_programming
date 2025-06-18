#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	int letter;
	letter = 'a';
  	while (letter < 'z') {
		putchar(letter);
		letter++;
        }
	putchar('\n');            			
	return (0);
}
