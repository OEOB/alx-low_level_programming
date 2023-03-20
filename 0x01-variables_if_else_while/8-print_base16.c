#include  <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{

int num;
char letter;

for (num = 0; num <= 9; num++)
{
putchar('0' + num);
}
for (letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
}

putchar('\n');

return (0);
}
