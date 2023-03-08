#include "main.h"
/**
 * _strlen_recursion - recsion function that returns the the length of a char
 * @s: a char content
 * Return: returns the length of a char
 */
int _strlen_recursion(char *s)
{
	int len = 0;

if (*s)
{
	len++;
len += _strlen_recursion(s + 1);
}

return (len);

}
