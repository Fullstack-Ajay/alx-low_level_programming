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

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	putchar('\n');

	return (0);
}
