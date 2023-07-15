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
	int x = 48;

	while (x <= 102)

	{
		putchar(x);

		if (x == 57)
			x += 37;
		x++;

	}

	putchar('\n');

	return (0);
}
