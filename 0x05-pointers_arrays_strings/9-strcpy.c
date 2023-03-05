#include "main.h"
/**
 * _strcpy - coppy content from src to dest
 * @dest: destination array
 * @src: source array
 * Return: the coppy
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
return (dest);
}
