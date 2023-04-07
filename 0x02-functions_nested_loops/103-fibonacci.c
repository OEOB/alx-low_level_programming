#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: sum of the even-valued terms in the Fibonacci sequence
 * up to a value of 4,000,000.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int oly1 = 1, oly2 = 2, sum = 0, res;

while (oly1 <= 4000000)
{
if (oly1 % 2 == 0)
sum += oly1;

res = oly1;
oly1 = oly2;
oly2 += res;
}

printf("%d\n", sum);

return (0);
}
