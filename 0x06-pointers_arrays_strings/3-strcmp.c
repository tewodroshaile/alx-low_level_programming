#include "main.h"
#include <string.h>
/**
 * _strcmp - a string comparison function
 * @s1: the first passed string
 * @s2: the second string
 * Description: this function compares two strings using strcmp()
 * Return: the comparison output
 */
int _strcmp(char *s1, char *s2)
{
int i;

i = strcmp(s1, s2);
return (i);
}
