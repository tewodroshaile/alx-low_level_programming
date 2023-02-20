#include <stdio.h>
/**
 * main - prints double digit nombers the double double with coma delimitation
 * Return: 0 the succsuss of the code
 */
int main(void)
{
int l, m, n;
for (n = 48; n < 58; n++)
{
for (m = 49; m < 58; m++)
{
for (l = 50; l < 58; l++)
{
if (l > m && m > n)
{
putchar(n);
putchar(m);
putchar(l);
if (n != 55 || m != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
