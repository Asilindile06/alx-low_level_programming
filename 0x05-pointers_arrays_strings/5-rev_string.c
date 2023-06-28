#include <stdio.h>
#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: Input array
 * Return: Void
 */
void rev_string(char *s)
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

	*p = '\0';

}

