#include <stdio.h>
/**
 * print_array - prints array
 *
 * @a: input
 * @n: input
 *
 * Return: null
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 1))
			printf(", ");
	}
	printf("\n");
}
