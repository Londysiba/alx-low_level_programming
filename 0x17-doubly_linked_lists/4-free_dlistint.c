#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - function that frees a doubly linked list
 * @head: pointer to head of doubly linked list to free
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
