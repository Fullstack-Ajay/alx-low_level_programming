#include <stdio.h>
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
	int x = 0;
	int y;

	while (x <= 9)
	{
		y = 0;

		while (y <= 9)
		{
			if (x != y && x < y)
			{
				putchar(x + 48);
				putchar(y + 48);

				if (x + y != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		x++;

	}
	putchar('\n');
	return (0);
}

