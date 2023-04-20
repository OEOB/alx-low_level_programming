#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: String to be printed between numbers.
 * @n: Number of integers passed to the function.
 * @...: Number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list num;
unsigned int oly;

va_start(num, n);

for (oly = 0; oly < n; oly++)
{
printf("%d", va_arg(num, int));

if (oly != (n - 1) && separator != NULL)
printf("%s", separator);
}

printf("\n");

va_end(num);
}
