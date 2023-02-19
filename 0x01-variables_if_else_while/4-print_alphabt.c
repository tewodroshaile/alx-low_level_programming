#include <stdio.h>
#include <ctype.h>
/**
 * main - his program functions to print an alphabet on lowercase
 *
 * Return:0 shows the success of the program
 **/
int main(void)
{
char c;

for (c = 'a' ; c <= 'z' ; c++)
{
if (c != 'e' || c != 'q')
{
putchar(tolower(c));
}
}
putchar('\n');
return (0);
}
