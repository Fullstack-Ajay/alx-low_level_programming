#include "main.h"
/**
 * print_to_98 - prints n to 98
 * @n: input
 */
void print_to_98(int n)
{
	int x;

	if (x > 98)
		for (x = n; x > 98; x--)
			printf("%d", x);
	else
		for (x = n; x < 98; x++)
			printf("%d", x);
	printf("98\n");
}

