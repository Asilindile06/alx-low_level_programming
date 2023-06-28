#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string with new line in reverse
 * @s: string input
 *
 * Return: void
 */

void print_rev(char *s)
{
	char *p;

	int i, len, j;

	p = s;

	len = 0;

	for (i = 0; p[i] != '\0'; i++)
		len++;

	for (j = len; j >= 0 ; j--)
		putchar(p[j - 1]);

	putchar('\n');
}
