#include <stdio.h>
/**
 * main - list of numbers from 0-9 with coma delimation
 * Return: 0 the success message
 */
int main(void)
{
int n;
for (n = 48; n < 58; n++)
{
putchar(n);
if (n != 57)
{
putchar(',');
}
putchar(' ');
}
putchar('\n');
return (0);
}
