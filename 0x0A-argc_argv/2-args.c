#include <stdio.h>
/**
 * main - the main function
 * @argc: a parametr that holds the No of arguments
 * @argv: holds the array of arguments
 * Return: the success of the function
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
return (0);
}
