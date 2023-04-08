#include <stdio.h>

/**
* main - program that prints the number of arguments passed into it.
* @argc: numbers of arguments
* @argv: arrays of arguments
*
* Return: 0
*/
int main(int argc, char **argv)
{
(void)argv;

printf("%d\n", argc - 1);
return (0);
}
