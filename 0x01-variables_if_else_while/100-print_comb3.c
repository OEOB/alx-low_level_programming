#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
int a = '0';
int b = '0';

while (b < 10)
{
a = '0';
while (a < 10)
{
if (b != a && b < a)
{
putchar('0' + b);
putchar('0' + a);

if (a + b != 17)
{
putchar(',');
putchar(' ');
}
}
a++;
}
a = '0';
b++;
}
b = '0';
{
}
putchar('\n');
return (0);
}
