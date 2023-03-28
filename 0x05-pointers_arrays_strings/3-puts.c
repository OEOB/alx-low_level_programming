#include <stdio.h>
#include "main.h"

/**
 * _puts - Prints a string
 * @str: string to print
 *
 * Description: Prints a string
 * On sucess: returns no error
 */
void _puts(char *str)
{
int i = 0;

while (*(str + i) != '\0')
{
putchar(*(str + i));
i++;
}
putchar(10);
}
