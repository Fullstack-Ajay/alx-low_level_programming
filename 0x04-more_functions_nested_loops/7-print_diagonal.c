#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: the number of times \ is printed
 * Return: nothing
 */

void print_diagonal(int n)
{
	int x, s;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{

			for (s = 0; s < x; s++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
