#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
int lowerCase = 'a';

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
while (lowerCase <= 'z');
{
putchar (lowerCase);
lowerCase += 1;
}
putchar ('\n');
return (0);
}

