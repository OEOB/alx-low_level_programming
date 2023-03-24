#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: inpute number
 * Return: Diagonal
 */
void print_diagonal(int n)
{

int a, b;

if (n <= 0)
{
_putchar('\n');
}

else
{

for (a = 1; a <= n; a++)
{

for (b = 1; b <= a; b++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}

