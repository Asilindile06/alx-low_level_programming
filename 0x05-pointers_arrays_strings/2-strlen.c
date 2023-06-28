#include "main.h"
/**
 * _strlen - determines the length of a string
 *
 * @s: the pointer input
 *
 * Return: int (length of a string)
 */
int _strlen(char *s)
{
	char *p;

	int len, i;

	p = s;

	len = 0;

	for (i = 0; p[i] != '\0'; i++)
	{
		len++;
	}

	return (len);
}
