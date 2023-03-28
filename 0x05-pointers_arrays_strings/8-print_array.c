#include <stdio.h>
#include "main.h"

/**
 * print_array - Print n element of array followed by a new line
 * @a: array
 * @n: number of elements
 *
 */

void print_array(int *a, int n)
{
int index_of_array;

for (index_of_array = 0; index_of_array < 9; index_of_array++)
{
printf("%d, ", a[index_of_array]);
if (index_of_array != (n - 1))
{
printf(",");
}
}
putchar('\n');
}
