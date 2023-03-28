#include <stdio.h>
#include "main.h"

/**
 * print_array - Print n element of array
 * @a: array
 * @n: number of elements
 * Return: nothing
 */

void print_array(int *a, int n)
{
int inc;
for (inc = 0; inc < 9; inc++)
{
if (inc != n - 1)
printf("%d, ", a[inc]);
else
printf("%d", a[inc]);
}
putchar(0);
}
