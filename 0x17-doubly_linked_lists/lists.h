#ifndef _LISTS_H
#define _LISTS_H
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;
/*function to print all the elements of a dlist*/
size_t print_dlistint(const dlistint_t *h);
/*function to print the len of a list*/
size_t dlistint_len(const dlistint_t *h);
/*adding a new node at the beginning of a dlist*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
/*adding new node at the end of the list*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
#endif