#include "main.h"
/**
 * print_line - function that draws a straight line in the term
 * @n: inpute number
 * Return: straight line
 */
void print_line(int n)
{
int a;

if (n <= 0)
{
_putchar('\n');
}

else
{
for (a = 1; a <= n; a++)
{
_putchar('_');
}
_putchar('\n');
}
}
