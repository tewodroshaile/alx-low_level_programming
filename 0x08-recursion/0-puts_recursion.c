#include "main.h"
/**
 * _puts_recursion - a recursion function
 * @s: a char parametr that will be recurssion
 *
 */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
