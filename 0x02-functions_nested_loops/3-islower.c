#include "main.h"
/**
 * _islower - function to check if alphabet is lowercase
 *
 * @c: integer to be compared
 *
 * Return: always 0 (success)
 */
int _islower(int c)
{
	if (c >= 97 && c < 122)
		return (1);
	return (0);
}
