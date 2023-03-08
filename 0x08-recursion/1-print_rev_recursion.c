#include "main.h"
/**
 * _print_rev_recursion - a rucursion function that writs a string on reverse
 * @s: a char variable which holds a string of characters
 */

void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}

}
