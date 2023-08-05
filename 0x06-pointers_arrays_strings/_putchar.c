#include<usistd.h>
#include "main.h"

/**
 * _putchar - writes character C to stdout
 *
 * @c : character to print
 *
 * Return: Always (1)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
