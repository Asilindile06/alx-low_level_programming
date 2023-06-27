#include "main.h"
#include <stdio.h>

/**
 * main - Entry Point 
 *
 * Return: (0)
 */
int main(void)
{
    int n = 403;

    int *p;

    p = &n;

    reset_to_98(p);
    printf("%d\n", n);

    return (0);
}
