#include "main.h"
/**
 * _print_rev_recursion - a reversr recurssion function
 * @s: a character
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
