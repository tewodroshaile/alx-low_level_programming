#include <stdio.h>
/**
 * main - hexadecimal printing project
 * Return:0 shows the success of the project
 */
int main(void)
{
int n;
char c;
for (n = 0; n < 9; n++)
{
putchar(n);
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
return (0);
}
