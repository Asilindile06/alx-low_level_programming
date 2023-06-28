#include "main.h"
#include <stdio.h>
/**
 * puts_half - Prints the second half of a string
 *
 * @str: input string
 *
 * Return: Void
 */
void puts_half(char *str)
{
	char *p;

	int len, i, n, j;

	p = str;

	len = 0;

	/* determine the lenght of the string*/
	for (i = 0; p[i] != '\0'; i++)
		len++;

	/* check whether the lenght is odd or even */
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;

	/* print half of the string */
	for (j = n; j <= len - 1; j++)
	{
		if (p[j] != '\0')
			printf("%c", p[j]);
	}

	printf("\n");
}
