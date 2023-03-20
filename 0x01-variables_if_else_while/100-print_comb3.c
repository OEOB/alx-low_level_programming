#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
        int a = 0;
        int b = 0;
        int c = 0;

        while (a <= 9)
        {
        c++;
        b = c;
        while (b <= 9)
        {
        putchar('0' + a);
        putchar('0' + b);
        if (a == 8 && b == 9)
        {

        }
        else
        {
        putchar(',');
        putchar(' ');
        }
        b++;                            }
        b = 0;
        a++;
        }
        putchar('\n');
return (0);
}

