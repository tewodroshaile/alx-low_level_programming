#include "main.h"
#include <string.h>
/**
 * string_toupper - a fubction that changet a string to upercase one
 * @s: a sring content
 * Return: it returns the uppercase of a string
 */
char *string_toupper(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] = s[i] - 32;
}
return (s);
}
