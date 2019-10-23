#ifndef _FUNCTION_POINTERS_H
#define _FUNCTION_POINTERS_H
/*function to print a name*/
void print_name(char *name, void (*f)(char *));
/*function to execute as a parameter on each element of array*/
void array_iterator(int *array, size_t size, void (*action)(int));
/*search an integer*/
int int_index(int *array, int size, int (*cmp)(int));
#endif
