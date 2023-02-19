#include <stdio.h>
#include <ctype.h>
/**
* main - Programming is like building intersting for me to do it
*
* Return: 0
**/
int main(void)
{
char c = ' ';

for (c = 'a' ; c <= 'z' ; c++)
{
putchar(tolower(c));
putchar(toupper(c));
}
putchar('\n');
return (0);
}
