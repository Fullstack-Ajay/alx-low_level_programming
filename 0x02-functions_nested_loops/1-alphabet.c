#include "main.h"
/**
 * print_alphabet - prints a to z using putchar
 */
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
}
