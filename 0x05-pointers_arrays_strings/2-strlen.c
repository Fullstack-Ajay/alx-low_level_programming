#include "main.h"
/**
 * _strlen - returns length of string
 *
 * @s: string
 *
 * Return: nothing
 */
int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}


