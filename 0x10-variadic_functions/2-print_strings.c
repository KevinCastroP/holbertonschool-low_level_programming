#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_strings - function to print strings
 * @n: number of strings
 * @separator: space between the strings
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list kclist;
	unsigned int c;
	char *b;

	va_start(kclist, n);

	for (c = 0; c < n; c++)
	{
		b = va_arg(kclist, char *);
		if (b == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", b);
		}
		if (separator != NULL && c < (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(kclist);
	printf("\n");

}
