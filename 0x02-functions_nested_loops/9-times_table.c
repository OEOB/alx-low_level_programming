#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
int num, mult, prod;

for (num = 0; num < 10; num++)
{

for (mult = 0; mult < 10; mult++)
{

prod = num * mult;
if (mult == 0)
{

_putchar(prod + '0');
}
if (prod < 10 && mult != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(prod + '0');
}
else if (prod >= 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((prod / 10) + '0');
_putchar((prod % 10) + '0');
}
}
_putchar('\n');
}
}
