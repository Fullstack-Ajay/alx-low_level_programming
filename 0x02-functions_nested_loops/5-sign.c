#include "main.h"
/**
 * print_sign - shows sign of number 
 *
 * @n: digit to be tested 
 *
 * Return: 1,0,-1 if number is positive, 0, negative respectively
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return(1);
	}
	else if (n==0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

