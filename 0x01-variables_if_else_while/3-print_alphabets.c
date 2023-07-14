#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: goes here
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x = 'a';
	char X = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}


	while (X <= 'Z')
	{
		putchar(X);
		X++;
	}

	putchar('\n');

	return (0);
}
