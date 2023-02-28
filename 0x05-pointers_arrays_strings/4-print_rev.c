#include "main.h"
/**
 * print_rev - print the string on reverse order
 *@s: a variable that holds a string
 *
 */
void print_rev(char *s)
{
int i;
int reverse = s[0];
int count = 0;

while (s[count] != '0')
{
count++;
}
for (i = 0; i < count; i--)
{
count--;
reverse = s[i];
s[i] = s[count];
s[count] = reverse;
}

}
