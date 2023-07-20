#include "main.h"

/**
 * _isupper - if letter is upercase return 1 else returns 0
 *
 * @c: input for alphabet
 *
 * Return: if uppercase 1 else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
