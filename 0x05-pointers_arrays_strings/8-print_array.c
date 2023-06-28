#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints the n elements of an array of integers
 *
 * @a: Array of integers
 * @n: Number of elements
 *
 * Return: Void
 */
void print_array(int *a, int n)
{
	int *p, i;

	p = a;

	for (i = 0; i <= n - 1; i++)
	{
		printf("%d", p[i]);

		if (i != n - 1)
			printf(", ");
	}

	printf("\n");
}
