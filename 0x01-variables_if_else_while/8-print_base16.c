#include<stdio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{

int number;
char alfa;

for (number = 0; number <= 9; ++number)
{
putchar('0'+number);
}
for (alfa = 'a'; alfa <= 'f'; ++alfa)
{
putchar(alfa);
}
putchar('\n');

return (0);
}
