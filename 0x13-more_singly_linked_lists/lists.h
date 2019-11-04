#ifndef _LISTS_H
#define _LISTS_H
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
/*function to print all elements of a list*/
size_t print_listint(const listint_t *h);

#endif
