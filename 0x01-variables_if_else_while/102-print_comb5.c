#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
int a = 0;
int q = 0;
for (a = 0; a <= 98; a++)
{
for (q = a + 1; q <= 99; q++)
{
putchar((a / 10) + '0');
putchar((a % 10) + '0');
putchar(' ');
putchar((q / 10) + '0');
putchar((q % 10) + '0');
if (a == 98 && q == 99);
continue;
putchar(',');
putchar(' ');
}
q++;
}
q = 0;
a++;
}
a = 0;
}
putchar('\n');
return (0);
}
