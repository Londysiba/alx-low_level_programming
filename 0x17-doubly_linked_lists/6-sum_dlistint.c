#include "lists.h"

/**
 * sum_dlistint - function that sums The elements in the list
 * @head: pointer to head of the list
 * Return: sum of all elements in the list, or 0 if list is NULL
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
