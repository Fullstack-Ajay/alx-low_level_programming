#include "main.h"
/**
 * print_diagonal - prints slash depending on input
 *
 * @n: input
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int x;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 1; x <= n; x++)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
	}
}
