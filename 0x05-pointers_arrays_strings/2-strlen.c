#include "main.h"
/**
 * _strlen - a function to check the length a variable
 * @s: the requested variable to be checked its length
 * Return: returns the out put of this function
 */
int _strlen(char *s)
{
int counter = 0;
for (; *s != '\0'; s--)
{
counter = counter + 1;
}
return (counter);
}
