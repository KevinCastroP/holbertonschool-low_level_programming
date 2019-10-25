#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_all - function to print anything
 * @format: list of types of arguments
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list kclist;
	int c, pass = 0;
	double p;
	char *m, *b = (char *)format;

	va_start(kclist, format);
	while (*b != '\0')
	{
		switch (*(b))
		{
		case 'c':
			c = va_arg(kclist, int);
			printf("%c", c);
			break;
		case 'i':
			c = va_arg(kclist, int);
			printf("%d", c);
			break;
		case 'f':
			p = va_arg(kclist, double);
			printf("%f", p);
			break;
		case 's':
			m = va_arg(kclist, char *);
			if (m == NULL)
				printf("(nil)");
			else
				printf("%s", m);
			break;
		default:
			pass = 1;
			break;
		}
		if (pass == 0 && *(b + 1) != 0)
			printf(", ");
		b++;
		pass = 0;
	}
	va_end(kclist);
	printf("\n");
}
