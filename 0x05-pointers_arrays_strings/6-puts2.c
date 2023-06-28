#include "main.h"
#include <stdio.h>
/**
 * puts2 - Prints every other character of a string
 *
 * @str: input string
 *
 * Return: Void
 */
void puts2(char *str)
{
	char *p;

	int i;

	p = str;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			printf("%c", p[i]);
	}
	printf("\n");
}
