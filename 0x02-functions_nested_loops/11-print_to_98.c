#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The number to start printing from
 */
void print_to_98(int n)
{
if (n <= 98)
{
while (n <= 98)
{
if (n == 98)
printf("%d\n", n);
else
printf("%d, ", n);
n = n + 1;
}
}
else if (n > 98)
{
while (n >= 98)
{
if (n == 98)
printf("%d\n", n);
else
printf("%d, ", n);
n = n - 1;
}
}
}
