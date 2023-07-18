#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * @x: digit to be checked
 *
 * Return: returns last digit of number
 */
int print_last_digit(int x)
{
	int y;

	if (y < 0)
		y = (-1) * (x % 10);
	else
		y = (x % 10);

	_putchar(y + '0');
	return (y);
}




