#include <stdio.h>
#include <ctype.h>
/**
 * main - his program functions to print an alphabet on lowercase
 *
 * return:0 (shows the success of the program)
 **/
int main(void)
{
char c = ' ';

for (c = 'a' ; c <= 'z' ; c++)
{
putchar(tolower(c));
}
putchr('\n');
return (0);
}
