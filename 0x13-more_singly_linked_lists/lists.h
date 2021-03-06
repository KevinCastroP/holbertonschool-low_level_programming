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
/*function to return the number of elements in a list*/
size_t listint_len(const listint_t *h);
/*function to add new node at the beginning of  list*/
listint_t *add_nodeint(listint_t **head, const int n);
/*adding new node at the end of the list*/
listint_t *add_nodeint_end(listint_t **head, const int n);
/*function to free a list*/
void free_listint(listint_t *head);
/*free list*/
void free_listint2(listint_t **head);
/*function to delete the head node of a list*/
int pop_listint(listint_t **head);
/*function to return the nth node of a list*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
/*sum all the data of a list*/
int sum_listint(listint_t *head);
/*function to insert new node at a given position*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
/*function to delete the node at index of a list*/
int delete_nodeint_at_index(listint_t **head, unsigned int index);
#endif
