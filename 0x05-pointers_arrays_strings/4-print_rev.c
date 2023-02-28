#include "main.h"
/**
 * print_rev - print the string on reverse order
 *@s: a variable that holds a string
 *
 */
void print_rev(char *s)
{
int i = 0;
while (s[i] != '0')
{
i++;
}
for (i -= 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
