#include <stdio.h>
#include "main.h"
/**
 * print_rev - Prints a string in reverse
 * @s: Input array
 * Return: Void
 */
void print_rev(char *s)
{
	char *p;

	int len, i, j;

	len = 0;

	p = s;

	for (i = 0; p[i] != '\0'; i++)
	{
		len++;
	}

	for (j = len - 1; j >= 0; j--)
	{
		printf("%c", p[j]);
	}

	printf("\n");
}
