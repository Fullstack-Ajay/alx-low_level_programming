#include "main.h"

/**
 * times_table - Prints the 9 time table starting from 0
 */
void times_table(void)
{
	int num;
	int mult;
	int prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (mult = 0; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48);
			_putchar((prod % 10) + 48);
		}

		_putchar('\n');
	}
}

