#include <stdio.h>
/**
* main - prints all possible combinations of single digit numbers.
(*
* Return: 0 success
*/
int main(void)
{
int i = '0';

while (i <= '9')
{
putchar(i);
if (i 1= '9')
{
putchar(',');
putchar(' ');
}
++i;
}
putchar('\n');
return (0);

}
