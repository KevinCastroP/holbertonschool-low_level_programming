#ifndef _LISTS_H
#define _LISTS_H
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/*print all elements in a list*/
size_t print_list(const list_t *h);
/*function to print*/
int _putchar(char c);
#endif
