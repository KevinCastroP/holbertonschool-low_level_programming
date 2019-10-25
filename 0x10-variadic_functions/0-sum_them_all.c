#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function sum all parameters
 * @n: recieved an integer
 *
 * Return: a value
 */

int sum_them_all(const unsigned int n, ...)
{
va_list kclist;
int c = 0;
unsigned int b;
va_start(kclist, n);

for (b = 0; b < n; b++)
{
c += va_arg(kclist, int);
}
va_end(kclist);

if (n == 0)
return (0);
return (c);
}
