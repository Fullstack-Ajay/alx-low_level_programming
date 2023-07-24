#include "main.h"
/**
 * rev_string - reverses a string
 *
 * @s: input
 *
 * Return: n/a
 */
void rev_string(char *s)
{
	int i, length;
	char temp;

	i = 0;
	length = 0;



	while (s[i++])
		length++;


	for (i = length - 1; i > (length / 2); i--)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}

