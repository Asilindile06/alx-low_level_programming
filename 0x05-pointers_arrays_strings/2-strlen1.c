#include "main.h"
/**
 * _strlen - compute the len of a string
 * @s: string parameter
 *
 * Return: the len of the string
 */

int _strlen(char *s)
{
	char *p;

	int i, len;

	p = s;

	len = 0;

	for (i = 0; p[i] != '\0'; i++)
		len++;

	return (len);
}
