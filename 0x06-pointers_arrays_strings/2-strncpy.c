#include "main.h"
#include <string.h>
/**
 * _strncpy - string copy function
 * @dest: destination parameter
 * @src: source parameter
 * @n: intiger variable
 *
 * Description: strcpy project
 * Return: dest returns the compid value
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n; i++)
{
dest [i] = src[i];
}
return (dest);
}
