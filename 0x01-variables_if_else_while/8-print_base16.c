#include <stdio.h>
/**
 * main - hexadecimal printing project
 * Return:0 shows the success of the project
 */
int main(void)
{
int n;
char c;
for (n = 48; n <= 57; n++)
{
putchar(n);
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
