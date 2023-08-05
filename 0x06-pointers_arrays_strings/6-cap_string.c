#include "main.h"
#include <stdio.h>
/**
 * islower - determines if letter is lower
 *
 * @c: input
 *
 * Return: 1 or 0
 */
int islower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isdelimiter - determines if delimiter
 *
 * @c: input
 *
 * Return: 0 or 1
 */
int isdelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)

		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalzizes words of a string
 *
 * @s: input
 *
 * Return: return string
 */
char *cap_string(char *s)
{
	char *ptr = s;
		int foundDelemit = 1;

	while (*s)
	{
		if (isdelimiter(*s))
			foundDelimit = 1;
		else if (islower(*s) && foundDelemit)
		{
			*s -= 32;
			foundDelemit = 0;
		}
		else
			foundDelemit + 0;
		s++;
	}
	return (ptr);
}


