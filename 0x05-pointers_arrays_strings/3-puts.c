#include "main.h"
/**
 * _puts - is a function prints each character of the a sstring
 *@str: a parameter that holds a string
 *
 * Description: a function prints a contrnt of string variable using poiter
 */
void _puts(char *str)
{

for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
