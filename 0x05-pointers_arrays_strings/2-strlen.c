#include "main.h"
/**
 * _strlen - a function to check the length a variable
 * @s: the requested variable to be checked its length
 * Return: returns the out put of this function
 */
int _strlen(char *s)
{
int counter = 0;
int i = 0;
char c = s[0];

while (c != '\0')
{
counter = counter + 1;
i++;
c = s[i];
}
return (counter);
}
