#include "main.h"
/**
 * print_rev - print the string on reverse order
 *@s: a variable that holds a string
 *
 */
void print_rev(char *s)
{
int i;
int count = 0;

while (*s != '0')
{
count++;
s++;
}
s--;
for (i = count; i > 0; i--)
{
putchar(*s);
s--;
}
putchar('\n');
}
