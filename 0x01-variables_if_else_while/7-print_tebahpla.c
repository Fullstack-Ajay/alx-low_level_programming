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
	char x = 'z';

	while (x <= 'a')
	{
		putchar(x);
		x--;
	}

	putchar('\n');

	return (0);
}
