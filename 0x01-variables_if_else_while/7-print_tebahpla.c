#include <stdio.h>
#include <ctype.h>
/**
 * main - it prints the lowercase alpabets from z-a
 * Return: 0 it shows the success of the program
 */
int main(void)
{
char c;

for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
