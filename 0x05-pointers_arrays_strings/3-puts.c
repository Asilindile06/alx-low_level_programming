#include "main.h"
/**
 * _puts - Prints a string to stdout
 * 
 * @s: String array input
 *
 * Return: Void
 */
void _puts(char *s)
{
        char *p;

        int i;
        
        p = s;

        for (i = 0; p[i] != '\0'; i++)
        {
                printf("%c", p[i]);
        }

        printf("\n");
}
