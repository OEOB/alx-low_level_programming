#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _is_zero - determines if any number is zero
 * @argv: argument vector.
 *
 * Return: no return.
 */
void _is_zero(char *argv[])
{
int a, isn1 = 1, isn2 = 1;

for (a = 0; argv[1][a]; a++)
if (argv[1][a] != '0')
{
isn1 = 0;
break;
}

for (a = 0; argv[2][a]; a++)
if (argv[2][a] != '0')
{
isn2 = 0;
break;
}

if (isn1 == 1 || isn2 == 1)
{
printf("0\n");
exit(0);
}
}

/**
 * _initialize_array - set memery to zero in a new array
 * @ar: char array.
 * @lar: length of the char array.
 *
 * Return: pointer of a char array.
 */
char *_initialize_array(char *ar, int lar)
{
int a = 0;

for (a = 0; a < lar; a++)
ar[a] = '0';
ar[lar] = '\0';
return (ar);
}

/**
 * _checknum - determines length of the number
 * and checks if number is in base 10.
 * @argv: arguments vector.
 * @n: row of the array.
 *
 * Return: length of the number.
 */
int _checknum(char *argv[], int n)
{
int bc;

for (bc = 0; argv[n][bc]; bc++)
if (!isdigit(argv[n][bc]))
{
printf("Error\n");
exit(98);
}

return (bc);
}

/**
 * main - Entry point.
 * program that multiplies two positive numbers.
 * @argc: number of arguments.
 * @argv: arguments vector.
 *
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
int bc1, bc2, bcout, add, addl, a, j, k, ca;
char *cout;

if (argc != 3)
printf("Error\n"), exit(98);
bc1 = _checknum(argv, 1), bc2 = _checknum(argv, 2);
_is_zero(argv), bcout = bc1 + bc2, cout = malloc(bcout + 1);
if (cout == NULL)
printf("Error\n"), exit(98);
cout = _initialize_array(cout, bcout);
k = bcout - 1, a = bc1 - 1, j = bc2 - 1, ca = addl = 0;
for (; k >= 0; k--, a--)
{
if (a < 0)
{
if (addl > 0)
{
add = (cout[k] - '0') + addl;
if (add > 9)
cout[k - 1] = (add / 10) + '0';
cout[k] = (add % 10) + '0';
}
a = bc1 - 1, j--, addl = 0, ca++, k = bcout - (1 + ca);
}
if (j < 0)
{
if (cout[0] != '0')
break;
bcout--;
free(cout), cout = malloc(bcout + 1), cout = _initialize_array(cout, bcout);
k = bcout - 1, a = bc1 - 1, j = bc2 - 1, ca = addl = 0;
}
if (j >= 0)
{
add = ((argv[1][a] - '0') * (argv[2][j] - '0')) + (cout[k] - '0') + addl;
addl = add / 10, cout[k] = (add % 10) + '0';
}
}
printf("%s\n", cout);
return (0);
}
