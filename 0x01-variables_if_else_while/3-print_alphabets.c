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
char t;

for (c = 'a' ; c <= 'z' ; c++)
{
putchar(tolower(c));
}
for (t = 'a' ; t <= 'z' ; t++)
{
putchar(toupper(t));
}
putchar('\n');
return (0);
}
