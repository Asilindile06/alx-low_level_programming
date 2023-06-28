#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string with new line
 * @str: string input
 *
 * Return: void
 */

void _puts(char *str)
{
	char *p;

	int i;

	p = str;

	for (i = 0; p[i] != '\0'; i++)
		putchar(p[i]);

	putchar('\n');
}
