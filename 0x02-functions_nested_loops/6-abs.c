#include "main.h"


/*
 * _abs - fuction that computes absolute value of number
 *
 * @n: number to be tested
 *
 * Return: returns value of int
 *
 */


int _abs(int n)
{
	if (n < 0)
		n = n * (-1);
	return (n);
}

