#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_numbers - function to print numbers
 * @n: recieved an integer
 * @separator: number of parameters
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list kclist;
	unsigned int c;

	va_start(kclist, n);

	for (c = 0; c < n; c++)
	{
		printf("%d", va_arg(kclist, int));
		if (c < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(kclist);
	printf("\n");

}
