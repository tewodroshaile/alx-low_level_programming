#include "main.h"
/**
 *_strlen_recursion - a string length recurssion function
 *@s: a string variable
 * Return: returns the lenth of a string
 */
int _strlen_recursion(char *s)
{
int count = 0;

if (*s)
{
count++;
count += _strlen_recursion(s + 1);
}
return (count);
}
