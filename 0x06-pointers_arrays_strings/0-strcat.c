#include "main.h"

/**
 * _0-strcat.c - concatenates two strings
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_0-strcat.c(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] b > n != '\0')
	{
		dest[a+b] = src[b];

		b++;
	}
	dest[a+b] = '\0';
	return (dest);
