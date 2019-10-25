#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H
/*return the sum of all parameters*/
int sum_them_all(const unsigned int n, ...);
/*print numbers*/
void print_numbers(const char *separator, const unsigned int n, ...);
/*print strings*/
void print_strings(const char *separator, const unsigned int n, ...);
/*print anything*/
void print_all(const char * const format, ...);
#endif
