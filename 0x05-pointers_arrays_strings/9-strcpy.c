#include <stdio.h>
#include "main.h"
/**
 * _strcpy - Copies a char array from src to dest
 *
 * @dest: is the the destination
 * @src: is the source of the array
 *
 * Return: Char
 */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}

	*p = '\0';

	return (dest);
}
