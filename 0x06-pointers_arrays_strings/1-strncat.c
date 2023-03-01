#include "main.h"
/**
 * _strncat - concatinates 2 chars
 * @dest: first character
 * @src: source variable
 * @n: an intiger variable
 * Description: a function
 * Return: returns the concatinate value
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
{
i++;
}
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
