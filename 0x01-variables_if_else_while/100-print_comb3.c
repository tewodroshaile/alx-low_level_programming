#include <stdio.h>
/**
 * main - list down all unique 2 digit numbers
 * Return: 0 the succsuss report
 */
int main(void)
{
int n, x;
for (n = 48; n <= 56; n++)
{
for (x = 49; x <= 57; x++)
{
if (x > n)
{
putchar(n);
putchar(x);
if (n != 56 || x != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
